// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_mac20i__M8.h"

VL_INLINE_OPT void Vtop_mac20i__M8___ico_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__0(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___ico_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mux_output__DOT__i_sel = (1U & (~ (IData)(vlSelfRef.pr_s1_lane__DOT__o_data)));
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.w_s2_lane = vlSelfRef.pr_s1_lane__DOT__o_data;
    vlSelfRef.w_s2_mulr = vlSelfRef.pr_s1_mulr__DOT__o_data;
    vlSelfRef.w_s2_start = vlSelfRef.pr_s1_start__DOT__o_data;
    vlSelfRef.w_s2_l0_acc = vlSelfRef.pr_s1_l0_acc__DOT__o_data;
    vlSelfRef.w_s2_l1_acc = vlSelfRef.pr_s1_l1_acc__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[1U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[2U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[3U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[4U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[5U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[6U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[7U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[8U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[9U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.pr_s1_mulr__DOT__i_rst_n = vlSelfRef.i_rst_n;
    vlSelfRef.pr_s1_lane__DOT__i_rst_n = vlSelfRef.i_rst_n;
    vlSelfRef.pr_s1_l0_acc__DOT__i_rst_n = vlSelfRef.i_rst_n;
    vlSelfRef.pr_s1_l1_acc__DOT__i_rst_n = vlSelfRef.i_rst_n;
    vlSelfRef.pr_s1_start__DOT__i_rst_n = vlSelfRef.i_rst_n;
    vlSelfRef.u_delay_v__DOT__i_rst_n = vlSelfRef.i_rst_n;
    vlSelfRef.pr_s1_mulr__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.pr_s1_lane__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.pr_s1_l0_acc__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.pr_s1_l1_acc__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.pr_s1_start__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.u_delay_v__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.w_s1_c = vlSelfRef.i_c;
    vlSelfRef.u_delay_v__DOT__i_ptr = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.i_dim)));
    vlSelfRef.pr_s1_mulr__DOT__i_clr_n = vlSelfRef.i_clr_n;
    vlSelfRef.pr_s1_lane__DOT__i_clr_n = vlSelfRef.i_clr_n;
    vlSelfRef.pr_s1_l0_acc__DOT__i_clr_n = vlSelfRef.i_clr_n;
    vlSelfRef.pr_s1_l1_acc__DOT__i_clr_n = vlSelfRef.i_clr_n;
    vlSelfRef.pr_s1_start__DOT__i_clr_n = vlSelfRef.i_clr_n;
    vlSelfRef.u_delay_v__DOT__i_clr_n = vlSelfRef.i_clr_n;
    vlSelfRef.pr_s1_mulr__DOT__i_en = vlSelfRef.i_en;
    vlSelfRef.pr_s1_lane__DOT__i_en = vlSelfRef.i_en;
    vlSelfRef.pr_s1_l0_acc__DOT__i_en = vlSelfRef.i_en;
    vlSelfRef.pr_s1_l1_acc__DOT__i_en = vlSelfRef.i_en;
    vlSelfRef.pr_s1_start__DOT__i_en = vlSelfRef.i_en;
    vlSelfRef.u_delay_v__DOT__i_en = vlSelfRef.i_en;
    vlSelfRef.mux_output__DOT__i_data0 = vlSelfRef.w_s2_l0_acc;
    vlSelfRef.mux_output__DOT__i_data1 = vlSelfRef.w_s2_l1_acc;
    vlSelfRef.w_add_acc_in = ((IData)(vlSelfRef.pr_s1_lane__DOT__o_data)
                               ? (IData)(vlSelfRef.pr_s1_l1_acc__DOT__o_data)
                               : (IData)(vlSelfRef.pr_s1_l0_acc__DOT__o_data));
    vlSelfRef.w_add_result = (0xffffU & ((IData)(vlSelfRef.pr_s1_mulr__DOT__o_data) 
                                         + (IData)(vlSelfRef.w_add_acc_in)));
    if (vlSelfRef.pr_s1_lane__DOT__o_data) {
        vlSelfRef.mux_output__DOT__o_data = vlSelfRef.pr_s1_l0_acc__DOT__o_data;
        vlSelfRef.w_s2_l0_add = vlSelfRef.pr_s1_l0_acc__DOT__o_data;
        vlSelfRef.w_s2_l1_add = vlSelfRef.w_add_result;
    } else {
        vlSelfRef.mux_output__DOT__o_data = vlSelfRef.pr_s1_l1_acc__DOT__o_data;
        vlSelfRef.w_s2_l0_add = vlSelfRef.w_add_result;
        vlSelfRef.w_s2_l1_add = vlSelfRef.pr_s1_l1_acc__DOT__o_data;
    }
    vlSelfRef.o_d = vlSelfRef.mux_output__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.u_delay_v__DOT__i_rst_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.u_delay_v__DOT__i_rst_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.u_delay_v__DOT__i_rst_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.u_delay_v__DOT__i_rst_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.u_delay_v__DOT__i_rst_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.u_delay_v__DOT__i_rst_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.u_delay_v__DOT__i_rst_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.u_delay_v__DOT__i_rst_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.u_delay_v__DOT__i_rst_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.u_delay_v__DOT__i_clk;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.u_delay_v__DOT__i_clk;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.u_delay_v__DOT__i_clk;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.u_delay_v__DOT__i_clk;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.u_delay_v__DOT__i_clk;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.u_delay_v__DOT__i_clk;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.u_delay_v__DOT__i_clk;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.u_delay_v__DOT__i_clk;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.u_delay_v__DOT__i_clk;
    vlSelfRef.mux_l0_acc_src__DOT__i_data1 = vlSelfRef.w_s1_c;
    vlSelfRef.mux_l1_acc_src__DOT__i_data1 = vlSelfRef.w_s1_c;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.mux_l0_acc_src__DOT__i_data0 = vlSelfRef.w_s2_l0_add;
    vlSelfRef.mux_l1_acc_src__DOT__i_data0 = vlSelfRef.w_s2_l1_add;
}

VL_INLINE_OPT void Vtop_mac20i__M8___ico_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__1(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___ico_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vcellinp__mux_l0_acc_src__i_sel;
    __Vcellinp__mux_l0_acc_src__i_sel = 0;
    CData/*0:0*/ __Vcellinp__mux_l1_acc_src__i_sel;
    __Vcellinp__mux_l1_acc_src__i_sel = 0;
    // Body
    vlSelfRef.w_s1_a = vlSelfRef.i_a;
    vlSelfRef.w_s1_b = vlSelfRef.i_b;
    vlSelfRef.w_s1_start = vlSelfRef.i_start;
    vlSelfRef.w_s1_lane = (1U & (((IData)(vlSelfRef.i_en) 
                                  & (IData)(vlSelfRef.i_start))
                                  ? (~ (IData)(vlSelfRef.pr_s1_lane__DOT__o_data))
                                  : (IData)(vlSelfRef.pr_s1_lane__DOT__o_data)));
    vlSelfRef.u_delay_v__DOT__i_in = vlSelfRef.i_last;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[0U] 
        = vlSelfRef.i_last;
    vlSelfRef.pr_s1_mulr__DOT__i_data0 = vlSelfRef.w_s1_a;
    vlSelfRef.pr_s1_mulr__DOT__i_data1 = vlSelfRef.w_s1_b;
    vlSelfRef.pr_s1_start__DOT__i_data = vlSelfRef.w_s1_start;
    vlSelfRef.pr_s1_lane__DOT__i_data = vlSelfRef.w_s1_lane;
    __Vcellinp__mux_l0_acc_src__i_sel = ((~ (IData)(vlSelfRef.w_s1_lane)) 
                                         & (IData)(vlSelfRef.i_start));
    __Vcellinp__mux_l1_acc_src__i_sel = ((IData)(vlSelfRef.i_start) 
                                         & (IData)(vlSelfRef.w_s1_lane));
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__i_in;
    vlSelfRef.u_delay_v__DOT__o_out = ((9U >= (0xfU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.i_dim)))) 
                                       && vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d
                                       [(0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.i_dim)))]);
    if (__Vcellinp__mux_l0_acc_src__i_sel) {
        vlSelfRef.mux_l0_acc_src__DOT__i_sel = 1U;
        vlSelfRef.w_s1_l0_acc_in = vlSelfRef.i_c;
    } else {
        vlSelfRef.mux_l0_acc_src__DOT__i_sel = 0U;
        vlSelfRef.w_s1_l0_acc_in = vlSelfRef.w_s2_l0_add;
    }
    if (__Vcellinp__mux_l1_acc_src__i_sel) {
        vlSelfRef.mux_l1_acc_src__DOT__i_sel = 1U;
        vlSelfRef.w_s1_l1_acc_in = vlSelfRef.i_c;
    } else {
        vlSelfRef.mux_l1_acc_src__DOT__i_sel = 0U;
        vlSelfRef.w_s1_l1_acc_in = vlSelfRef.w_s2_l1_add;
    }
    vlSelfRef.o_done = vlSelfRef.u_delay_v__DOT__o_out;
    vlSelfRef.pr_s1_l0_acc__DOT__i_data = vlSelfRef.w_s1_l0_acc_in;
    vlSelfRef.mux_l0_acc_src__DOT__o_data = vlSelfRef.w_s1_l0_acc_in;
    vlSelfRef.pr_s1_l1_acc__DOT__i_data = vlSelfRef.w_s1_l1_acc_in;
    vlSelfRef.mux_l1_acc_src__DOT__o_data = vlSelfRef.w_s1_l1_acc_in;
}

VL_INLINE_OPT void Vtop_mac20i__M8___nba_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__0(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___nba_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_s1_c = vlSelfRef.i_c;
    vlSelfRef.u_delay_v__DOT__i_ptr = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.i_dim)));
    vlSelfRef.mux_l0_acc_src__DOT__i_data1 = vlSelfRef.w_s1_c;
    vlSelfRef.mux_l1_acc_src__DOT__i_data1 = vlSelfRef.w_s1_c;
}

VL_INLINE_OPT void Vtop_mac20i__M8___nba_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__1(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___nba_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v0;
    __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v0 = 0;
    CData/*0:0*/ __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v0;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v0 = 0;
    CData/*0:0*/ __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v1;
    __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v1 = 0;
    CData/*0:0*/ __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v1;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v1 = 0;
    CData/*0:0*/ __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v2;
    __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v2 = 0;
    CData/*0:0*/ __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v2;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v2 = 0;
    CData/*0:0*/ __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v3;
    __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v3 = 0;
    CData/*0:0*/ __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v3;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v3 = 0;
    CData/*0:0*/ __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v4;
    __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v4 = 0;
    CData/*0:0*/ __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v4;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v4 = 0;
    CData/*0:0*/ __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v5;
    __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v5 = 0;
    CData/*0:0*/ __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v5;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v5 = 0;
    CData/*0:0*/ __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v6;
    __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v6 = 0;
    CData/*0:0*/ __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v6;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v6 = 0;
    CData/*0:0*/ __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v7;
    __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v7 = 0;
    CData/*0:0*/ __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v7;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v7 = 0;
    CData/*0:0*/ __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v8;
    __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v8 = 0;
    CData/*0:0*/ __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v8;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v8 = 0;
    CData/*0:0*/ __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v9;
    __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v9 = 0;
    CData/*0:0*/ __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v9;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v9 = 0;
    CData/*0:0*/ __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v10;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v10 = 0;
    CData/*0:0*/ __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v20;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v20 = 0;
    // Body
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v0 = 0U;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v1 = 0U;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v2 = 0U;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v3 = 0U;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v4 = 0U;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v5 = 0U;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v6 = 0U;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v7 = 0U;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v8 = 0U;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v9 = 0U;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v10 = 0U;
    __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v20 = 0U;
    if (vlSelfRef.i_rst_n) {
        if (vlSelfRef.i_clr_n) {
            if (vlSelfRef.i_en) {
                vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 1U;
                vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 2U;
                vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 3U;
                vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 4U;
                vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 5U;
                vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 6U;
                vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 7U;
                vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 8U;
                vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 9U;
                __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v0 
                    = vlSelfRef.i_last;
                __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v0 = 1U;
                vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0 
                    = vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d
                    [0U];
                __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v1 
                    = vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0;
                __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v1 = 1U;
                vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0 
                    = vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d
                    [1U];
                __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v2 
                    = vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0;
                __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v2 = 1U;
                vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0 
                    = vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d
                    [2U];
                __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v3 
                    = vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0;
                __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v3 = 1U;
                vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0 
                    = vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d
                    [3U];
                __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v4 
                    = vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0;
                __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v4 = 1U;
                vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0 
                    = vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d
                    [4U];
                __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v5 
                    = vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0;
                __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v5 = 1U;
                vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0 
                    = vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d
                    [5U];
                __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v6 
                    = vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0;
                __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v6 = 1U;
                vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0 
                    = vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d
                    [6U];
                __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v7 
                    = vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0;
                __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v7 = 1U;
                vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0 
                    = vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d
                    [7U];
                __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v8 
                    = vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0;
                __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v8 = 1U;
                vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0 
                    = vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d
                    [8U];
                __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v9 
                    = vlSelfRef.u_delay_v__DOT____Vlvbound_hb8faaf6f__0;
                __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v9 = 1U;
            }
        } else {
            vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 1U;
            vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 2U;
            vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 3U;
            vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 4U;
            vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 5U;
            vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 6U;
            vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 7U;
            vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 8U;
            vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 9U;
            vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 0xaU;
            __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v10 = 1U;
        }
    } else {
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 1U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 2U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 3U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 4U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 5U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 6U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 7U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 8U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 9U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__i = 0xaU;
        __VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v20 = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.i_rst_n)) | (~ (IData)(vlSelfRef.i_clr_n))))) {
        vlSelfRef.pr_s1_start__DOT__o_data = 0U;
        vlSelfRef.pr_s1_mulr__DOT__o_data = 0U;
        vlSelfRef.pr_s1_l0_acc__DOT__o_data = 0U;
        vlSelfRef.pr_s1_l1_acc__DOT__o_data = 0U;
        vlSelfRef.pr_s1_lane__DOT__o_data = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__o_data = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__o_data = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__o_data = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__o_data = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data = 0U;
    } else if (vlSelfRef.i_en) {
        vlSelfRef.pr_s1_start__DOT__o_data = vlSelfRef.w_s1_start;
        vlSelfRef.pr_s1_mulr__DOT__o_data = (0xffffU 
                                             & VL_MULS_III(16, 
                                                           (0xffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.w_s1_a))), 
                                                           (0xffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.w_s1_b)))));
        vlSelfRef.pr_s1_l0_acc__DOT__o_data = vlSelfRef.w_s1_l0_acc_in;
        vlSelfRef.pr_s1_l1_acc__DOT__o_data = vlSelfRef.w_s1_l1_acc_in;
        vlSelfRef.pr_s1_lane__DOT__o_data = vlSelfRef.w_s1_lane;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.i_last;
    }
    if (__VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v0) {
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[0U] 
            = __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v0;
    }
    if (__VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v1) {
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[1U] 
            = __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v1;
    }
    if (__VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v2) {
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[2U] 
            = __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v2;
    }
    if (__VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v3) {
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[3U] 
            = __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v3;
    }
    if (__VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v4) {
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[4U] 
            = __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v4;
    }
    if (__VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v5) {
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[5U] 
            = __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v5;
    }
    if (__VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v6) {
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[6U] 
            = __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v6;
    }
    if (__VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v7) {
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[7U] 
            = __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v7;
    }
    if (__VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v8) {
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[8U] 
            = __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v8;
    }
    if (__VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v9) {
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[9U] 
            = __VdlyVal__u_delay_v__DOT__genblk1__DOT__r_d__v9;
    }
    if (__VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v10) {
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[0U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[1U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[2U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[3U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[4U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[5U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[6U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[7U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[8U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[9U] = 0U;
    }
    if (__VdlySet__u_delay_v__DOT__genblk1__DOT__r_d__v20) {
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[0U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[1U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[2U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[3U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[4U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[5U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[6U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[7U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[8U] = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[9U] = 0U;
    }
    vlSelfRef.w_s2_start = vlSelfRef.pr_s1_start__DOT__o_data;
    vlSelfRef.w_s2_mulr = vlSelfRef.pr_s1_mulr__DOT__o_data;
    vlSelfRef.w_s2_l0_acc = vlSelfRef.pr_s1_l0_acc__DOT__o_data;
    vlSelfRef.w_s2_l1_acc = vlSelfRef.pr_s1_l1_acc__DOT__o_data;
    vlSelfRef.mux_output__DOT__i_sel = (1U & (~ (IData)(vlSelfRef.pr_s1_lane__DOT__o_data)));
    if (vlSelfRef.pr_s1_lane__DOT__o_data) {
        vlSelfRef.w_s2_lane = 1U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[9U] 
            = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.mux_output__DOT__i_data0 = vlSelfRef.w_s2_l0_acc;
        vlSelfRef.mux_output__DOT__i_data1 = vlSelfRef.w_s2_l1_acc;
        vlSelfRef.w_add_acc_in = vlSelfRef.pr_s1_l1_acc__DOT__o_data;
    } else {
        vlSelfRef.w_s2_lane = 0U;
        vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[9U] 
            = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.mux_output__DOT__i_data0 = vlSelfRef.w_s2_l0_acc;
        vlSelfRef.mux_output__DOT__i_data1 = vlSelfRef.w_s2_l1_acc;
        vlSelfRef.w_add_acc_in = vlSelfRef.pr_s1_l0_acc__DOT__o_data;
    }
    vlSelfRef.w_add_result = (0xffffU & ((IData)(vlSelfRef.pr_s1_mulr__DOT__o_data) 
                                         + (IData)(vlSelfRef.w_add_acc_in)));
    if (vlSelfRef.pr_s1_lane__DOT__o_data) {
        vlSelfRef.mux_output__DOT__o_data = vlSelfRef.pr_s1_l0_acc__DOT__o_data;
        vlSelfRef.w_s2_l0_add = vlSelfRef.pr_s1_l0_acc__DOT__o_data;
        vlSelfRef.w_s2_l1_add = vlSelfRef.w_add_result;
    } else {
        vlSelfRef.mux_output__DOT__o_data = vlSelfRef.pr_s1_l1_acc__DOT__o_data;
        vlSelfRef.w_s2_l0_add = vlSelfRef.w_add_result;
        vlSelfRef.w_s2_l1_add = vlSelfRef.pr_s1_l1_acc__DOT__o_data;
    }
    vlSelfRef.o_d = vlSelfRef.mux_output__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[8U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.mux_l0_acc_src__DOT__i_data0 = vlSelfRef.w_s2_l0_add;
    vlSelfRef.mux_l1_acc_src__DOT__i_data0 = vlSelfRef.w_s2_l1_add;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[7U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[6U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[5U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[4U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[3U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[2U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[1U] 
        = vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data;
}

VL_INLINE_OPT void Vtop_mac20i__M8___nba_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__2(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___nba_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pr_s1_mulr__DOT__i_clr_n = vlSelfRef.i_clr_n;
    vlSelfRef.pr_s1_lane__DOT__i_clr_n = vlSelfRef.i_clr_n;
    vlSelfRef.pr_s1_l0_acc__DOT__i_clr_n = vlSelfRef.i_clr_n;
    vlSelfRef.pr_s1_l1_acc__DOT__i_clr_n = vlSelfRef.i_clr_n;
    vlSelfRef.pr_s1_start__DOT__i_clr_n = vlSelfRef.i_clr_n;
    vlSelfRef.u_delay_v__DOT__i_clr_n = vlSelfRef.i_clr_n;
    vlSelfRef.pr_s1_mulr__DOT__i_en = vlSelfRef.i_en;
    vlSelfRef.pr_s1_lane__DOT__i_en = vlSelfRef.i_en;
    vlSelfRef.pr_s1_l0_acc__DOT__i_en = vlSelfRef.i_en;
    vlSelfRef.pr_s1_l1_acc__DOT__i_en = vlSelfRef.i_en;
    vlSelfRef.pr_s1_start__DOT__i_en = vlSelfRef.i_en;
    vlSelfRef.u_delay_v__DOT__i_en = vlSelfRef.i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.u_delay_v__DOT__i_clr_n;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.u_delay_v__DOT__i_en;
}

VL_INLINE_OPT void Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__0(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_s1_a = vlSelfRef.i_a;
    vlSelfRef.pr_s1_mulr__DOT__i_data0 = vlSelfRef.w_s1_a;
}

VL_INLINE_OPT void Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__1(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_s1_b = vlSelfRef.i_b;
    vlSelfRef.pr_s1_mulr__DOT__i_data1 = vlSelfRef.w_s1_b;
}

VL_INLINE_OPT void Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__2(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_s1_start = vlSelfRef.i_start;
    vlSelfRef.u_delay_v__DOT__i_in = vlSelfRef.i_last;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[0U] 
        = vlSelfRef.i_last;
    vlSelfRef.pr_s1_start__DOT__i_data = vlSelfRef.w_s1_start;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__i_in;
}

VL_INLINE_OPT void Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__3(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__u_mac__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vcellinp__mux_l0_acc_src__i_sel;
    __Vcellinp__mux_l0_acc_src__i_sel = 0;
    CData/*0:0*/ __Vcellinp__mux_l1_acc_src__i_sel;
    __Vcellinp__mux_l1_acc_src__i_sel = 0;
    // Body
    vlSelfRef.w_s1_lane = (1U & (((IData)(vlSelfRef.i_en) 
                                  & (IData)(vlSelfRef.i_start))
                                  ? (~ (IData)(vlSelfRef.pr_s1_lane__DOT__o_data))
                                  : (IData)(vlSelfRef.pr_s1_lane__DOT__o_data)));
    vlSelfRef.u_delay_v__DOT__o_out = ((9U >= (0xfU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.i_dim)))) 
                                       && vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d
                                       [(0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.i_dim)))]);
    vlSelfRef.pr_s1_lane__DOT__i_data = vlSelfRef.w_s1_lane;
    __Vcellinp__mux_l0_acc_src__i_sel = ((~ (IData)(vlSelfRef.w_s1_lane)) 
                                         & (IData)(vlSelfRef.i_start));
    __Vcellinp__mux_l1_acc_src__i_sel = ((IData)(vlSelfRef.i_start) 
                                         & (IData)(vlSelfRef.w_s1_lane));
    vlSelfRef.o_done = vlSelfRef.u_delay_v__DOT__o_out;
    if (__Vcellinp__mux_l0_acc_src__i_sel) {
        vlSelfRef.mux_l0_acc_src__DOT__i_sel = 1U;
        vlSelfRef.w_s1_l0_acc_in = vlSelfRef.i_c;
    } else {
        vlSelfRef.mux_l0_acc_src__DOT__i_sel = 0U;
        vlSelfRef.w_s1_l0_acc_in = vlSelfRef.w_s2_l0_add;
    }
    if (__Vcellinp__mux_l1_acc_src__i_sel) {
        vlSelfRef.mux_l1_acc_src__DOT__i_sel = 1U;
        vlSelfRef.w_s1_l1_acc_in = vlSelfRef.i_c;
    } else {
        vlSelfRef.mux_l1_acc_src__DOT__i_sel = 0U;
        vlSelfRef.w_s1_l1_acc_in = vlSelfRef.w_s2_l1_add;
    }
    vlSelfRef.pr_s1_l0_acc__DOT__i_data = vlSelfRef.w_s1_l0_acc_in;
    vlSelfRef.mux_l0_acc_src__DOT__o_data = vlSelfRef.w_s1_l0_acc_in;
    vlSelfRef.pr_s1_l1_acc__DOT__i_data = vlSelfRef.w_s1_l1_acc_in;
    vlSelfRef.mux_l1_acc_src__DOT__o_data = vlSelfRef.w_s1_l1_acc_in;
}

VL_INLINE_OPT void Vtop_mac20i__M8___ico_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__u_mac__1(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___ico_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__u_mac__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_s1_a = vlSelfRef.i_a;
    vlSelfRef.w_s1_b = vlSelfRef.i_b;
    vlSelfRef.w_s1_start = vlSelfRef.i_start;
    vlSelfRef.w_s1_lane = (1U & (((IData)(vlSelfRef.i_en) 
                                  & (IData)(vlSelfRef.i_start))
                                  ? (~ (IData)(vlSelfRef.pr_s1_lane__DOT__o_data))
                                  : (IData)(vlSelfRef.pr_s1_lane__DOT__o_data)));
    vlSelfRef.u_delay_v__DOT__i_in = vlSelfRef.i_last;
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d[0U] 
        = vlSelfRef.i_last;
    vlSelfRef.pr_s1_mulr__DOT__i_data0 = vlSelfRef.w_s1_a;
    vlSelfRef.pr_s1_mulr__DOT__i_data1 = vlSelfRef.w_s1_b;
    vlSelfRef.pr_s1_start__DOT__i_data = vlSelfRef.w_s1_start;
    vlSelfRef.pr_s1_lane__DOT__i_data = vlSelfRef.w_s1_lane;
    vlSelfRef.__Vcellinp__mux_l0_acc_src__i_sel = (
                                                   (~ (IData)(vlSelfRef.w_s1_lane)) 
                                                   & (IData)(vlSelfRef.i_start));
    vlSelfRef.__Vcellinp__mux_l1_acc_src__i_sel = ((IData)(vlSelfRef.i_start) 
                                                   & (IData)(vlSelfRef.w_s1_lane));
    vlSelfRef.u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.u_delay_v__DOT__i_in;
    vlSelfRef.u_delay_v__DOT__o_out = ((9U >= (0xfU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.i_dim)))) 
                                       && vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d
                                       [(0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.i_dim)))]);
    if (vlSelfRef.__Vcellinp__mux_l0_acc_src__i_sel) {
        vlSelfRef.mux_l0_acc_src__DOT__i_sel = 1U;
        vlSelfRef.w_s1_l0_acc_in = vlSelfRef.i_c;
    } else {
        vlSelfRef.mux_l0_acc_src__DOT__i_sel = 0U;
        vlSelfRef.w_s1_l0_acc_in = vlSelfRef.w_s2_l0_add;
    }
    if (vlSelfRef.__Vcellinp__mux_l1_acc_src__i_sel) {
        vlSelfRef.mux_l1_acc_src__DOT__i_sel = 1U;
        vlSelfRef.w_s1_l1_acc_in = vlSelfRef.i_c;
    } else {
        vlSelfRef.mux_l1_acc_src__DOT__i_sel = 0U;
        vlSelfRef.w_s1_l1_acc_in = vlSelfRef.w_s2_l1_add;
    }
    vlSelfRef.o_done = vlSelfRef.u_delay_v__DOT__o_out;
    vlSelfRef.pr_s1_l0_acc__DOT__i_data = vlSelfRef.w_s1_l0_acc_in;
    vlSelfRef.mux_l0_acc_src__DOT__o_data = vlSelfRef.w_s1_l0_acc_in;
    vlSelfRef.pr_s1_l1_acc__DOT__i_data = vlSelfRef.w_s1_l1_acc_in;
    vlSelfRef.mux_l1_acc_src__DOT__o_data = vlSelfRef.w_s1_l1_acc_in;
}

VL_INLINE_OPT void Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__u_mac__3(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__u_mac__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_s1_lane = (1U & (((IData)(vlSelfRef.i_en) 
                                  & (IData)(vlSelfRef.i_start))
                                  ? (~ (IData)(vlSelfRef.pr_s1_lane__DOT__o_data))
                                  : (IData)(vlSelfRef.pr_s1_lane__DOT__o_data)));
    vlSelfRef.pr_s1_lane__DOT__i_data = vlSelfRef.w_s1_lane;
}

VL_INLINE_OPT void Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__u_mac__4(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__u_mac__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_delay_v__DOT__o_out = ((9U >= (0xfU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.i_dim)))) 
                                       && vlSelfRef.u_delay_v__DOT__genblk1__DOT__r_d
                                       [(0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.i_dim)))]);
    vlSelfRef.o_done = vlSelfRef.u_delay_v__DOT__o_out;
}

VL_INLINE_OPT void Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__u_mac__5(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__u_mac__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__mux_l0_acc_src__i_sel = (
                                                   (~ (IData)(vlSelfRef.w_s1_lane)) 
                                                   & (IData)(vlSelfRef.i_start));
    vlSelfRef.__Vcellinp__mux_l1_acc_src__i_sel = ((IData)(vlSelfRef.i_start) 
                                                   & (IData)(vlSelfRef.w_s1_lane));
    vlSelfRef.mux_l0_acc_src__DOT__i_sel = vlSelfRef.__Vcellinp__mux_l0_acc_src__i_sel;
    vlSelfRef.mux_l1_acc_src__DOT__i_sel = vlSelfRef.__Vcellinp__mux_l1_acc_src__i_sel;
}

VL_INLINE_OPT void Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__u_mac__6(Vtop_mac20i__M8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_mac20i__M8___nba_comb__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__u_mac__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_s1_l0_acc_in = ((IData)(vlSelfRef.__Vcellinp__mux_l0_acc_src__i_sel)
                                 ? (IData)(vlSelfRef.i_c)
                                 : (IData)(vlSelfRef.w_s2_l0_add));
    vlSelfRef.w_s1_l1_acc_in = ((IData)(vlSelfRef.__Vcellinp__mux_l1_acc_src__i_sel)
                                 ? (IData)(vlSelfRef.i_c)
                                 : (IData)(vlSelfRef.w_s2_l1_add));
    vlSelfRef.pr_s1_l0_acc__DOT__i_data = vlSelfRef.w_s1_l0_acc_in;
    vlSelfRef.mux_l0_acc_src__DOT__o_data = vlSelfRef.w_s1_l0_acc_in;
    vlSelfRef.pr_s1_l1_acc__DOT__i_data = vlSelfRef.w_s1_l1_acc_in;
    vlSelfRef.mux_l1_acc_src__DOT__o_data = vlSelfRef.w_s1_l1_acc_in;
}
