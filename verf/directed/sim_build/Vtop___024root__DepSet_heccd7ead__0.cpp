// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
void Vtop___024root___eval_ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [0U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [0U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [0U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [0U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [0U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [0U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [0U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [0U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [1U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [1U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [1U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [1U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [1U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [1U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [1U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [1U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [2U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [2U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [2U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [2U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [2U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [2U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [2U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [2U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [3U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [3U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [3U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [3U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [3U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [3U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [3U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [3U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [4U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [4U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [4U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [4U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [4U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [4U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [4U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [4U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [5U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [5U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [5U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [5U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [5U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [5U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [5U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [5U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [6U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [6U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [6U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [6U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [6U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [6U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [6U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [6U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [7U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [7U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [7U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [7U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [7U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [7U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [7U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [7U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [7U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [7U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [7U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [7U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [7U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [7U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [7U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [7U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [7U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [7U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [7U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [7U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [7U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_a
            [7U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [7U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [7U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__0__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__1__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__2__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__3__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__4__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__5__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__6__KET____DOT__genblk1__DOT__u_shift_a__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__genblk1__DOT__u_shift_a__i_data;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][7U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][7U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][7U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [0U][7U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [0U][7U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [0U][7U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [1U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [1U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [1U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [1U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [1U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [1U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [1U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [1U][7U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [1U][7U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [1U][7U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [2U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [2U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [2U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [2U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [2U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [2U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [2U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [2U][7U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [2U][7U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [2U][7U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [3U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [3U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [3U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [3U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [3U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [3U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [3U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [3U][7U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [3U][7U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [3U][7U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [4U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [4U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [4U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [4U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [4U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [4U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [4U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [4U][7U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [4U][7U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [4U][7U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [5U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [5U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [5U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [5U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [5U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [5U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [5U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [5U][7U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [5U][7U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [5U][7U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [6U][0U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][0U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][0U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [6U][1U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][1U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][1U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [6U][2U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][2U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][2U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [6U][3U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][3U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][3U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [6U][4U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][4U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][4U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [6U][5U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][5U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][5U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [6U][6U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][6U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][6U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data 
        = ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_b
            [6U][7U] << 2U) | ((vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_start
                                [6U][7U] << 1U) | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_last
                               [6U][7U]));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__1__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__2__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__3__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__4__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__4__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__5__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__5__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__6__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__6__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__0__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__1__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__2__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__3__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__4__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__5__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__6__KET____DOT__genblk2__DOT__u_shift_b__i_data;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__DOT__i_data 
        = vlSelfRef.mmacu__DOT__u_mmacu_core__DOT____Vcellinp__ROW__BRA__7__KET____DOT__COL__BRA__7__KET____DOT__genblk2__DOT__u_shift_b__i_data;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__69(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__69\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec = 0U;
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec 
        = ((0xfeU & (IData)(vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec)) 
           | vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_done
           [0U][(7U & ((IData)(vlSelfRef.mmacu__DOT__w_uload_dim) 
                       - (IData)(1U)))]);
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec 
        = ((0xfdU & (IData)(vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec)) 
           | (vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_done
              [1U][(7U & ((IData)(vlSelfRef.mmacu__DOT__w_uload_dim) 
                          - (IData)(1U)))] << 1U));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec 
        = ((0xfbU & (IData)(vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec)) 
           | (vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_done
              [2U][(7U & ((IData)(vlSelfRef.mmacu__DOT__w_uload_dim) 
                          - (IData)(1U)))] << 2U));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec 
        = ((0xf7U & (IData)(vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec)) 
           | (vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_done
              [3U][(7U & ((IData)(vlSelfRef.mmacu__DOT__w_uload_dim) 
                          - (IData)(1U)))] << 3U));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec 
        = ((0xefU & (IData)(vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec)) 
           | (vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_done
              [4U][(7U & ((IData)(vlSelfRef.mmacu__DOT__w_uload_dim) 
                          - (IData)(1U)))] << 4U));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec 
        = ((0xdfU & (IData)(vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec)) 
           | (vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_done
              [5U][(7U & ((IData)(vlSelfRef.mmacu__DOT__w_uload_dim) 
                          - (IData)(1U)))] << 5U));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec 
        = ((0xbfU & (IData)(vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec)) 
           | (vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_done
              [6U][(7U & ((IData)(vlSelfRef.mmacu__DOT__w_uload_dim) 
                          - (IData)(1U)))] << 6U));
    vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec 
        = ((0x7fU & (IData)(vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__w_uload_mask_vec)) 
           | (vlSelfRef.mmacu__DOT__u_mmacu_core__DOT__wn_done
              [7U][(7U & ((IData)(vlSelfRef.mmacu__DOT__w_uload_dim) 
                          - (IData)(1U)))] << 7U));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<290> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/mnt/fileserver/prj/systolic_array_gemm/verf/directed/../../rtl/core/mmacu.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/fileserver/prj/systolic_array_gemm/verf/directed/../../rtl/core/mmacu.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/fileserver/prj/systolic_array_gemm/verf/directed/../../rtl/core/mmacu.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.i_clk & 0xfeU)))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY(((vlSelfRef.i_rst_n & 0xfeU)))) {
        Verilated::overWidthError("i_rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.i_start & 0xfeU)))) {
        Verilated::overWidthError("i_start");}
    if (VL_UNLIKELY(((vlSelfRef.i_last & 0xfeU)))) {
        Verilated::overWidthError("i_last");}
    if (VL_UNLIKELY(((vlSelfRef.i_break & 0xfeU)))) {
        Verilated::overWidthError("i_break");}
    if (VL_UNLIKELY(((vlSelfRef.i_dim & 0xf0U)))) {
        Verilated::overWidthError("i_dim");}
    if (VL_UNLIKELY(((vlSelfRef.i_ab_valid & 0xfeU)))) {
        Verilated::overWidthError("i_ab_valid");}
    if (VL_UNLIKELY(((vlSelfRef.i_d_ready & 0xfeU)))) {
        Verilated::overWidthError("i_d_ready");}
}
#endif  // VL_DEBUG
