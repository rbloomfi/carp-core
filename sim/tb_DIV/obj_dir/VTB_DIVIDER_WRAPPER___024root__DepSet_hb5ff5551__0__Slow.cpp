// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DIVIDER_WRAPPER.h for the primary calling header

#include "VTB_DIVIDER_WRAPPER__pch.h"
#include "VTB_DIVIDER_WRAPPER___024root.h"

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___eval_static__TOP(VTB_DIVIDER_WRAPPER___024root* vlSelf);
VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root____Vm_traceActivitySetAll(VTB_DIVIDER_WRAPPER___024root* vlSelf);

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___eval_static(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_static\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTB_DIVIDER_WRAPPER___024root___eval_static__TOP(vlSelf);
    VTB_DIVIDER_WRAPPER___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___eval_static__TOP(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_static__TOP\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_done = 0U;
}

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___eval_final(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_final\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___dump_triggers__stl(VTB_DIVIDER_WRAPPER___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTB_DIVIDER_WRAPPER___024root___eval_phase__stl(VTB_DIVIDER_WRAPPER___024root* vlSelf);

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___eval_settle(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_settle\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VTB_DIVIDER_WRAPPER___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("TB_DIVIDER_WRAPPER.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTB_DIVIDER_WRAPPER___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___dump_triggers__stl(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___dump_triggers__stl\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___stl_sequent__TOP__0(VTB_DIVIDER_WRAPPER___024root* vlSelf);

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___eval_stl(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_stl\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VTB_DIVIDER_WRAPPER___024root___stl_sequent__TOP__0(vlSelf);
        VTB_DIVIDER_WRAPPER___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___stl_sequent__TOP__0(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___stl_sequent__TOP__0\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_counter = 0U;
    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_done = 1U;
    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_DEN = 0ULL;
    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_NUME = 0ULL;
    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q = 0U;
    if ((1U & (~ (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_done)))) {
        if ((0U == (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__counter))) {
            if ((0U != vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                if ((1U != vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                    if ((2U != vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                        if ((4U != vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                            if ((8U != vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                                vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_counter 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__counter)));
                            }
                        }
                    }
                }
                if ((1U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q 
                        = vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__nume;
                } else if ((2U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q 
                        = VL_SHIFTR_III(32,32,32, vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__nume, 1U);
                } else if ((4U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q 
                        = VL_SHIFTR_III(32,32,32, vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__nume, 2U);
                } else if ((8U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q 
                        = VL_SHIFTR_III(32,32,32, vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__nume, 3U);
                } else {
                    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q 
                        = VL_SHIFTL_III(32,32,32, vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_q, 1U);
                    if ((vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME 
                         >= vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__DEN)) {
                        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q 
                            = (1U | vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q);
                    }
                }
            }
            vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_done 
                = ((0U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den) 
                   || ((1U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den) 
                       || ((2U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den) 
                           || ((4U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den) 
                               || (8U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)))));
            if ((0U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_DEN = 0xffffffffULL;
                vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_NUME = 0xffffffffULL;
            } else {
                if ((1U != vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                    if ((2U != vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                        if ((4U != vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                            if ((8U != vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) {
                                vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_DEN 
                                    = VL_SHIFTR_QQI(64,64,32, vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__DEN, 1U);
                            }
                        }
                    }
                }
                vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_NUME 
                    = ((1U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)
                        ? 0ULL : ((2U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)
                                   ? (QData)((IData)(
                                                     (1U 
                                                      & vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__nume)))
                                   : ((4U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)
                                       ? (QData)((IData)(
                                                         (3U 
                                                          & vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__nume)))
                                       : ((8U == vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)
                                           ? (QData)((IData)(
                                                             (7U 
                                                              & vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__nume)))
                                           : ((vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME 
                                               >= vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__DEN)
                                               ? (vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME 
                                                  - vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__DEN)
                                               : vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME)))));
            }
        } else {
            vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_counter 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__counter)));
            if ((0x20U != (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__counter))) {
                vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_done = 0U;
            }
            vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_DEN 
                = VL_SHIFTR_QQI(64,64,32, vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__DEN, 1U);
            vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_q, 1U);
            if ((vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME 
                 >= vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__DEN)) {
                vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_NUME 
                    = (vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME 
                       - vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__DEN);
                vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q 
                    = (1U | vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q);
            } else {
                vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_NUME 
                    = vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME;
            }
        }
    }
}

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___eval_triggers__stl(VTB_DIVIDER_WRAPPER___024root* vlSelf);

VL_ATTR_COLD bool VTB_DIVIDER_WRAPPER___024root___eval_phase__stl(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_phase__stl\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTB_DIVIDER_WRAPPER___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTB_DIVIDER_WRAPPER___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___dump_triggers__act(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___dump_triggers__act\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge TB_DIVIDER_WRAPPER.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge TB_DIVIDER_WRAPPER.DUT.r_done)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___dump_triggers__nba(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___dump_triggers__nba\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge TB_DIVIDER_WRAPPER.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge TB_DIVIDER_WRAPPER.DUT.r_done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root____Vm_traceActivitySetAll(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root____Vm_traceActivitySetAll\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___ctor_var_reset(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___ctor_var_reset\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->TB_DIVIDER_WRAPPER__DOT__nume = VL_RAND_RESET_I(32);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__den = VL_RAND_RESET_I(32);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__func3 = VL_RAND_RESET_I(2);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__test = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__error = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__r_done = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__nume = VL_RAND_RESET_I(32);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den = VL_RAND_RESET_I(32);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__DEN = VL_RAND_RESET_Q(64);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_DEN = VL_RAND_RESET_Q(64);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_NUME = VL_RAND_RESET_Q(64);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME = VL_RAND_RESET_Q(64);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q = VL_RAND_RESET_I(32);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_q = VL_RAND_RESET_I(32);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_counter = VL_RAND_RESET_I(6);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__counter = VL_RAND_RESET_I(6);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_done = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_done = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__check = VL_RAND_RESET_I(1);
    vlSelf->TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_DIVIDER_WRAPPER__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_DIVIDER_WRAPPER__DOT__DUT__DOT__r_done__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
