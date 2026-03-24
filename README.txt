Systolic Array for GEMM

This repository is currently unstructured and under active development.



rtl files can be found in:
    rtl/design/core

a basic simulation can be found at:
    tb/directed/sim.py

TODO:
    1. In dimension agnostic mode, the every other output get lost. Fix it.
    2. Document assumptions
        - e.g., mac_pipe_lat < dimension
    3. Profile