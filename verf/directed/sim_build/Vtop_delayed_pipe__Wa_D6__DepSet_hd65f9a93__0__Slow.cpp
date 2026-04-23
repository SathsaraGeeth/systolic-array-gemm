// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_delayed_pipe__Wa_D6.h"

VL_ATTR_COLD void Vtop_delayed_pipe__Wa_D6___ctor_var_reset(Vtop_delayed_pipe__Wa_D6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_delayed_pipe__Wa_D6___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->i_en = VL_RAND_RESET_I(1);
    vlSelf->i_clr_n = VL_RAND_RESET_I(1);
    vlSelf->i_in = VL_RAND_RESET_I(10);
    vlSelf->o_out = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->genblk1__DOT__r_d[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_clr_n = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_en = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__i_data = VL_RAND_RESET_I(10);
    vlSelf->genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__o_data = VL_RAND_RESET_I(10);
    vlSelf->genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_clr_n = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_en = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__i_data = VL_RAND_RESET_I(10);
    vlSelf->genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__o_data = VL_RAND_RESET_I(10);
    vlSelf->genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_clr_n = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_en = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__i_data = VL_RAND_RESET_I(10);
    vlSelf->genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__o_data = VL_RAND_RESET_I(10);
    vlSelf->genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_clr_n = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_en = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__i_data = VL_RAND_RESET_I(10);
    vlSelf->genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__o_data = VL_RAND_RESET_I(10);
    vlSelf->genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_clr_n = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_en = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__i_data = VL_RAND_RESET_I(10);
    vlSelf->genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__o_data = VL_RAND_RESET_I(10);
    vlSelf->genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_clr_n = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_en = VL_RAND_RESET_I(1);
    vlSelf->genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__i_data = VL_RAND_RESET_I(10);
    vlSelf->genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__o_data = VL_RAND_RESET_I(10);
}
