// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_delayed_pipe__Wa_D4.h"

// Parameter definitions for Vtop_delayed_pipe__Wa_D4
constexpr IData/*31:0*/ Vtop_delayed_pipe__Wa_D4::WIDTH;
constexpr IData/*31:0*/ Vtop_delayed_pipe__Wa_D4::DEPTH;
constexpr IData/*31:0*/ Vtop_delayed_pipe__Wa_D4::genblk1__DOT__DELAY__BRA__0__KET____DOT__u_sr__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_delayed_pipe__Wa_D4::genblk1__DOT__DELAY__BRA__1__KET____DOT__u_sr__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_delayed_pipe__Wa_D4::genblk1__DOT__DELAY__BRA__2__KET____DOT__u_sr__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_delayed_pipe__Wa_D4::genblk1__DOT__DELAY__BRA__3__KET____DOT__u_sr__DOT__WIDTH;


void Vtop_delayed_pipe__Wa_D4___ctor_var_reset(Vtop_delayed_pipe__Wa_D4* vlSelf);

Vtop_delayed_pipe__Wa_D4::Vtop_delayed_pipe__Wa_D4(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_delayed_pipe__Wa_D4___ctor_var_reset(this);
}

void Vtop_delayed_pipe__Wa_D4::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_delayed_pipe__Wa_D4::~Vtop_delayed_pipe__Wa_D4() {
}
