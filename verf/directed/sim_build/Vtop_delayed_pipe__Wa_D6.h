// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_DELAYED_PIPE__WA_D6_H_
#define VERILATED_VTOP_DELAYED_PIPE__WA_D6_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_delayed_pipe__Wa_D6 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst_n,0,0);
    VL_IN8(i_en,0,0);
    VL_IN8(i_clr_n,0,0);
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_clk;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_rst_n;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_clr_n;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_en;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_clk;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_rst_n;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_clr_n;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_en;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_clk;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_rst_n;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_clr_n;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_en;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_clk;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_rst_n;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_clr_n;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_en;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_clk;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_rst_n;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_clr_n;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_en;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_clk;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_rst_n;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_clr_n;
    CData/*0:0*/ genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_en;
    VL_IN16(i_in,9,0);
    VL_OUT16(o_out,9,0);
    SData/*9:0*/ genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_data;
    SData/*9:0*/ genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data;
    SData/*9:0*/ genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_data;
    SData/*9:0*/ genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data;
    SData/*9:0*/ genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_data;
    SData/*9:0*/ genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data;
    SData/*9:0*/ genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_data;
    SData/*9:0*/ genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data;
    SData/*9:0*/ genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_data;
    SData/*9:0*/ genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data;
    SData/*9:0*/ genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_data;
    SData/*9:0*/ genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__o_data;
    VlUnpacked<SData/*9:0*/, 7> genblk1__DOT__r_d;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ WIDTH = 0x0000000aU;
    static constexpr IData/*31:0*/ DEPTH = 6U;
    static constexpr IData/*31:0*/ genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__WIDTH = 0x0000000aU;
    static constexpr IData/*31:0*/ genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__WIDTH = 0x0000000aU;
    static constexpr IData/*31:0*/ genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__WIDTH = 0x0000000aU;
    static constexpr IData/*31:0*/ genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__WIDTH = 0x0000000aU;
    static constexpr IData/*31:0*/ genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__WIDTH = 0x0000000aU;
    static constexpr IData/*31:0*/ genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__WIDTH = 0x0000000aU;

    // CONSTRUCTORS
    Vtop_delayed_pipe__Wa_D6(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_delayed_pipe__Wa_D6();
    VL_UNCOPYABLE(Vtop_delayed_pipe__Wa_D6);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
