// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class VerilatedVcdC;
class Vtop_delayed_pipe__Wa_D4;
class Vtop_delayed_pipe__Wa_D5;
class Vtop_delayed_pipe__Wa_D6;
class Vtop_delayed_pipe__Wa_D7;
class Vtop_delayed_pipe__Wa_D8;
class Vtop_mac20i__M8;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&i_clk,0,0);
    VL_IN8(&i_rst_n,0,0);
    VL_IN8(&i_start,0,0);
    VL_IN8(&i_last,0,0);
    VL_IN8(&i_break,0,0);
    VL_IN8(&i_dim,3,0);
    VL_IN8(&i_ab_valid,0,0);
    VL_IN8(&i_d_ready,0,0);
    VL_OUT8(&o_ab_ready,0,0);
    VL_OUT8(&o_d_valid,0,0);
    VL_OUTW(&o_d,127,0,4);
    VL_IN64(&i_a,63,0);
    VL_IN64(&i_b,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__u_mac;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__u_mac;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__5__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__5__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__6__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__6__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__7__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__7__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__u_mac;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__u_mac;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__u_mac;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__4__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__5__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__5__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__6__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__6__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__7__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__7__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__u_mac;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__u_mac;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__u_mac;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__4__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__5__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__5__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__6__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__6__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__7__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__7__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__4__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__4__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__5__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__5__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__5__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__6__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__6__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__6__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__7__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__7__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__7__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__0__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__0__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__1__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__1__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__2__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__2__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__3__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__3__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__3__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__4__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__4__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__5__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__5__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__5__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__6__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__6__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__6__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__7__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__7__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__7__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__0__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__0__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__1__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__1__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__2__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__2__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__3__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__3__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__3__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__4__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__4__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__5__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__5__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__5__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__6__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__6__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__6__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__7__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__7__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__7__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__0__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__0__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__1__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__1__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__2__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__2__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__3__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__3__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__3__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__4__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__4__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__5__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__5__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__5__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__6__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__6__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__6__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__7__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__7__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__7__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__0__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__0__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__1__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__1__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__2__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__2__KET____DOT__u_delay_a;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__3__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__3__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D4* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__3__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__4__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__4__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D5* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__5__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__5__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D6* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__5__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__6__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__6__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D7* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__6__KET____DOT__u_delay_b;
    Vtop_mac20i__M8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__u_mac;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__u_delay_a;
    Vtop_delayed_pipe__Wa_D8* const __PVT__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__u_delay_b;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
