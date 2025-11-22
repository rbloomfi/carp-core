// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DIVIDER.h for the primary calling header

#include "VTB_DIVIDER__pch.h"
#include "VTB_DIVIDER__Syms.h"
#include "VTB_DIVIDER___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DIVIDER___024root___dump_triggers__act(VTB_DIVIDER___024root* vlSelf);
#endif  // VL_DEBUG

void VTB_DIVIDER___024root___eval_triggers__act(VTB_DIVIDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root___eval_triggers__act\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.TB_DIVIDER__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB_DIVIDER__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__current_done) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB_DIVIDER__DOT__DUT__DOT__current_done__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__TB_DIVIDER__DOT__clk__0 
        = vlSelfRef.TB_DIVIDER__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB_DIVIDER__DOT__DUT__DOT__current_done__0 
        = vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__current_done;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTB_DIVIDER___024root___dump_triggers__act(vlSelf);
    }
#endif
}
