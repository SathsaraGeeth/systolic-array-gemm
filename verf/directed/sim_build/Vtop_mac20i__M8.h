// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_MAC20I__M8_H_
#define VERILATED_VTOP_MAC20I__M8_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_mac20i__M8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_clk,0,0);
        VL_IN8(i_rst_n,0,0);
        VL_IN8(i_en,0,0);
        VL_IN8(i_clr_n,0,0);
        VL_IN8(i_start,0,0);
        VL_IN8(i_last,0,0);
        VL_IN8(i_dim,3,0);
        VL_IN8(i_a,7,0);
        VL_IN8(i_b,7,0);
        VL_OUT8(o_done,0,0);
        CData/*7:0*/ w_s1_a;
        CData/*7:0*/ w_s1_b;
        CData/*0:0*/ w_s1_start;
        CData/*0:0*/ w_s1_lane;
        CData/*0:0*/ w_s2_start;
        CData/*0:0*/ w_s2_lane;
        CData/*0:0*/ __Vcellinp__mux_l0_acc_src__i_sel;
        CData/*0:0*/ __Vcellinp__mux_l1_acc_src__i_sel;
        CData/*0:0*/ pr_s1_mulr__DOT__i_clk;
        CData/*0:0*/ pr_s1_mulr__DOT__i_rst_n;
        CData/*0:0*/ pr_s1_mulr__DOT__i_clr_n;
        CData/*0:0*/ pr_s1_mulr__DOT__i_en;
        CData/*7:0*/ pr_s1_mulr__DOT__i_data0;
        CData/*7:0*/ pr_s1_mulr__DOT__i_data1;
        CData/*0:0*/ pr_s1_lane__DOT__i_clk;
        CData/*0:0*/ pr_s1_lane__DOT__i_rst_n;
        CData/*0:0*/ pr_s1_lane__DOT__i_clr_n;
        CData/*0:0*/ pr_s1_lane__DOT__i_en;
        CData/*0:0*/ pr_s1_lane__DOT__i_data;
        CData/*0:0*/ pr_s1_lane__DOT__o_data;
        CData/*0:0*/ mux_l0_acc_src__DOT__i_sel;
        CData/*0:0*/ mux_l1_acc_src__DOT__i_sel;
        CData/*0:0*/ pr_s1_l0_acc__DOT__i_clk;
        CData/*0:0*/ pr_s1_l0_acc__DOT__i_rst_n;
        CData/*0:0*/ pr_s1_l0_acc__DOT__i_clr_n;
        CData/*0:0*/ pr_s1_l0_acc__DOT__i_en;
        CData/*0:0*/ pr_s1_l1_acc__DOT__i_clk;
        CData/*0:0*/ pr_s1_l1_acc__DOT__i_rst_n;
        CData/*0:0*/ pr_s1_l1_acc__DOT__i_clr_n;
        CData/*0:0*/ pr_s1_l1_acc__DOT__i_en;
        CData/*0:0*/ pr_s1_start__DOT__i_clk;
        CData/*0:0*/ pr_s1_start__DOT__i_rst_n;
        CData/*0:0*/ pr_s1_start__DOT__i_clr_n;
        CData/*0:0*/ pr_s1_start__DOT__i_en;
        CData/*0:0*/ pr_s1_start__DOT__i_data;
        CData/*0:0*/ pr_s1_start__DOT__o_data;
        CData/*0:0*/ mux_output__DOT__i_sel;
        CData/*0:0*/ u_delay_v__DOT__i_clk;
        CData/*0:0*/ u_delay_v__DOT__i_rst_n;
        CData/*0:0*/ u_delay_v__DOT__i_en;
        CData/*0:0*/ u_delay_v__DOT__i_clr_n;
        CData/*0:0*/ u_delay_v__DOT__i_in;
        CData/*3:0*/ u_delay_v__DOT__i_ptr;
        CData/*0:0*/ u_delay_v__DOT__o_out;
        CData/*0:0*/ u_delay_v__DOT____Vlvbound_hb8faaf6f__0;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_clk;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_rst_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_clr_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_en;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_clk;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_rst_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_clr_n;
    };
    struct {
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_en;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_clk;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_rst_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_clr_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_en;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_clk;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_rst_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_clr_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_en;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_clk;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_rst_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_clr_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_en;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_clk;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_rst_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_clr_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_en;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__o_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__i_clk;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__i_rst_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__i_clr_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__i_en;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__i_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__o_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__i_clk;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__i_rst_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__i_clr_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__i_en;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__i_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__o_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__i_clk;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__i_rst_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__i_clr_n;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__i_en;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__i_data;
        CData/*0:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__o_data;
        VL_IN16(i_c,15,0);
        VL_OUT16(o_d,15,0);
        SData/*15:0*/ w_s1_c;
        SData/*15:0*/ w_s1_l0_acc_in;
        SData/*15:0*/ w_s1_l1_acc_in;
        SData/*15:0*/ w_s2_l0_acc;
        SData/*15:0*/ w_s2_l1_acc;
        SData/*15:0*/ w_s2_mulr;
        SData/*15:0*/ w_s2_l0_add;
        SData/*15:0*/ w_s2_l1_add;
        SData/*15:0*/ w_add_acc_in;
        SData/*15:0*/ w_add_result;
        SData/*15:0*/ pr_s1_mulr__DOT__o_data;
        SData/*15:0*/ mux_l0_acc_src__DOT__i_data0;
        SData/*15:0*/ mux_l0_acc_src__DOT__i_data1;
        SData/*15:0*/ mux_l0_acc_src__DOT__o_data;
        SData/*15:0*/ mux_l1_acc_src__DOT__i_data0;
        SData/*15:0*/ mux_l1_acc_src__DOT__i_data1;
        SData/*15:0*/ mux_l1_acc_src__DOT__o_data;
    };
    struct {
        SData/*15:0*/ pr_s1_l0_acc__DOT__i_data;
        SData/*15:0*/ pr_s1_l0_acc__DOT__o_data;
        SData/*15:0*/ pr_s1_l1_acc__DOT__i_data;
        SData/*15:0*/ pr_s1_l1_acc__DOT__o_data;
        SData/*15:0*/ mux_output__DOT__i_data0;
        SData/*15:0*/ mux_output__DOT__i_data1;
        SData/*15:0*/ mux_output__DOT__o_data;
        IData/*31:0*/ u_delay_v__DOT__genblk1__DOT__i;
        VlUnpacked<CData/*0:0*/, 10> u_delay_v__DOT__genblk1__DOT__r_d;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ WIDTH_AB = 8U;
    static constexpr IData/*31:0*/ WIDTH_CD = 0x00000010U;
    static constexpr IData/*31:0*/ M = 8U;
    static constexpr IData/*31:0*/ pr_s1_mulr__DOT__IN_WIDTH = 8U;
    static constexpr IData/*31:0*/ pr_s1_lane__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ mux_l0_acc_src__DOT__WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ mux_l1_acc_src__DOT__WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ pr_s1_l0_acc__DOT__WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ pr_s1_l1_acc__DOT__WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ pr_s1_start__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ mux_output__DOT__WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ u_delay_v__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ u_delay_v__DOT__DEPTH = 9U;
    static constexpr IData/*31:0*/ u_delay_v__DOT__M = 8U;
    static constexpr IData/*31:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__WIDTH = 1U;
    static constexpr IData/*31:0*/ u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__WIDTH = 1U;

    // CONSTRUCTORS
    Vtop_mac20i__M8(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_mac20i__M8();
    VL_UNCOPYABLE(Vtop_mac20i__M8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
