// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_mac20i__M8.h"

// Parameter definitions for Vtop_mac20i__M8
constexpr IData/*31:0*/ Vtop_mac20i__M8::WIDTH_AB;
constexpr IData/*31:0*/ Vtop_mac20i__M8::WIDTH_CD;
constexpr IData/*31:0*/ Vtop_mac20i__M8::M;
constexpr IData/*31:0*/ Vtop_mac20i__M8::pr_s1_mulr__DOT__IN_WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::pr_s1_lane__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::mux_l0_acc_src__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::mux_l1_acc_src__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::pr_s1_l0_acc__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::pr_s1_l1_acc__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::pr_s1_start__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::mux_output__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::u_delay_v__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::u_delay_v__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::u_delay_v__DOT__M;
constexpr IData/*31:0*/ Vtop_mac20i__M8::u_delay_v__DOT__genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::u_delay_v__DOT__genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::u_delay_v__DOT__genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::u_delay_v__DOT__genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::u_delay_v__DOT__genblk1__DOT__DELAY__BRA__4__KET____DOT__u_sr__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::u_delay_v__DOT__genblk1__DOT__DELAY__BRA__5__KET____DOT__u_sr__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::u_delay_v__DOT__genblk1__DOT__DELAY__BRA__6__KET____DOT__u_sr__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::u_delay_v__DOT__genblk1__DOT__DELAY__BRA__7__KET____DOT__u_sr__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_mac20i__M8::u_delay_v__DOT__genblk1__DOT__DELAY__BRA__8__KET____DOT__u_sr__DOT__WIDTH;


void Vtop_mac20i__M8___ctor_var_reset(Vtop_mac20i__M8* vlSelf);

Vtop_mac20i__M8::Vtop_mac20i__M8(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_mac20i__M8___ctor_var_reset(this);
}

void Vtop_mac20i__M8::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_mac20i__M8::~Vtop_mac20i__M8() {
}
