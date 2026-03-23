import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb_tools.runner import get_runner
import os
from pathlib import Path

M = 4
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

async def drive_row(dut, a_row, b_row, c_row=None, start=False):
    hb = dut.hb_bus

    hb.a.value = pack_row(a_row, WIDTH_AB)
    hb.b.value = pack_row(b_row, WIDTH_AB)

    hb.a_valid.value = 1
    hb.b_valid.value = 1
    if c_row is not None:
        hb.c.value = pack_row(c_row, WIDTH_CD)
        hb.c_valid.value = 1
    else:
        hb.c_valid.value = 0

    await RisingEdge(hb.clk)

    hb.start.value = int(start)

    while not (hb.a_ready.value and hb.b_ready.value):
        await RisingEdge(hb.clk)

    await RisingEdge(hb.clk)

    hb.a_valid.value = 0
    hb.b_valid.value = 0
    hb.c_valid.value = 0
    hb.start.value = 0

async def monitor(dut, cycles=50):
    hb = dut.hb_bus

    for i in range(cycles):
        await RisingEdge(hb.clk)

        d_val = int(hb.d.value)
        row = [(d_val >> (j * WIDTH_CD)) & ((1 << WIDTH_CD) - 1)
               for j in range(M)]

        cocotb.log.info(f"[Cycle {i}] d_valid={int(hb.d_valid.value)} d={row}")

@cocotb.test()
async def test_top_mmacu_hb(dut):
    hb = dut.hb_bus
    cocotb.start_soon(gen_clk(hb.clk))
    await reset(dut)
    cocotb.start_soon(monitor(dut, 100))
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
    for i in range(M):
        await drive_row(dut, A[i], B[i], C[i], start=(i == 0))
    # flush pipe
    for _ in range(100):
        await drive_row(dut, [0]*M, [0]*M, start=(i == 0))












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
