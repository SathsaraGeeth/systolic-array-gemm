import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from cocotb_tools.runner import get_runner
import os
from pathlib import Path

################# Parameters #################

M = 4
WIDTH_AB = 8
WIDTH_CD = 16

################# Interface #################

PORT_DIR = {
    "i_clk": "in",
    "i_rst_n": "in",
    "i_clr_n": "in",

    "i_sync_load": "in",
    "i_load_init": "in",
    "i_load_dim": "in",
    "i_c": "in",
    "i_c_valid": "in",
    "o_c_ready": "out",
    "o_load_done": "out",

    "i_start": "in",
    "i_a": "in",
    "i_b": "in",
    "i_ab_valid": "in",
    "o_ab_ready": "out",

    "i_uload_dim": "in",
    "o_d": "out",
    "o_d_valid": "out",
    "i_d_ready": "in",
    "o_uload_done": "out",
}

class MmacuIface:
    def __init__(self, dut):
        self.dut = dut

    def __setitem__(self, sig, val):
        if PORT_DIR[sig] == "out":
            raise RuntimeError(f"Cannot drive output {sig}")
        getattr(self.dut, sig).value = val

    def __getitem__(self, sig):
        val = getattr(self.dut, sig).value
        try:
            return int(val)
        except ValueError:
            return hex(int(val)) if val != 'x' else str(val)

    def dump(self):
        cocotb.log.info("Interface:")
        for sig in PORT_DIR:
            try:
                cocotb.log.info(f"  {sig:14s} = {self[sig]}")
            except Exception as e:
                cocotb.log.warning(f"  {sig:14s} = <error: {e}>")

################# Monitors #################

def print_matrix(name, mat, width=6):
    cocotb.log.info(f"\n{name}:")
    for row in mat:
        cocotb.log.info("  " + " ".join(f"{v:{width}d}" for v in row))

def read_array(dut, base, width, M):
    """Read MxM matrix from DUT (post-flat, element-wise)."""
    mat = [[0]*M for _ in range(M)]
    arr = getattr(dut, base)
    for i in range(M):
        for j in range(M):
            val = arr[i][j].value
            try:
                mat[i][j] = int(val)
            except ValueError:
                mat[i][j] = 0
    return mat

def print_o_d(dut, M=4, width=WIDTH_CD):
    full_val = dut.o_d.value  # packed M*WIDTH_CD bits
    row = []
    for j in range(M):
        val = (int(full_val) >> (j * width)) & ((1 << width) - 1)
        row.append(val)
    cocotb.log.info("o_d: [" + ", ".join(f"{v}" for v in row) + "]")

async def monitor_cycle(dut, iface, cycles=None):
    cycle = 0
    while cycles is None or cycle < cycles:
        await RisingEdge(dut.i_clk)

        cocotb.log.info("\n" + "=" * 72)
        cocotb.log.info(f"Cycle {cycle}")

        iface.dump()

        print_matrix("A regs", read_array(dut, "wn_a", WIDTH_AB, M))
        print_matrix("B regs", read_array(dut, "wn_b", WIDTH_AB, M))
        print_matrix("C regs", read_array(dut, "wn_c", WIDTH_CD, M))
        print_matrix("D regs", read_array(dut, "wn_d", WIDTH_CD, M))
        print_matrix("Start",  read_array(dut, "wn_start", 1, M))
        print_matrix("Done",   read_array(dut, "wn_done", 1, M))
        print_o_d(dut)

        cycle += 1

################# Drivers #################

async def gen_clk(dut, period_ns=10):
    while True:
        dut.i_clk.value = 0
        await Timer(period_ns // 2, unit="ns")
        dut.i_clk.value = 1
        await Timer(period_ns // 2, unit="ns")

async def reset(dut, iface, cycles=3):
    iface["i_rst_n"] = 0
    iface["i_clr_n"] = 0

    iface["i_sync_load"] = 0
    iface["i_load_init"] = 0
    iface["i_c_valid"] = 0
    iface["i_ab_valid"] = 0
    iface["i_start"] = 0
    iface["i_d_ready"] = 1

    iface["i_a"] = 0
    iface["i_b"] = 0
    iface["i_c"] = 0

    iface["i_uload_dim"] = 4
    iface["i_load_dim"] = 4

    for _ in range(cycles):
        await RisingEdge(dut.i_clk)

    iface["i_rst_n"] = 1
    iface["i_clr_n"] = 1
    await RisingEdge(dut.i_clk)

def pack_row(row, width):
    v = 0
    for i, x in enumerate(row):
        v |= int(x) << (i * width)
    return v

async def drive_ab(iface, dut, a_row, b_row, start=False):
    iface["i_a"] = pack_row(a_row, WIDTH_AB)
    iface["i_b"] = pack_row(b_row, WIDTH_AB)
    iface["i_ab_valid"] = 1
    iface["i_start"] = int(start)

    while not iface["o_ab_ready"]:
        await RisingEdge(dut.i_clk)

    await RisingEdge(dut.i_clk)
    iface["i_ab_valid"] = 0
    iface["i_start"] = 0

async def drive_synced_ab_c(iface, dut, a_matrix, b_matrix, c_matrix):
    n_rows = len(a_matrix)
    for i in range(n_rows):
        iface["i_a"] = pack_row(a_matrix[i], WIDTH_AB)
        iface["i_b"] = pack_row(b_matrix[i], WIDTH_AB)
        iface["i_c"] = pack_row(c_matrix[i], WIDTH_CD)
        iface["i_sync_load"] = 1
        iface["i_load_init"] = 1 if i == 0 else 0
        iface["i_load_dim"] = 4
        iface["i_ab_valid"] = 1
        iface["i_c_valid"] = 1
        iface["i_start"] = 1 if i == 0 else 0
        while not iface["o_ab_ready"] or not iface["o_c_ready"]:
            await RisingEdge(dut.i_clk)
        await RisingEdge(dut.i_clk)
    iface["i_ab_valid"] = 0
    iface["i_c_valid"] = 0
    iface["i_start"] = 0
    iface["i_load_init"] = 0

################# Test #################

@cocotb.test()
async def test_mmacu(dut):
    cocotb.start_soon(gen_clk(dut))
    iface = MmacuIface(dut)
    await reset(dut, iface)
    cocotb.start_soon(monitor_cycle(dut, iface, cycles=100))

    
    null_matrix = [[0 for _ in range(M)] for _ in range(1000)]
    matrixA = [[1, 2, 3, 4],
               [5, 6, 7, 8],
               [9,10,11,12],
               [13,14,15,16],]
    matrixB = [[1, 4, 2, 2],
               [8,11,13, 2],
               [1, 0, 1, 3],
               [5, 5, 2, 2],]
    matrixC = [
                [1,2,3,4],
                [5,6,7,8],
                [9,10,11,12],
                [13,14,15,16]
            ]
    matrixD = [[0, 4, 2, 2],
               [18,21,1, 2],
               [1, 0, 19, 33],
               [5, 1, 2, 2],]
    
    # Test1: stream A/B in
    # for i in range(4):
    #     await drive_ab(iface, dut, matrixC[i], matrixD[i], start=(i == 0))
    # for i in range(4):
    #     await drive_ab(iface, dut, matrixA[i], matrixB[i], start=(i == 0))
    # for i in range(4):
    #     await drive_ab(iface, dut, matrixC[i], matrixD[i], start=(i == 0))
    # for i in range(16):
    #     await drive_ab(iface, dut, null_matrix[i], null_matrix[i], start=(i == 0))
    # for i in range(4):
    #     await drive_ab(iface, dut, matrixA[i], matrixB[i], start=(i == 0))
    # for i in range(4):
    #     await drive_ab(iface, dut, null_matrix[i], null_matrix[i], start=(i == 0))
    # for i in range(4):
    #     await drive_ab(iface, dut, matrixC[i], matrixD[i], start=(i == 0))
    # for i in range(16):
    #     await drive_ab(iface, dut, null_matrix[i], null_matrix[i], start=(i == 0))

    # synced load test
    await drive_synced_ab_c(iface, dut, matrixA, matrixB, matrixC)
    await drive_synced_ab_c(iface, dut, matrixC, matrixD, matrixA)
    for i in range(16):
        await drive_ab(iface, dut, null_matrix[i], null_matrix[i], start=(i == 0))
    # for i in range(4):
    #     await drive_ab(iface, dut, matrixC[i], matrixD[i], start=(i == 0))
    # for i in range(4):
    #     await drive_ab(iface, dut, matrixA[i], matrixB[i], start=(i == 0))
    # for i in range(4):
    #     await drive_ab(iface, dut, matrixC[i], matrixD[i], start=(i == 0))
    # for i in range(16):
    #     await drive_ab(iface, dut, null_matrix[i], null_matrix[i], start=(i == 0))








################# Run #################

def run():
    sim = os.getenv("SIM", "dsim")
    project_dir = Path(__file__).parent.parent.parent / "rtl" / "design" / "core"

    sources = [
        project_dir / "mmacu.sv",
        project_dir / "mac10.sv",
        project_dir / "common.sv"
    ]

    runner = get_runner(sim)
    runner.build(
        sources=sources,
        hdl_toplevel="mmacu",
        always=True,
    )
    runner.test(
        hdl_toplevel="mmacu",
        test_module="_sim",
    )

if __name__ == "__main__":
    run()
