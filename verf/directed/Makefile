SIM ?= verilator
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(PWD)/../../rtl/core/mmacu.sv
VERILOG_SOURCES += $(PWD)/../../rtl/core/common.sv
VERILOG_SOURCES += $(PWD)/../../rtl/core/mac20i.sv
VERILOG_SOURCES += $(PWD)/../../rtl/core/mmacu_core.sv
TOPLEVEL = mmacu

MODULE = tb_mmacu

EXTRA_ARGS += --trace --trace-structs -Wno-PINMISSING -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-IMPLICIT

include $(shell cocotb-config --makefiles)/Makefile.sim
