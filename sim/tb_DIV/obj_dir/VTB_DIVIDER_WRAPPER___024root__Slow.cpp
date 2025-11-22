// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DIVIDER_WRAPPER.h for the primary calling header

#include "VTB_DIVIDER_WRAPPER__pch.h"
#include "VTB_DIVIDER_WRAPPER__Syms.h"
#include "VTB_DIVIDER_WRAPPER___024root.h"

void VTB_DIVIDER_WRAPPER___024root___ctor_var_reset(VTB_DIVIDER_WRAPPER___024root* vlSelf);

VTB_DIVIDER_WRAPPER___024root::VTB_DIVIDER_WRAPPER___024root(VTB_DIVIDER_WRAPPER__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTB_DIVIDER_WRAPPER___024root___ctor_var_reset(this);
}

void VTB_DIVIDER_WRAPPER___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTB_DIVIDER_WRAPPER___024root::~VTB_DIVIDER_WRAPPER___024root() {
}
