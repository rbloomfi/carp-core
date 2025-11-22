// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DIVIDER.h for the primary calling header

#include "VTB_DIVIDER__pch.h"
#include "VTB_DIVIDER___024root.h"

VL_ATTR_COLD void VTB_DIVIDER___024root___eval_static__TOP(VTB_DIVIDER___024root* vlSelf);
VL_ATTR_COLD void VTB_DIVIDER___024root____Vm_traceActivitySetAll(VTB_DIVIDER___024root* vlSelf);

VL_ATTR_COLD void VTB_DIVIDER___024root___eval_static(VTB_DIVIDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root___eval_static\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTB_DIVIDER___024root___eval_static__TOP(vlSelf);
    VTB_DIVIDER___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VTB_DIVIDER___024root___eval_static__TOP(VTB_DIVIDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root___eval_static__TOP\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__current_done = 0U;
}

VL_ATTR_COLD void VTB_DIVIDER___024root___eval_final(VTB_DIVIDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root___eval_final\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DIVIDER___024root___dump_triggers__stl(VTB_DIVIDER___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTB_DIVIDER___024root___eval_phase__stl(VTB_DIVIDER___024root* vlSelf);

VL_ATTR_COLD void VTB_DIVIDER___024root___eval_settle(VTB_DIVIDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root___eval_settle\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VTB_DIVIDER___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("TB_DIVIDER.sv", 23, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTB_DIVIDER___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DIVIDER___024root___dump_triggers__stl(VTB_DIVIDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root___dump_triggers__stl\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VTB_DIVIDER___024root___act_comb__TOP__0(VTB_DIVIDER___024root* vlSelf);

VL_ATTR_COLD void VTB_DIVIDER___024root___eval_stl(VTB_DIVIDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root___eval_stl\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VTB_DIVIDER___024root___act_comb__TOP__0(vlSelf);
        VTB_DIVIDER___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VTB_DIVIDER___024root___eval_triggers__stl(VTB_DIVIDER___024root* vlSelf);

VL_ATTR_COLD bool VTB_DIVIDER___024root___eval_phase__stl(VTB_DIVIDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root___eval_phase__stl\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTB_DIVIDER___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTB_DIVIDER___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DIVIDER___024root___dump_triggers__act(VTB_DIVIDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root___dump_triggers__act\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge TB_DIVIDER.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge TB_DIVIDER.DUT.current_done)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DIVIDER___024root___dump_triggers__nba(VTB_DIVIDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root___dump_triggers__nba\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge TB_DIVIDER.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge TB_DIVIDER.DUT.current_done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_DIVIDER___024root____Vm_traceActivitySetAll(VTB_DIVIDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root____Vm_traceActivitySetAll\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void VTB_DIVIDER___024root___ctor_var_reset(VTB_DIVIDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root___ctor_var_reset\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->TB_DIVIDER__DOT__nume = VL_RAND_RESET_I(32);
    vlSelf->TB_DIVIDER__DOT__den = VL_RAND_RESET_I(32);
    vlSelf->TB_DIVIDER__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER__DOT__test = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER__DOT__error = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER__DOT__DUT__DOT__DEN = VL_RAND_RESET_Q(64);
    vlSelf->TB_DIVIDER__DOT__DUT__DOT__NEXT_DEN = VL_RAND_RESET_Q(64);
    vlSelf->TB_DIVIDER__DOT__DUT__DOT__NEXT_NUME = VL_RAND_RESET_Q(64);
    vlSelf->TB_DIVIDER__DOT__DUT__DOT__NUME = VL_RAND_RESET_Q(64);
    vlSelf->TB_DIVIDER__DOT__DUT__DOT__NEXT_q = VL_RAND_RESET_I(32);
    vlSelf->TB_DIVIDER__DOT__DUT__DOT__current_q = VL_RAND_RESET_I(32);
    vlSelf->TB_DIVIDER__DOT__DUT__DOT__NEXT_counter = VL_RAND_RESET_I(6);
    vlSelf->TB_DIVIDER__DOT__DUT__DOT__counter = VL_RAND_RESET_I(6);
    vlSelf->TB_DIVIDER__DOT__DUT__DOT__NEXT_done = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER__DOT__DUT__DOT__current_done = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER__DOT__DUT__DOT__check = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER__DOT__DUT__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER__DOT__DUT__DOT__NEXT_ERROR = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_DIVIDER__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_DIVIDER__DOT__DUT__DOT__current_done__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
