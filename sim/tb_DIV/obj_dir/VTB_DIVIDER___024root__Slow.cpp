// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DIVIDER.h for the primary calling header

#include "VTB_DIVIDER__pch.h"
#include "VTB_DIVIDER__Syms.h"
#include "VTB_DIVIDER___024root.h"

void VTB_DIVIDER___024root___ctor_var_reset(VTB_DIVIDER___024root* vlSelf);

VTB_DIVIDER___024root::VTB_DIVIDER___024root(VTB_DIVIDER__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTB_DIVIDER___024root___ctor_var_reset(this);
}

void VTB_DIVIDER___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTB_DIVIDER___024root::~VTB_DIVIDER___024root() {
}
