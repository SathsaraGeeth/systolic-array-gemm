Systolic Array for GEMM

This repository is currently unstructured and under active development.

RTL files can be found in:
    rtl/design/core

A basic simulation can be found at:
    tb/directed/sim.py

TODO:
    - Profile.
    - Proper Verification.
BUGS:
    - The tb driver has to fixed for continous transcations in dynamic-varaible-dimenstion mode.

PYNQZ2 Implementation.
    - HP port ps-pl ddr Implementation


----------------------------------------
Notes

The design is dimension-agnostic:
- The array has a fixed size M.
- The effective matrix dimension is runtime-configured via `dim`.
- Supported dimensions satisfy: mac_latency (L) < dim ≤ M.
- All unused lanes must be zero-padded by the driver.
- The same hardware can operate across different matrix sizes without structural changes.

The mmacu.sv module is designed to support multiple interface/mode styles via top-level configuration. The modes below are demonstration examples illustrating different bandwidth/latency trade-offs; additional modes can be defined similarly.

----------------------------------------
Demonstration Modes

1. HB (High-Bandwidth)

Interface:
interface hb_if #(
    parameter int M = 4,
    parameter int WIDTH_AB = 8,
    parameter int WIDTH_CD = 16
);
    logic                   clk;
    logic                   rst_n;
    logic                   clr_n;

    logic                   start;
    logic                   done;
    logic [$clog2(M+1)-1:0] dim;

    logic [M*WIDTH_AB-1:0]  a;
    logic [M*WIDTH_AB-1:0]  b;
    logic [M*WIDTH_CD-1:0]  c;
    logic [M*WIDTH_CD-1:0]  d;

    logic                   a_valid;
    logic                   b_valid;
    logic                   c_valid;
    logic                   d_ready;

    logic                   a_ready;
    logic                   b_ready;
    logic                   c_ready;
    logic                   d_valid;
endinterface

Driver Protocol (HB):

- A transaction is initiated by a 1-cycle pulse on `start`.
- Each transaction computes:
    D = Σ (A_i^T · B_i) + C

- `C` is loaded once at the beginning and serves as the initial accumulator.

- For each step i:
    - Driver streams one row of A_i and B_i using `a`, `b`
    - `c` is provided once per transaction
    - Assert:
        a_valid = b_valid = c_valid = 1
    - Inputs are accepted when:
        a_ready && b_ready && c_ready

- Each accepted (A_i, B_i) contributes to the running accumulation.

- No clearing/reset is required between partial sums within a transaction.

- After the final inputs:
    - Driver must allow time for the pipeline to drain and produce remaining outputs.

- Outputs are observed via:
    d_valid with d_ready handshake.

- Clearing (`clr_n`) is used only to flush/drain pipeline state before/after transactions, not between partial sums.

----------------------------------------

2. LB (Low-Bandwidth)

Interface:
interface lb_if #(
    parameter int M = 4,
    parameter int WIDTH_AB = 8,
    parameter int WIDTH_CD = 16
);
    logic                   clk;
    logic                   rst_n;
    logic                   clr_n;

    logic                   start;
    logic                   done;
    logic [$clog2(M+1)-1:0] dim;

    logic [M*WIDTH_AB-1:0]  a;
    logic [M*WIDTH_AB-1:0]  b;
    logic [M*WIDTH_CD-1:0]  d;

    logic                   a_valid;
    logic                   b_valid;
    logic                   d_ready;

    logic                   a_ready;
    logic                   b_ready;
    logic                   d_valid;
endinterface

Driver Protocol (LB):

- A transaction is initiated by a 1-cycle pulse on `start`.
- Each transaction computes:
    D = Σ (A_i^T · B_i)

- No `C` input is used.

- For each step i:
    - Driver streams one row of A_i and B_i using `a`, `b`
    - Assert:
        a_valid = b_valid = 1
    - Inputs are accepted when:
        a_ready && b_ready

- Each accepted (A_i, B_i) contributes to the running accumulation.

- No clearing/reset is required between partial sums within a transaction.

- If an offset C is required, it must be emulated by the driver (e.g., using identity-matrix constructs).

- After the final inputs:
    - Driver must allow time for the pipeline to drain and produce remaining outputs.

- Outputs are observed via:
    d_valid with d_ready handshake.

- Clearing (`clr_n`) is used only to flush/drain pipeline state, not between partial sums.
