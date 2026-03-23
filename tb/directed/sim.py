import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb_tools.runner import get_runner
import os
from pathlib import Path

M = 4
L = 2
WIDTH_AB = 8
WIDTH_CD = 16

async def gen_clk(sig, period_ns=10):
    while True:
        sig.value = 0
        await Timer(period_ns // 2, unit="ns")
        sig.value = 1
        await Timer(period_ns // 2, unit="ns")

def pack_row(row, width):
    v = 0
    for i, x in enumerate(row):
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
    hb.dim.value = M

    for _ in range(5):
        await RisingEdge(hb.clk)

    hb.rst_n.value = 1
    hb.clr_n.value = 1
    await RisingEdge(hb.clk)


async def drive_synced_ab_c(dut, A, B, C):
    hb = dut.hb_bus

    n_rows = len(A)

    for i in range(n_rows):
        # drive inputs
        hb.a.value = pack_row(A[i], WIDTH_AB)
        hb.b.value = pack_row(B[i], WIDTH_AB)
        hb.c.value = pack_row(C[i], WIDTH_CD)

        hb.dim.value = M
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

async def drain_and_clear(dut, M, L=2):
    hb = dut.hb_bus

    zero_ab = [0] * M
    zero_c  = [0] * M

    total_cycles = 2 * M + L - 1

    for i in range(total_cycles):
        # drive zeros
        hb.a.value = pack_row(zero_ab, WIDTH_AB)
        hb.b.value = pack_row(zero_ab, WIDTH_AB)
        hb.c.value = pack_row(zero_c, WIDTH_CD)

        hb.a_valid.value = 1
        hb.b_valid.value = 1
        hb.c_valid.value = 1
        hb.start.value = i == 0
        hb.dim.value = M

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
        row = [
            (d_val >> (j * WIDTH_CD)) & ((1 << WIDTH_CD) - 1)
            for j in range(M)
        ]

        cocotb.log.info(f"Decoded d = {row}")

        cocotb.log.info("Raw handshake:")
        cocotb.log.info(
            f"  valid&ready A={int(hb.a_valid.value and hb.a_ready.value)} "
            f"B={int(hb.b_valid.value and hb.b_ready.value)} "
            f"C={int(hb.c_valid.value and hb.c_ready.value)}"
        )


@cocotb.test()
async def test_top_mmacu_hb(dut):
    hb = dut.hb_bus
    cocotb.start_soon(gen_clk(hb.clk))
    await reset(dut)
    cocotb.start_soon(monitor(dut, 40))
    A = [
        [1,2,3,4],
        [5,6,7,8],
        [9,10,11,12],
        [13,14,15,16]
    ]
    B = [
        [1,4,2,2],
        [8,11,13,2],
        [1,0,1,3],
        [5,5,2,2]
    ]
    C = [
        [1,2,3,4],
        [5,6,7,8],
        [9,10,11,12],
        [13,14,15,16]
    ]
    D = [[0, 4, 2, 2],
        [18,21,1, 2],
        [1, 0, 19, 33],
        [5, 1, 2, 2],]
    
    null_matrix = [[0 for _ in range(M)] for _ in range(M)]
    
    await drive_synced_ab_c(dut, A, B, C)
    await drive_synced_ab_c(dut, C, D, A)
    await drain_and_clear(dut, M, L)
    await drive_synced_ab_c(dut, D, D, A)
    await drain_and_clear(dut, M, L)










def run():
    sim = os.getenv("SIM", "dsim")

    rtl = Path(__file__).parent.parent.parent / "rtl"

    sources = [
        rtl / "design" / "top" / "top_mmacu.sv",
        rtl / "design" / "core" / "mmacu.sv",
        rtl / "design" / "core" / "mac10.sv",
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
