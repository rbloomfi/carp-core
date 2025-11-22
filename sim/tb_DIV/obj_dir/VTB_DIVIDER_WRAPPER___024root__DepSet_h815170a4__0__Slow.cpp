// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DIVIDER_WRAPPER.h for the primary calling header

#include "VTB_DIVIDER_WRAPPER__pch.h"
#include "VTB_DIVIDER_WRAPPER__Syms.h"
#include "VTB_DIVIDER_WRAPPER___024root.h"

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___eval_initial__TOP(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_initial__TOP\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___dump_triggers__stl(VTB_DIVIDER_WRAPPER___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___eval_triggers__stl(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_triggers__stl\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTB_DIVIDER_WRAPPER___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
