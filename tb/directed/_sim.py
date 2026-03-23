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
    matrixC = [[11, 2, 3, 4],
               [5, 63, 7, 81],
               [9,10,11,2],
               [13,4,15,16],]
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
        test_module="sim",
    )

if __name__ == "__main__":
    run()












































# import cocotb
# from cocotb.clock import Clock
# from cocotb.triggers import RisingEdge, Timer
# from cocotb_tools.runner import get_runner
# import os
# from pathlib import Path

# ################# Parameters #################

# M = 4
# WIDTH_AB = 8
# WIDTH_CD = 16

# ################# Interface #################

# PORT_DIR = {
#     "i_clk": "in",
#     "i_rst_n": "in",
#     "i_clr_n": "in",

#     "i_sync_load": "in",
#     "i_load_init": "in",
#     "i_load_dim": "in",
#     "i_c": "in",
#     "i_c_valid": "in",
#     "o_c_ready": "out",
#     "o_load_done": "out",

#     "i_start": "in",
#     "i_a": "in",
#     "i_b": "in",
#     "i_ab_valid": "in",
#     "o_ab_ready": "out",

#     "i_uload_dim": "in",
#     "o_d": "out",
#     "o_d_valid": "out",
#     "i_d_ready": "in",
#     "o_uload_done": "out",
# }

# class MmacuIface:
#     def __init__(self, dut):
#         self.dut = dut
#     def __setitem__(self, sig, val):
#         if PORT_DIR[sig] == "out":
#             raise RuntimeError(f"Cannot drive output {sig}")
#         getattr(self.dut, sig).value = val
#     def __getitem__(self, sig):
#         val = getattr(self.dut, sig).value
#         try:
#             return int(val)
#         except ValueError:
#             return hex(int(val)) if val != 'x' else str(val)
#     def dump(self):
#         cocotb.log.info("Interface:")
#         for sig in PORT_DIR:
#             try:
#                 cocotb.log.info(f"  {sig:14s} = {self[sig]}")
#             except Exception as e:
#                 cocotb.log.warning(f"  {sig:14s} = <error: {e}>")

# ################# Monitors #################

# def print_matrix(name, mat, width=6):
#     cocotb.log.info(f"\n{name}:")
#     for row in mat:
#         cocotb.log.info("  " + " ".join(f"{v:{width}d}" for v in row))


# def read_2d_array(dut, base):
#     mat = [[0]*M for _ in range(M)]
#     arr = getattr(dut, base)
#     for i in range(M):
#         for j in range(M):
#             mat[i][j] = int(arr[i][j].value)
#     return mat


# async def monitor_cycle(dut, iface, cycles=None):
#     cycle = 0
#     while cycles is None or cycle < cycles:
#         await RisingEdge(dut.i_clk)

#         cocotb.log.info("\n" + "=" * 72)
#         cocotb.log.info(f"Cycle {cycle}")

#         iface.dump()

#         print_matrix("A regs", read_2d_array(dut, "wn_a"))
#         print_matrix("B regs", read_2d_array(dut, "wn_b"))
#         print_matrix("C regs", read_2d_array(dut, "wn_c"))
#         print_matrix("D regs", read_2d_array(dut, "wn_d"))
#         print_matrix("Start",  read_2d_array(dut, "wn_start"))
#         print_matrix("Done",   read_2d_array(dut, "wn_done"))

#         cycle += 1


# ################# Drivers #################

# async def gen_clk(dut, period_ns=10):
#     while True:
#         dut.i_clk.value = 0
#         await Timer(period_ns // 2, unit="ns")
#         dut.i_clk.value = 1
#         await Timer(period_ns // 2, unit="ns")


# async def reset(dut, iface, cycles=3):
#     iface["i_rst_n"] = 0
#     iface["i_clr_n"] = 0

#     iface["i_sync_load"] = 0
#     iface["i_load_init"] = 0
#     iface["i_c_valid"] = 0
#     iface["i_ab_valid"] = 0
#     iface["i_start"] = 0
#     iface["i_d_ready"] = 0

#     iface["i_a"] = 0
#     iface["i_b"] = 0
#     iface["i_c"] = 0

#     for _ in range(cycles):
#         await RisingEdge(dut.i_clk)

#     iface["i_rst_n"] = 1
#     iface["i_clr_n"] = 1
#     await RisingEdge(dut.i_clk)


# def pack_row(row, width):
#     v = 0
#     for i, x in enumerate(row):
#         v |= int(x) << (i * width)
#     return v


# async def drive_ab(iface, dut, a_row, b_row, start=False):
#     iface["i_a"] = pack_row(a_row, WIDTH_AB)
#     iface["i_b"] = pack_row(b_row, WIDTH_AB)
#     iface["i_ab_valid"] = 1
#     iface["i_start"] = int(start)

#     while not iface["o_ab_ready"]:
#         await RisingEdge(dut.i_clk)

#     await RisingEdge(dut.i_clk)
#     iface["i_ab_valid"] = 0
#     iface["i_start"] = 0


# ################# Test #################

# @cocotb.test()
# async def test_mmacu_visual(dut):
#     cocotb.start_soon(gen_clk(dut))
#     iface = MmacuIface(dut)
#     await reset(dut, iface)
#     cocotb.start_soon(monitor_cycle(dut, iface, cycles=100))
#     null_matrix = [[0 for _ in range(M)] for _ in range(1000)]

#     # Test1: stream A/B in
#     matrixA = [
#         [1, 2, 3, 4],
#         [5, 6, 7, 8],
#         [9,10,11,12],
#         [13,14,15,16],
#     ]
#     matrixB = [
#         [1, 4, 2, 2],
#         [8,11,13, 2],
#         [1, 0, 1, 3],
#         [5, 5, 2, 2],
#     ]
#     for i in range(4):
#         await drive_ab(
#             iface,
#             dut,
#             matrixA[i],
#             matrixB[i],
#             start=(i == 0)
#         )
#     for i in range(16):
#         await drive_ab(
#             iface,
#             dut,
#             null_matrix[i],
#             null_matrix[i],
#             start=0
#         )
    












# def run():
#     sim = os.getenv("SIM", "dsim")
#     project_dir = Path(__file__).parent.parent / "rtl"

#     sources = [
#         project_dir / "mmacu.sv",
#         project_dir / "mac.sv",
#     ]

#     runner = get_runner(sim)
#     runner.build(
#         sources=sources,
#         hdl_toplevel="mmacu",
#         always=True,
#     )
#     runner.test(
#         hdl_toplevel="mmacu",
#         test_module="mmacu_tb",
#     )


# if __name__ == "__main__":
#     run()





































































































# # mmacu_tb.py
# import cocotb
# from cocotb.clock import Clock
# from cocotb.triggers import RisingEdge, Timer
# from cocotb_tools.runner import get_runner
# import os
# from pathlib import Path

# M = 4
# WIDTH_AB = 8
# WIDTH_CD = 16

# async def gen_clk(dut, period_ns=10):
#     while True:
#         dut.i_clk.value = 0
#         await Timer(period_ns // 2, unit="ns")
#         dut.i_clk.value = 1
#         await Timer(period_ns // 2, unit="ns")

# def flatten_array(lst, width):
#     val = 0
#     for i, x in enumerate(lst):
#         val |= (x << (i * width))
#     return val

# async def reset(dut, cycles=3):
#     dut.i_rst_n.value = 0
#     dut.i_clr_n.value = 0

#     dut.i_start.value = 0
#     dut.i_uload_dim.value = 1

#     dut.i_ab_valid.value = 0
#     dut.i_c_valid.value = 0
#     dut.i_d_ready.value = 0

#     dut.i_a.value = flatten_array([0]*M, WIDTH_AB)
#     dut.i_b.value = flatten_array([0]*M, WIDTH_AB)
#     dut.i_c.value = flatten_array([0]*M, WIDTH_CD)

#     for _ in range(cycles):
#         await RisingEdge(dut.i_clk)

#     dut.i_rst_n.value = 1
#     dut.i_clr_n.value = 1
#     await RisingEdge(dut.i_clk)

# def print_matrix(name, mat, width=6):
#     cocotb.log.info(f"\n{name}:")
#     for row in mat:
#         cocotb.log.info(
#             "  " + " ".join(f"{v:{width}d}" for v in row)
#         )

# def read_2d_array(dut, base, M):
#     mat = [[0]*M for _ in range(M)]
#     array_handle = getattr(dut, base)  # this is the 1st dimension
#     for i in range(M):
#         for j in range(M):
#             mat[i][j] = int(array_handle[i][j].value)  # use .value directly
#     return mat

# def read_d_array(dut, M):
#     mat = [[0]*M for _ in range(M)]
#     for j in range(M):
#         val = int(dut.o_d[j].value)
#         for i in reversed(range(M)):
#             mat[i][j] = val & ((1<<WIDTH_CD)-1)
#             val >>= WIDTH_CD
#     return mat

# def read_2d_done(dut, base, M):
#     mat = [[0]*M for _ in range(M)]
#     array_handle = getattr(dut, base)

#     for i in range(M):
#         # Read the entire packed row
#         row_val = array_handle[i].value  # BinaryValue
#         row_int = int(row_val)

#         for j in range(M):
#             # Extract bit j (LSB = column 0)
#             mat[i][j] = (row_int >> j) & 1

#     return mat

# async def monitor_mmacu_matrices(dut, cycles=None):
#     count = 0
#     while cycles is None or count < cycles:
#         await RisingEdge(dut.i_clk)

#         A = read_2d_array(dut, "wn_a", M)
#         B = read_2d_array(dut, "wn_b", M)
#         C = read_2d_array(dut, "wn_c", M)
#         D = read_2d_array(dut, "wn_d", M)
#         Start = read_2d_array(dut, "wn_start", M)
#         Done = read_2d_array(dut, "wn_done", M)

#         cocotb.log.info("\n" + "="*64)
#         cocotb.log.info(f"Cycle {count}")

#         print_matrix("A registers", A)
#         print_matrix("B registers", B)
#         print_matrix("C registers", C)
#         print_matrix("D registers", D)
#         print_matrix("Start registers", Start)
#         print_matrix("Done registers", Done)

#         count += 1

# def print_o_d_row(dut, M=4, width=WIDTH_CD):
#     full_val = dut.o_d.value  # packed M*WIDTH_CD
#     row = [int(full_val[(j+1)*width-1 : j*width]) for j in range(M)]
#     cocotb.log.info("o_d: [" + ", ".join(str(v) for v in row) + "]")

# # module mmacu #(
# #     parameter int M = 4,
# #     parameter int WIDTH_AB = 8,
# #     parameter int WIDTH_CD = 16
# # )(
# #     input  logic                                    i_clk,
# #     input  logic                                    i_rst_n,
# #     input  logic                                    i_clr_n,

# #     // Load phase
# #     input  logic                                    i_sync_load,    // a level stable over load period
# #     input  logic                                    i_load_init,    // a pulse
# #     input  logic [$clog2(M+1)-1:0]                  i_load_dim,     // a pulse/level sampled and i_load_init
# #     input  logic [M-1:0][WIDTH_CD-1:0]              i_c,
# #     input  logic                                    i_c_valid,
# #     output logic                                    o_c_ready,
# #     output logic                                    o_load_done,

# #     // Compute phase
# #     input  logic                                    i_start,        // a pulse
# #     input  logic [M-1:0][WIDTH_AB-1:0]              i_a,
# #     input  logic [M-1:0][WIDTH_AB-1:0]              i_b,
# #     input  logic                                    i_ab_valid,
# #     output logic                                    o_ab_ready,

# #     // Unload phase
# #     input  logic [$clog2(M+1)-1:0]                  i_uload_dim,    // a level
# #     output logic [M*WIDTH_CD-1:0]                   o_d,
# #     output logic                                    o_d_valid,
# #     input  logic                                    i_d_ready,
# #     output logic                                    o_uload_done
# # ); 


# def control_signals(dut):
#     control_vec = {dut.i_load_init.value: 0, dut.i_load_dim.value = 4, dut}

# @cocotb.test()
# async def test_mmacu_visual(dut):
#     cocotb.start_soon(gen_clk(dut))
#     await reset(dut)

#     cocotb.start_soon(
#         monitor_mmacu_matrices(dut, cycles=100)
#     )

#     # Compute1
#     await RisingEdge(dut.i_clk)
#     dut.i_sync_load.value = 0
#     dut.i_load_init.value = 1
#     dut.i_load_dim.value = 4
#     dut.i_c_valid.value = 1


#     matrixA = [[1, 3, 5, 6], [4, 1, 2, 8], [5, 1, 1, 3], [9, 0, 4, 1]] + [[0, 0, 0, 0] for _ in range(1024)]
#     matrixB = [[5, 1, 4, 2], [4, 1, 3, 3], [0, 0, 1, 2], [7, 6, 2, 1]] + [[0, 0, 0, 0] for _ in range(1024)] # transpose of B really

    
#     dut.i_ab_valid.value = 1
#     await RisingEdge(dut.i_clk)
#     dut.i_start.value = 1
#     dut.i_a.value = flatten_array(matrixA[0], WIDTH_AB)
#     dut.i_b.value = flatten_array(matrixB[0], WIDTH_AB)
#     await RisingEdge(dut.i_clk)

#     dut.i_start.value = 0
#     dut.i_a.value = flatten_array(matrixA[1], WIDTH_AB)
#     dut.i_b.value = flatten_array(matrixB[1], WIDTH_AB)
#     await RisingEdge(dut.i_clk)

#     dut.i_start.value = 0
#     dut.i_a.value = flatten_array(matrixA[2], WIDTH_AB)
#     dut.i_b.value = flatten_array(matrixB[2], WIDTH_AB)
#     await RisingEdge(dut.i_clk)

#     dut.i_start.value = 0
#     dut.i_a.value = flatten_array(matrixA[3], WIDTH_AB)
#     dut.i_b.value = flatten_array(matrixB[3], WIDTH_AB)
#     await RisingEdge(dut.i_clk)





#     # async load 1
#     matrixC = [
#     [1,  2,  3,  4],
#     [5,  6,  7,  8],
#     [9, 10, 11, 12],
#     [13,14, 15, 16]
#     ]

#     await RisingEdge(dut.i_clk)

#     dut.i_load_dim.value = 4
#     dut.i_sync_load.value = 0
#     dut.i_c_valid.value = 1

#     # ---- Cycle 0 : init + row0 ----
#     dut.i_load_init.value = 1
#     dut.i_c.value = flatten_array(matrixC[0], WIDTH_CD)

#     await RisingEdge(dut.i_clk)   # row0 captured
#     print("load0")

#     # Drop init AFTER it was sampled
#     dut.i_load_init.value = 0

#     # ---- Cycle 1 : row1 ----
#     dut.i_c.value = flatten_array(matrixC[1], WIDTH_CD)
#     await RisingEdge(dut.i_clk)
#     print("load1")

#     # ---- Cycle 2 : row2 ----
#     dut.i_c.value = flatten_array(matrixC[2], WIDTH_CD)
#     await RisingEdge(dut.i_clk)
#     print("load2")

#     # ---- Cycle 3 : row3 ----
#     dut.i_c.value = flatten_array(matrixC[3], WIDTH_CD)
#     await RisingEdge(dut.i_clk)
#     print("load3")


#     # Optional: deassert valid after last beat
#     dut.i_c_valid.value = 0


#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)













#     # compute2 - uload
#     matrixA = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]] + [[0, 0, 0, 0] for _ in range(1024)]
#     matrixB = [[1, 4, 2, 2], [8, 11, 13, 2], [1, 0, 1, 3], [5, 5, 2, 2]] + [[0, 0, 0, 0] for _ in range(1024)] # transpose of B really
    
#     dut.i_uload_dim.value = 4
#     await RisingEdge(dut.i_clk)
#     dut.i_d_ready.value = 1
#     print("uload0")
#     print_o_d_row(dut)

#     dut.i_ab_valid.value = 1
#     dut.i_start.value = 1
#     dut.i_a.value = flatten_array(matrixA[0], WIDTH_AB)
#     dut.i_b.value = flatten_array(matrixB[0], WIDTH_AB)
#     await RisingEdge(dut.i_clk)
#     print_o_d_row(dut)
    
#     dut.i_start.value = 0
#     dut.i_a.value = flatten_array(matrixA[1], WIDTH_AB)
#     dut.i_b.value = flatten_array(matrixB[1], WIDTH_AB)
#     print("uload1")
#     await RisingEdge(dut.i_clk)
#     print_o_d_row(dut)
    

#     dut.i_start.value = 0
#     dut.i_a.value = flatten_array(matrixA[2], WIDTH_AB)
#     dut.i_b.value = flatten_array(matrixB[2], WIDTH_AB)
#     print("uload2")
#     await RisingEdge(dut.i_clk)
#     print_o_d_row(dut)

#     dut.i_start.value = 0
#     dut.i_a.value = flatten_array(matrixA[3], WIDTH_AB)
#     dut.i_b.value = flatten_array(matrixB[3], WIDTH_AB)
#     print("uload3")
#     await RisingEdge(dut.i_clk)
#     print_o_d_row(dut)

#     for i in range(8):
#         dut.i_start.value = 0
#         dut.i_a.value = flatten_array(matrixA[4+i], WIDTH_AB)
#         dut.i_b.value = flatten_array(matrixB[4+i], WIDTH_AB)
#         await RisingEdge(dut.i_clk)
#         print_o_d_row(dut)


#     # Compute1
#     dut.i_sync_load.value = 0
#     matrixA = [[1, 3, 5, 6], [4, 1, 2, 8], [5, 1, 1, 3], [9, 0, 4, 1]] + [[0, 0, 0, 0] for _ in range(1024)]
#     matrixB = [[5, 1, 4, 2], [4, 1, 3, 3], [0, 0, 1, 2], [7, 6, 2, 1]] + [[0, 0, 0, 0] for _ in range(1024)] # transpose of B really

    
#     dut.i_ab_valid.value = 1
#     dut.i_start.value = 1
#     dut.i_a.value = flatten_array(matrixA[0], WIDTH_AB)
#     dut.i_b.value = flatten_array(matrixB[0], WIDTH_AB)
#     await RisingEdge(dut.i_clk)
#     print_o_d_row(dut)

#     dut.i_start.value = 0
#     dut.i_a.value = flatten_array(matrixA[1], WIDTH_AB)
#     dut.i_b.value = flatten_array(matrixB[1], WIDTH_AB)
#     await RisingEdge(dut.i_clk)
#     print_o_d_row(dut)

#     dut.i_start.value = 0
#     dut.i_a.value = flatten_array(matrixA[2], WIDTH_AB)
#     dut.i_b.value = flatten_array(matrixB[2], WIDTH_AB)
#     await RisingEdge(dut.i_clk)
#     print_o_d_row(dut)

#     dut.i_start.value = 0
#     dut.i_a.value = flatten_array(matrixA[3], WIDTH_AB)
#     dut.i_b.value = flatten_array(matrixB[3], WIDTH_AB)
#     await RisingEdge(dut.i_clk)
#     print_o_d_row(dut)

#     for i in range(8):
#         dut.i_start.value = 0
#         dut.i_a.value = flatten_array(matrixA[4+i], WIDTH_AB)
#         dut.i_b.value = flatten_array(matrixB[4+i], WIDTH_AB)
#         await RisingEdge(dut.i_clk)
#         print_o_d_row(dut)


#     # async load 1
#     matrixC = [
#     [1,  2,  3,  4],
#     [5,  6,  7,  8],
#     [9, 10, 11, 12],
#     [13,14, 15, 16]
#     ]

#     await RisingEdge(dut.i_clk)

#     dut.i_load_dim.value = 4
#     dut.i_sync_load.value = 0
#     dut.i_c_valid.value = 1

#     # ---- Cycle 0 : init + row0 ----
#     dut.i_load_init.value = 1
#     dut.i_c.value = flatten_array(matrixC[0], WIDTH_CD)

#     await RisingEdge(dut.i_clk)   # row0 captured
#     print("load0")

#     # Drop init AFTER it was sampled
#     dut.i_load_init.value = 0

#     # ---- Cycle 1 : row1 ----
#     dut.i_c.value = flatten_array(matrixC[1], WIDTH_CD)
#     await RisingEdge(dut.i_clk)
#     print("load1")

#     # ---- Cycle 2 : row2 ----
#     dut.i_c.value = flatten_array(matrixC[2], WIDTH_CD)
#     await RisingEdge(dut.i_clk)
#     print("load2")

#     # ---- Cycle 3 : row3 ----
#     dut.i_c.value = flatten_array(matrixC[3], WIDTH_CD)
#     await RisingEdge(dut.i_clk)
#     print("load3")


#     # Optional: deassert valid after last beat
#     dut.i_c_valid.value = 0


#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)
#     await RisingEdge(dut.i_clk)



# def run():
#     sim = os.getenv("SIM", "dsim")
#     project_dir = Path(__file__).parent.parent / "rtl"

#     sources = [
#         project_dir / "mmacu.sv",
#         project_dir / "mac.sv",
#     ]

#     runner = get_runner(sim)
#     runner.build(
#         sources=sources,
#         hdl_toplevel="mmacu",
#         always=True,
#     )
#     runner.test(
#         hdl_toplevel="mmacu",
#         test_module="mmacu_tb",
#     )


# if __name__ == "__main__":
#     run()



# # mmacu_tb_flat_correct.py
# import cocotb
# from cocotb.clock import Clock
# from cocotb.triggers import RisingEdge, Timer
# from cocotb_tools.runner import get_runner
# import os
# from pathlib import Path

# M = 4
# WIDTH_AB = 8
# WIDTH_CD = 16

# async def gen_clk(dut, period_ns=10):
#     while True:
#         dut.i_clk.value = 0
#         await Timer(period_ns // 2, unit="ns")
#         dut.i_clk.value = 1
#         await Timer(period_ns // 2, unit="ns")

# def flatten_array(lst, width):
#     val = 0
#     for i, x in enumerate(lst):
#         val |= (x << (i * width))
#     return val

# async def reset(dut, cycles=3):
#     dut.i_rst_n.value = 0
#     dut.i_clr_n.value = 0

#     dut.i_start.value = 0
#     dut.i_uload_dim.value = 1

#     dut.i_ab_valid.value = 0
#     dut.i_c_valid.value = 0
#     dut.i_d_ready.value = 0

#     # Flattened zero assignment
#     dut.i_a.value = flatten_array([0]*M, WIDTH_AB)
#     dut.i_b.value = flatten_array([0]*M, WIDTH_AB)
#     dut.i_c.value = flatten_array([0]*M, WIDTH_CD)

#     for _ in range(cycles):
#         await RisingEdge(dut.i_clk)

#     dut.i_rst_n.value = 1
#     dut.i_clr_n.value = 1
#     await RisingEdge(dut.i_clk)

# def print_matrix(name, mat, width=6):
#     cocotb.log.info(f"\n{name}:")
#     for row in mat:
#         cocotb.log.info("  " + " ".join(f"{v:{width}d}" for v in row))

# def read_2d_array(dut, base, M):
#     """Read internal 2D registers (still works as before)."""
#     mat = [[0]*M for _ in range(M)]
#     array_handle = getattr(dut, base)
#     for i in range(M):
#         for j in range(M):
#             mat[i][j] = int(array_handle[i][j].value)
#     return mat

# def read_2d_done(dut, base, M):
#     mat = [[0]*M for _ in range(M)]
#     array_handle = getattr(dut, base)
#     for i in range(M):
#         row_val = array_handle[i].value
#         row_int = int(row_val)
#         for j in range(M):
#             mat[i][j] = (row_int >> j) & 1
#     return mat

# def print_o_d_row(dut, M=4, width=WIDTH_CD):
#     full_val = dut.o_d.value
#     row = [int(full_val[(j+1)*width-1 : j*width]) for j in range(M)]
#     cocotb.log.info("o_d: [" + ", ".join(str(v) for v in row) + "]")

# # -----------------------------------------------------------------------------
# # Matrix monitor (same as original, printing every cycle)
# # -----------------------------------------------------------------------------
# async def monitor_mmacu_matrices(dut, cycles=None):
#     count = 0
#     while cycles is None or count < cycles:
#         await RisingEdge(dut.i_clk)

#         A = read_2d_array(dut, "wn_a", M)
#         B = read_2d_array(dut, "wn_b", M)
#         C = read_2d_array(dut, "wn_c", M)
#         D = read_2d_array(dut, "wn_d", M)
#         Start = read_2d_array(dut, "wn_start", M)
#         Done = read_2d_array(dut, "wn_done", M)

#         cocotb.log.info("\n" + "="*64)
#         cocotb.log.info(f"Cycle {count}")

#         print_matrix("A registers", A)
#         print_matrix("B registers", B)
#         print_matrix("C registers", C)
#         print_matrix("D registers", D)
#         print_matrix("Start registers", Start)
#         print_matrix("Done registers", Done)

#         count += 1

# @cocotb.test()
# async def test_mmacu_visual(dut):
#     cocotb.start_soon(gen_clk(dut))
#     await reset(dut)

#     cocotb.start_soon(
#         monitor_mmacu_matrices(dut, cycles=100)
#     )

#     # ------------------------
#     # Compute Phase 1
#     # ------------------------
#     dut.i_sync_load.value = 0
#     matrixA = [[1, 3, 5, 6], [4, 1, 2, 8], [5, 1, 1, 3], [9, 0, 4, 1]] + [[0]*M for _ in range(1024)]
#     matrixB = [[5, 1, 4, 2], [4, 1, 3, 3], [0, 0, 1, 2], [7, 6, 2, 1]] + [[0]*M for _ in range(1024)]

#     dut.i_ab_valid.value = 1
#     dut.i_start.value = 1
#     for i in range(4):
#         dut.i_a.value = flatten_array(matrixA[i], WIDTH_AB)
#         dut.i_b.value = flatten_array(matrixB[i], WIDTH_AB)
#         if i != 0:
#             dut.i_start.value = 0
#         await RisingEdge(dut.i_clk)

#     for i in range(4, 12):
#         dut.i_a.value = flatten_array(matrixA[i], WIDTH_AB)
#         dut.i_b.value = flatten_array(matrixB[i], WIDTH_AB)
#         dut.i_start.value = 0
#         await RisingEdge(dut.i_clk)

#     # ------------------------
#     # Async Load
#     # ------------------------
#     matrixC = [
#         [1,  2,  3,  4],
#         [5,  6,  7,  8],
#         [9, 10, 11, 12],
#         [13,14, 15, 16]
#     ]
#     dut.i_load_dim.value = 4
#     dut.i_sync_load.value = 0
#     dut.i_c_valid.value = 1

#     # Cycle 0: init + row0
#     dut.i_load_init.value = 1
#     dut.i_c.value = flatten_array(matrixC[0], WIDTH_CD)
#     await RisingEdge(dut.i_clk)
#     dut.i_load_init.value = 0  # drop after sampled

#     for i in range(1, 4):
#         dut.i_c.value = flatten_array(matrixC[i], WIDTH_CD)
#         await RisingEdge(dut.i_clk)

#     dut.i_c_valid.value = 0

#     # ------------------------
#     # Compute2 + Unload
#     # ------------------------
#     matrixA = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]] + [[0]*M for _ in range(1024)]
#     matrixB = [[1, 4, 2, 2], [8, 11, 13, 2], [1, 0, 1, 3], [5, 5, 2, 2]] + [[0]*M for _ in range(1024)]
#     dut.i_uload_dim.value = 4
#     dut.i_d_ready.value = 1
#     await RisingEdge(dut.i_clk)

#     for i in range(12):
#         dut.i_start.value = 1 if i < 4 else 0
#         dut.i_a.value = flatten_array(matrixA[i], WIDTH_AB)
#         dut.i_b.value = flatten_array(matrixB[i], WIDTH_AB)
#         await RisingEdge(dut.i_clk)
#         print_o_d_row(dut)

#     # Repeat Compute1 pattern
#     matrixA = [[1, 3, 5, 6], [4, 1, 2, 8], [5, 1, 1, 3], [9, 0, 4, 1]] + [[0]*M for _ in range(1024)]
#     matrixB = [[5, 1, 4, 2], [4, 1, 3, 3], [0, 0, 1, 2], [7, 6, 2, 1]] + [[0]*M for _ in range(1024)]

#     for i in range(12):
#         dut.i_start.value = 1 if i < 4 else 0
#         dut.i_a.value = flatten_array(matrixA[i], WIDTH_AB)
#         dut.i_b.value = flatten_array(matrixB[i], WIDTH_AB)
#         await RisingEdge(dut.i_clk)
#         print_o_d_row(dut)

# def run():
#     sim = os.getenv("SIM", "dsim")
#     project_dir = Path(__file__).parent.parent / "rtl"

#     sources = [
#         project_dir / "mmacu.sv",
#         project_dir / "mac.sv",
#     ]

#     runner = get_runner(sim)
#     runner.build(
#         sources=sources,
#         hdl_toplevel="mmacu",
#         always=True,
#     )
#     runner.test(
#         hdl_toplevel="mmacu",
#         test_module="mmacu_tb",
#     )


# if __name__ == "__main__":
#     run()
