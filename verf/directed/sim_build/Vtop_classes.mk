# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
	Vtop___024root__DepSet_h84412442__0 \
	Vtop___024root__DepSet_h84412442__1 \
	Vtop___024root__DepSet_h84412442__2 \
	Vtop___024root__DepSet_heccd7ead__0 \
	Vtop_mac20i__M8__DepSet_h04067ef0__0 \
	Vtop_delayed_pipe__Wa_D4__DepSet_h23b05421__0 \
	Vtop_delayed_pipe__Wa_D5__DepSet_h7f8fb3ee__0 \
	Vtop_delayed_pipe__Wa_D6__DepSet_hd65f9a93__0 \
	Vtop_delayed_pipe__Wa_D7__DepSet_h2c3d33c9__0 \
	Vtop_delayed_pipe__Wa_D8__DepSet_h7e6a1de6__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop___024root__Slow \
	Vtop___024root__DepSet_h84412442__0__Slow \
	Vtop___024root__DepSet_heccd7ead__0__Slow \
	Vtop_mac20i__M8__Slow \
	Vtop_mac20i__M8__DepSet_h04067ef0__0__Slow \
	Vtop_delayed_pipe__Wa_D4__Slow \
	Vtop_delayed_pipe__Wa_D4__DepSet_h23b05421__0__Slow \
	Vtop_delayed_pipe__Wa_D5__Slow \
	Vtop_delayed_pipe__Wa_D5__DepSet_h7f8fb3ee__0__Slow \
	Vtop_delayed_pipe__Wa_D6__Slow \
	Vtop_delayed_pipe__Wa_D6__DepSet_hd65f9a93__0__Slow \
	Vtop_delayed_pipe__Wa_D7__Slow \
	Vtop_delayed_pipe__Wa_D7__DepSet_h2c3d33c9__0__Slow \
	Vtop_delayed_pipe__Wa_D8__Slow \
	Vtop_delayed_pipe__Wa_D8__DepSet_h7e6a1de6__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Dpi \
	Vtop__Trace__0 \
	Vtop__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \
	Vtop__Syms__1 \
	Vtop__Trace__0__Slow \
	Vtop__TraceDecls__0__Slow \
	Vtop__Trace__1__Slow \
	Vtop__Trace__2__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
