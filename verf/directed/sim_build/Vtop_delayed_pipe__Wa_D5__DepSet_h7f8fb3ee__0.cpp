// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_delayed_pipe__Wa_D5.h"

VL_INLINE_OPT void Vtop_delayed_pipe__Wa_D5___ico_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b__0(Vtop_delayed_pipe__Wa_D5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_delayed_pipe__Wa_D5___ico_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__r_d[1U] = vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__r_d[2U] = vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__r_d[3U] = vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__r_d[4U] = vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__r_d[5U] = vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.o_out = vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.i_rst_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.i_rst_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.i_rst_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.i_rst_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_rst_n 
        = vlSelfRef.i_rst_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.i_clk;
    vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.i_clk;
    vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.i_clk;
    vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.i_clk;
    vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_clk 
        = vlSelfRef.i_clk;
    vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.i_clr_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.i_clr_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.i_clr_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.i_clr_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.i_clr_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.i_en;
    vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.i_en;
    vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.i_en;
    vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.i_en;
    vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.i_en;
    vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.i_in;
    vlSelfRef.genblk1__DOT__r_d[0U] = vlSelfRef.i_in;
}

VL_INLINE_OPT void Vtop_delayed_pipe__Wa_D5___nba_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b__0(Vtop_delayed_pipe__Wa_D5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_delayed_pipe__Wa_D5___nba_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((~ (IData)(vlSelfRef.i_rst_n)) | (~ (IData)(vlSelfRef.i_clr_n))))) {
        vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data = 0U;
        vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data = 0U;
        vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data = 0U;
        vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data = 0U;
        vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data = 0U;
    } else if (vlSelfRef.i_en) {
        vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data;
        vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data 
            = vlSelfRef.i_in;
    }
    vlSelfRef.genblk1__DOT__r_d[5U] = vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.o_out = vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__r_d[4U] = vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__r_d[3U] = vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__r_d[2U] = vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data;
    vlSelfRef.genblk1__DOT__r_d[1U] = vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data;
}

VL_INLINE_OPT void Vtop_delayed_pipe__Wa_D5___nba_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b__1(Vtop_delayed_pipe__Wa_D5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_delayed_pipe__Wa_D5___nba_sequent__TOP__mmacu__DOT__u_mmacu_core__DOT__ROW__BRA__0__KET____DOT__COL__BRA__4__KET____DOT__u_delay_b__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_data 
        = vlSelfRef.i_in;
    vlSelfRef.genblk1__DOT__r_d[0U] = vlSelfRef.i_in;
    vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.i_clr_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.i_clr_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.i_clr_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.i_clr_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_clr_n 
        = vlSelfRef.i_clr_n;
    vlSelfRef.genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.i_en;
    vlSelfRef.genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.i_en;
    vlSelfRef.genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.i_en;
    vlSelfRef.genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.i_en;
    vlSelfRef.genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_en 
        = vlSelfRef.i_en;
}
