// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_MUL.h for the primary calling header

#include "Vtb_MUL__pch.h"
#include "Vtb_MUL__Syms.h"
#include "Vtb_MUL___024unit.h"

void Vtb_MUL___024unit___ctor_var_reset(Vtb_MUL___024unit* vlSelf);

Vtb_MUL___024unit::Vtb_MUL___024unit(Vtb_MUL__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_MUL___024unit___ctor_var_reset(this);
}

void Vtb_MUL___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_MUL___024unit::~Vtb_MUL___024unit() {
}
