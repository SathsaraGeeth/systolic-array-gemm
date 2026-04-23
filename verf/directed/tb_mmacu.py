import cocotb
from cocotb.triggers import RisingEdge, Timer
import asyncio
import numpy as np

M = 8
dim = 8
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
        x_u = int(x) & ((1 << width) - 1)
        v |= x_u << (i * width)
    return v

def to_signed(val, bits):
    if val & (1 << (bits - 1)):
        return val - (1 << bits)
    return val


async def reset(dut):
    dut.i_rst_n.value = 0
    dut.i_break.value = 0

    dut.i_start.value = 0
    dut.i_last.value = 0
    dut.i_ab_valid.value = 0
    dut.i_d_ready.value = 1

    dut.i_a.value = 0
    dut.i_b.value = 0
    dut.i_dim.value = 0

    for _ in range(5):
        await RisingEdge(dut.i_clk)

    dut.i_rst_n.value = 1
    await RisingEdge(dut.i_clk)


async def drive_hb(dut, list_A, list_B, dim, M, need_break):
    for idx, (A, B) in enumerate(zip(list_A, list_B)):

        for i in range(dim):
            dut.i_a.value = pack_row_dim(A[i], WIDTH_AB, dim, M)
            dut.i_b.value = pack_row_dim(B[i], WIDTH_AB, dim, M)

            if idx == 0 and i == 0:
                dut.i_start.value = 1
            else:
                dut.i_start.value = 0
                
            dut.i_last.value = idx == len(list_A) - 1 and i == 0
            dut.i_dim.value = dim

            dut.i_ab_valid.value = 1

            dut.i_break.value = need_break and (idx == len(list_A) - 1) and (i == dim- 1)

            # wait for handshake
            while True:
                await RisingEdge(dut.i_clk)
                if dut.o_ab_ready.value:
                    break

            # deassert valids
            dut.i_ab_valid.value = 0
            dut.i_break.value = 0
            dut.i_start.value = 0
            dut.i_last.value = 0


async def collect_outputs(dut, WIDTH_CD, M, dim, storage):
    current_rows = []
    cycle = 0
    txn = 0

    while True:
        await RisingEdge(dut.i_clk)

        if dut.o_d_valid.value and dut.i_d_ready.value:
            d_val = int(dut.o_d.value)
            row = []
            for j in range(M):
                val_u = (d_val >> (j * WIDTH_CD)) & ((1 << WIDTH_CD) - 1)
                row.append(to_signed(val_u, WIDTH_CD))
            current_rows.append(row)


            if len(current_rows) == dim:
                storage[txn] = current_rows.copy()
                current_rows.clear()
                txn += 1

        cycle += 1

async def monitor(dut, cycles=50):
    try:
        for i in range(cycles):
            await RisingEdge(dut.i_clk)

            cocotb.log.info("\n" + "=" * 100)
            cocotb.log.info(f"[Cycle {i}]")

            cocotb.log.info("Inputs:")
            cocotb.log.info(f"  rst_n     = {int(dut.i_rst_n.value)}")
            cocotb.log.info(f"  break     = {int(dut.i_break.value)}")
            cocotb.log.info(f"  start     = {int(dut.i_start.value)}")
            cocotb.log.info(f"  last      = {int(dut.i_last.value)}")
            cocotb.log.info(f"  dim       = {int(dut.i_dim.value)}")
            cocotb.log.info(f"  ab_valid  = {int(dut.i_ab_valid.value)}")
            cocotb.log.info(f"  a         = {int(dut.i_a.value)}")
            cocotb.log.info(f"  b         = {int(dut.i_b.value)}")

            cocotb.log.info("Ready:")
            cocotb.log.info(f"  ab_ready  = {int(dut.o_ab_ready.value)}")

            cocotb.log.info("Outputs:")
            cocotb.log.info(f"  d_valid   = {int(dut.o_d_valid.value)}")
            cocotb.log.info(f"  d_ready   = {int(dut.i_d_ready.value)}")
            cocotb.log.info(f"  d         = {int(dut.o_d.value)}")

            d_val = int(dut.o_d.value)
            row = []
            for j in range(M):
                val_u = (d_val >> (j * WIDTH_CD)) & ((1 << WIDTH_CD) - 1)
                row.append(to_signed(val_u, WIDTH_CD))
            cocotb.log.info(f"Decoded d = {row}")


    except asyncio.CancelledError:
        raise
    except Exception:
        raise

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
async def test_mmacu(dut):
    DEBUG = True
    cocotb.start_soon(gen_clk(dut.i_clk))
    await reset(dut)
    cocotb.start_soon(monitor(dut, 200)) if DEBUG else None

    outputs = dict()
    cocotb.start_soon(collect_outputs(dut, WIDTH_CD, M, dim, outputs))

    A1 = [
        [1, 2, 3, 4, 5, 6, 7, 8],
        [9, 10, 11, 12, 13, 14, 15, 16],
        [17, 18, 19, 20, 21, 22, 23, 24],
        [25, 26, 27, 28, 29, 30, 31, 32],
        [33, 34, 35, 36, 37, 38, 39, 40],
        [41, 42, 43, 44, 45, 46, 47, 48],
        [49, 50, 51, 52, 53, 54, 55, 56],
        [57, 58, 59, 60, 61, 62, 63, 64]
    ]
    B1 = [
        [1, 4, 2, 2, 1, 4, 2, 2],
        [8, 11, 13, 2, 8, 11, 13, 2],
        [1, 0, 1, 3, 1, 0, 1, 3],
        [5, 5, 2, 2, 5, 5, 2, 2],
        [1, 4, 2, 2, 1, 4, 2, 2],
        [8, 11, 13, 2, 8, 11, 13, 2],
        [1, 0, 1, 3, 1, 0, 1, 3],
        [5, 5, 2, 2, 5, 5, 2, 2]
    ]
    A2 = [[0]*8 for _ in range(8)]
    A2[0][0] = 1; A2[1][1] = 2; A2[2][2] = 3; A2[3][3] = 4; A2[4][4] = 5; A2[5][5] = 6; A2[6][6] = 7; A2[7][7] = 8
    B2 = [[0]*8 for _ in range(8)]
    B2[0][7] = 1; B2[1][6] = 2; B2[2][5] = 3; B2[3][4] = 4; B2[4][3] = 5; B2[5][2] = 6; B2[6][1] = 7; B2[7][0] = 8
    A3 = [[(1 if i == j else 0) for j in range(8)] for i in range(8)]
    B3 = [[(i*8 + j + 1) for j in range(8)] for i in range(8)]
    A4 = [[(i-j) for j in range(8)] for i in range(8)]
    B4 = [[(j-i) for j in range(8)] for i in range(8)]
    A5 = [[(i+1) for _ in range(8)] for i in range(8)]
    B5 = [[(j+1) for j in range(8)] for _ in range(8)]

    test_stream = [
        (A1, B1),
        (A2, B2),
        (A3, B3),
        (A4, B4),
        (A5, B5),
        (A1, B1),
    ]



    for idx, (A, B) in enumerate(test_stream):
        await drive_hb(dut, [A], [B], dim, M, need_break = idx == len(test_stream) - 1)


    for _ in range(4*M + L):
        await RisingEdge(dut.i_clk)
        
    pretty_print_matrices(outputs)



    # np Comparison
    print("\n" + "=" * 80)
    print("Verification against NumPy Model (A^T * B)")
    print("=" * 80)
    
    all_passed = True
    for idx, (A, B) in enumerate(test_stream):
        if idx not in outputs:
            print(f"Transaction {idx}: [FAILED] - Not collected")
            all_passed = False
            continue
        
        A_sub = [row[:dim] for row in A[:dim]]
        B_sub = [row[:dim] for row in B[:dim]]
        
        A_np = np.array(A_sub, dtype=np.int32)
        A_np = np.vectorize(lambda x: to_signed(x & 0xFF, 8))(A_np)
        B_np = np.array(B_sub, dtype=np.int32)
        B_np = np.vectorize(lambda x: to_signed(x & 0xFF, 8))(B_np)
        
        raw_sum = (A_np.T @ B_np).astype(np.int32)
        
        golden = np.vectorize(lambda x: to_signed(x & 0xFFFF, 16))(raw_sum)
        
        hw = np.array(outputs[idx], dtype=np.int32)[:dim, :dim]

        
        if np.array_equal(golden, hw):
            print(f"Transaction {idx}: [PASSED]")
        else:
            print(f"Transaction {idx}: [FAILED]")
            all_passed = False
            print("Golden (Expected):")
            print(golden)
            print("Hardware (Actual):")
            print(hw)
            
    if all_passed:
        print("\nALL TRANSACTIONS VERIFIED SUCCESSFULLY")
    else:
        print("\nVERIFICATION FAILED")
