import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb_tools.runner import get_runner
import os
from pathlib import Path

M = 8
dim = 5
L = 2
WIDTH_AB = 8
WIDTH_CD = 16

async def gen_clk(sig, period_ns=10):
    while True:
        sig.value = 0
        await Timer(period_ns // 2, unit="ns")
        sig.value = 1
        await Timer(period_ns // 2, unit="ns")

def pack_row_dim(row, width, dim, M):
    v = 0
    for i in range(M):
        x = row[i] if i < dim else 0
        v |= int(x) << (i * width)
    return v

async def reset(dut):
    hb = dut.hb_bus

    hb.rst_n.value = 0
    hb.clr_n.value = 0

    hb.start.value = 0
    hb.a_valid.value = 0
    hb.b_valid.value = 0
    hb.c_valid.value = 0
    hb.d_ready.value = 1

    hb.a.value = 0
    hb.b.value = 0
    hb.c.value = 0
    hb.dim.value = dim

    for _ in range(5):
        await RisingEdge(hb.clk)

    hb.rst_n.value = 1
    hb.clr_n.value = 1
    await RisingEdge(hb.clk)


async def drive_synced_ab_c(dut, A, B, C, dim, M):
    hb = dut.hb_bus

    for i in range(dim):
        # drive inputs
        hb.a.value = pack_row_dim(A[i], WIDTH_AB, dim, M)
        hb.b.value = pack_row_dim(B[i], WIDTH_AB, dim, M)
        hb.c.value = pack_row_dim(C[i], WIDTH_CD, dim, M)

        hb.dim.value = dim
        hb.start.value = 1 if i == 0 else 0

        # assert valid
        hb.a_valid.value = 1
        hb.b_valid.value = 1
        hb.c_valid.value = 1

        # wait for handshake
        while True:
            await RisingEdge(hb.clk)
            if (hb.a_ready.value and hb.b_ready.value and hb.c_ready.value):
                break

        # deassert valids
        hb.a_valid.value = 0
        hb.b_valid.value = 0
        hb.c_valid.value = 0
        hb.start.value = 0

async def drain_and_clear(dut, dim, M, L=2):
    hb = dut.hb_bus

    zero_ab = [0] * M
    zero_c  = [0] * M

    total_cycles = 2 * dim + L - 1

    for i in range(total_cycles):
        # drive zeros
        hb.a.value = pack_row_dim(zero_ab, WIDTH_AB, dim, M)
        hb.b.value = pack_row_dim(zero_ab, WIDTH_AB, dim, M)
        hb.c.value = pack_row_dim(zero_c, WIDTH_CD, dim, M)

        hb.a_valid.value = 1
        hb.b_valid.value = 1
        hb.c_valid.value = 1
        hb.start.value = i == 0
        hb.dim.value = dim

        # wait handshake
        while True:
            await RisingEdge(hb.clk)
            if (hb.a_ready.value and hb.b_ready.value and hb.c_ready.value):
                break

        # deassert
        hb.a_valid.value = 0
        hb.b_valid.value = 0
        hb.c_valid.value = 0

    # clear state
    hb.clr_n.value = 0
    await RisingEdge(hb.clk)
    hb.clr_n.value = 1
    await RisingEdge(hb.clk)

async def collect_outputs(dut, dim, WIDTH_CD, storage):
    hb = dut.hb_bus
    current_rows = []
    current_cycles = []
    cycle = 0

    while True:
        await RisingEdge(hb.clk)

        if hb.d_valid.value and hb.d_ready.value:
            d_val = int(hb.d.value)
            row = [(d_val >> (j * WIDTH_CD)) & ((1 << WIDTH_CD) - 1) for j in range(dim)]
            current_rows.append(row)
            current_cycles.append(cycle)

            if len(current_rows) == dim:
                storage[tuple(current_cycles)] = current_rows.copy()
                current_rows.clear()
                current_cycles.clear()

        cycle += 1

async def monitor(dut, cycles=50):
    hb = dut.hb_bus

    for i in range(cycles):
        await RisingEdge(hb.clk)

        cocotb.log.info("\n" + "=" * 100)
        cocotb.log.info(f"[Cycle {i}]")

        cocotb.log.info("Inputs:")
        cocotb.log.info(f"  rst_n     = {int(hb.rst_n.value)}")
        cocotb.log.info(f"  clr_n     = {int(hb.clr_n.value)}")
        cocotb.log.info(f"  start     = {int(hb.start.value)}")
        cocotb.log.info(f"  dim       = {int(hb.dim.value)}")

        cocotb.log.info(f"  a_valid   = {int(hb.a_valid.value)}")
        cocotb.log.info(f"  b_valid   = {int(hb.b_valid.value)}")
        cocotb.log.info(f"  c_valid   = {int(hb.c_valid.value)}")

        cocotb.log.info(f"  a         = {int(hb.a.value)}")
        cocotb.log.info(f"  b         = {int(hb.b.value)}")
        cocotb.log.info(f"  c         = {int(hb.c.value)}")

        cocotb.log.info("Ready:")
        cocotb.log.info(f"  a_ready   = {int(hb.a_ready.value)}")
        cocotb.log.info(f"  b_ready   = {int(hb.b_ready.value)}")
        cocotb.log.info(f"  c_ready   = {int(hb.c_ready.value)}")

        cocotb.log.info("Outputs:")
        cocotb.log.info(f"  d_valid   = {int(hb.d_valid.value)}")
        cocotb.log.info(f"  d_ready   = {int(hb.d_ready.value)}")
        cocotb.log.info(f"  d         = {int(hb.d.value)}")

        d_val = int(hb.d.value)
        row = [(d_val >> (j * WIDTH_CD)) & ((1 << WIDTH_CD) - 1) for j in range(dim)]

        cocotb.log.info(f"Decoded d = {row}")

        cocotb.log.info("Raw handshake:")
        cocotb.log.info(
            f"  valid&ready A={int(hb.a_valid.value and hb.a_ready.value)} "
            f"B={int(hb.b_valid.value and hb.b_ready.value)} "
            f"C={int(hb.c_valid.value and hb.c_ready.value)}"
        )

def pretty_print_matrices(matrices):
    print("\n" + "=" * 80)
    print("Collected Outputs")
    print("=" * 80)

    for txn_id, mat in matrices.items():
        print(f"\n Transaction {txn_id}")
        print("   Matrix :")
        if not mat:
            print("     <empty>")
            continue
        col_width = max(len(str(x)) for row in mat for x in row) + 2
        for row in mat:
            row_str = " ".join(f"{x:>{col_width}}" for x in row)
            print(f"     {row_str}")

    print("\n" + "=" * 80)

@cocotb.test()
async def test_top_mmacu_hb(dut):
    hb = dut.hb_bus
    DEBUG = False
    cocotb.start_soon(gen_clk(hb.clk))
    await reset(dut)
    cocotb.start_soon(monitor(dut, 40)) if DEBUG else 1+1
    outputs = dict()
    cocotb.start_soon(collect_outputs(dut, dim, WIDTH_CD, outputs))

    # A = [
    #     [1,2,3,4],
    #     [5,6,7,8],
    #     [9,10,11,12],
    #     [13,14,15,16]
    # ]
    # B = [
    #     [1,4,2,2],
    #     [8,11,13,2],
    #     [1,0,1,3],
    #     [5,5,2,2]
    # ]
    # C = [
    #     [1,2,3,4],
    #     [5,6,7,8],
    #     [9,10,11,12],
    #     [13,14,15,16]
    # ]
    # D = [[0, 4, 2, 2],
    #     [18,21,1, 2],
    #     [1, 0, 19, 33],
    #     [5, 1, 2, 2],]


    A = [
    [1,2,3,4,5,6,7,8],
    [9,10,11,12,13,14,15,16],
    [17,18,19,20,21,22,23,24],
    [25,26,27,28,29,30,31,32],
    [33,34,35,36,37,38,39,40],
    [41,42,43,44,45,46,47,48],
    [49,50,51,52,53,54,55,56],
    [57,58,59,60,61,62,63,64]
]

    B = [
        [1,0,2,1,3,2,4,1],
        [2,1,3,2,4,3,5,2],
        [3,2,4,3,5,4,6,3],
        [4,3,5,4,6,5,7,4],
        [5,4,6,5,7,6,8,5],
        [6,5,7,6,8,7,9,6],
        [7,6,8,7,9,8,10,7],
        [8,7,9,8,10,9,11,8]
    ]

    C = [
        [1,1,1,1,1,1,1,1],
        [2,2,2,2,2,2,2,2],
        [3,3,3,3,3,3,3,3],
        [4,4,4,4,4,4,4,4],
        [5,5,5,5,5,5,5,5],
        [6,6,6,6,6,6,6,6],
        [7,7,7,7,7,7,7,7],
        [8,8,8,8,8,8,8,8]
    ]

    D = [
        [0,1,2,3,4,5,6,7],
        [7,6,5,4,3,2,1,0],
        [1,3,5,7,9,11,13,15],
        [2,4,6,8,10,12,14,16],
        [3,6,9,12,15,18,21,24],
        [4,8,12,16,20,24,28,32],
        [5,10,15,20,25,30,35,40],
        [6,12,18,24,30,36,42,48]
    ]

    
    null_matrix = [[0 for _ in range(dim)] for _ in range(dim)]
    
    await drive_synced_ab_c(dut, A, B, C, dim, M)
    # await drain_and_clear(dut, dim, M, L)
    await drive_synced_ab_c(dut, C, D, A, dim, M)
    await drain_and_clear(dut, dim, M, L)
    await drive_synced_ab_c(dut, D, D, A, dim, M)
    await drain_and_clear(dut, dim, M, L)

    pretty_print_matrices(outputs)








def run():
    sim = os.getenv("SIM", "dsim")

    rtl = Path(__file__).parent.parent.parent / "rtl"

    sources = [
        rtl / "design" / "top" / "top_mmacu.sv",
        rtl / "design" / "core" / "mmacu.sv",
        rtl / "design" / "core" / "mac20i.sv",
        rtl / "design" / "core" / "common.sv",
        rtl / "interfaces" / "hb_if.sv",
        rtl / "interfaces" / "lb_if.sv",
    ]

    runner = get_runner(sim)

    runner.build(
        sources=sources,
        hdl_toplevel="top_mmacu",
        always=True,
    )

    runner.test(
        hdl_toplevel="top_mmacu",
        test_module=Path(__file__).stem,
    )

if __name__ == "__main__":
    run()
