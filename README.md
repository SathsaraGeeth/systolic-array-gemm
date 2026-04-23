# Systolic Array for GEMM

A configurable, portable output stationary systolic array for general matrix multiply (GEMM), written in SystemVerilog.

Computes:

```
D = Aᵀ · B
```

with optional offset accumulation (`D = Aᵀ·B + C`). The array size `M` and arithmetic widths are fully parametric. The effective matrix dimension is runtime configured, so the same hardware can operate across different matrix sizes without structural changes.

---

## Repository Layout

```
rtl/
  core/
    common.sv        — shared implementations
    mac20i.sv        — reference MAC unit
    mmacu_core.sv    — systolic array core
    mmacu.sv         — reference wrapper
verf/
  directed/
    tb_mmacu.py      — directed testbench
    Makefile
```

---

## Design Overview

### `mmacu_core` — Systolic Array Core

The main hardware block. An `M×M` output-stationary systolic array that streams rows of `A` and `B` in over `dim` cycles and accumulates partial results, producing the full result matrix `D`.

Key properties:

- **Dimension-agnostic** — array size `M` is fixed at elaboration; effective matrix dimension `dim` is a runtime input. Supported range: `L < dim ≤ M` where `L` is the MAC pipeline latency.
- **Full pipelining** — after the pipeline fills, one `n×n` result is produced every `n` cycles with no stalls.
- **Ping-pong buffering** — data movement and computation overlap; new `A`/`B` streams can begin immediately after the previous result is unloaded.
- **Zero-padding** — unused lanes must be zero padded by the driver.

### `mmacu` — Reference Wrapper

`mmacu` is a reference implementation built on top of `mmacu_core`. It demonstrates one practical way to drive the core — handling flush sequencing, dimension FIFO management, and break/last/start signalling — without being prescriptive about the upstream interface. It trades some flexibility for simplicity and is intended as a starting point or a reference.

### `mac20i` — Reference MAC

A pipelined integer multiply accumulate unit used as the processing element inside the array. Provided as a reference arithmetic block; the core is parameterised to accommodate alternative MAC implementations.

---

## Parameters

| Parameter  | Description                        |
|------------|------------------------------------|
| `M`        | Array dimension (max matrix size)  |
| `WIDTH_AB` | Bit width of A and B inputs        |
| `WIDTH_CD` | Bit width of C and D               |

---

## Interface (`mmacu_core`)

| Signal        | Direction | Description                              |
|---------------|-----------|------------------------------------------|
| `i_clk`       | in        | Clock                                    |
| `i_rst_n`     | in        | Active-low async reset                   |
| `i_clr_n`     | in        | Active-low pipeline clear (flush)        |
| `i_dim`       | in        | Runtime matrix dimension                 |
| `i_start`     | in        | First beat of the first block            |
| `i_last`      | in        | First beat of the last block             |
| `i_a`, `i_b`  | in        | Packed row vectors (`M × WIDTH_AB` bits) |
| `i_ab_valid`  | in        | A/B input valid                          |
| `o_ab_ready`  | out       | Core ready to accept A/B                 |
| `i_c`         | in        | Initial accumulator value (optional)     |
| `i_c_valid`   | in        | C valid                                  |
| `o_d`         | out       | Result row (`M × WIDTH_CD` bits)         |
| `o_d_valid`   | out       | D output valid                           |
| `i_d_ready`   | in        | Downstream ready to accept D             |

---

## Simulation

Requires Python, [cocotb](https://github.com/cocotb/cocotb), [Verilator](https://www.veripool.org/verilator/), and NumPy.

```bash
cd verf/directed
make
```

The testbench exercises `mmacu` (the reference wrapper) across single and back-to-back transactions at various runtime dimensions.