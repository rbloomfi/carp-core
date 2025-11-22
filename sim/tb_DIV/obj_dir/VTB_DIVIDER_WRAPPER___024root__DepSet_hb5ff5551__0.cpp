// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DIVIDER_WRAPPER.h for the primary calling header

#include "VTB_DIVIDER_WRAPPER__pch.h"
#include "VTB_DIVIDER_WRAPPER___024root.h"

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___eval_initial__TOP(VTB_DIVIDER_WRAPPER___024root* vlSelf);
VlCoroutine VTB_DIVIDER_WRAPPER___024root___eval_initial__TOP__Vtiming__0(VTB_DIVIDER_WRAPPER___024root* vlSelf);
VlCoroutine VTB_DIVIDER_WRAPPER___024root___eval_initial__TOP__Vtiming__1(VTB_DIVIDER_WRAPPER___024root* vlSelf);

void VTB_DIVIDER_WRAPPER___024root___eval_initial(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_initial\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTB_DIVIDER_WRAPPER___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VTB_DIVIDER_WRAPPER___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTB_DIVIDER_WRAPPER___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__TB_DIVIDER_WRAPPER__DOT__clk__0 
        = vlSelfRef.TB_DIVIDER_WRAPPER__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB_DIVIDER_WRAPPER__DOT__DUT__DOT__r_done__0 
        = vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__r_done;
}

VL_INLINE_OPT VlCoroutine VTB_DIVIDER_WRAPPER___024root___eval_initial__TOP__Vtiming__1(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_initial__TOP__Vtiming__1\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "TB_DIVIDER_WRAPPER.sv", 
                                             147);
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__clk)));
    }
}

void VTB_DIVIDER_WRAPPER___024root___eval_act(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_act\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VTB_DIVIDER_WRAPPER___024root___nba_sequent__TOP__0(VTB_DIVIDER_WRAPPER___024root* vlSelf);

void VTB_DIVIDER_WRAPPER___024root___eval_nba(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_nba\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_DIVIDER_WRAPPER___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VTB_DIVIDER_WRAPPER___024root___nba_sequent__TOP__0(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___nba_sequent__TOP__0\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__r_done 
        = vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_done;
    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__out = ((2U & (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__func3))
                                               ? ((1U 
                                                   & ((~ (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__func3)) 
                                                      & ((vlSelfRef.TB_DIVIDER_WRAPPER__DOT__nume 
                                                          ^ vlSelfRef.TB_DIVIDER_WRAPPER__DOT__den) 
                                                         >> 0x1fU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME)))
                                                   : (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME))
                                               : ((1U 
                                                   & ((~ (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__func3)) 
                                                      & ((vlSelfRef.TB_DIVIDER_WRAPPER__DOT__nume 
                                                          ^ vlSelfRef.TB_DIVIDER_WRAPPER__DOT__den) 
                                                         >> 0x1fU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_q))
                                                   : vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_q));
    if (((IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__en) 
         & (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_done))) {
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_done = 0U;
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__counter = 0U;
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_q 
            = vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q;
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME 
            = (QData)((IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__nume));
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__DEN 
            = ((QData)((IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den)) 
               << 0x20U);
    } else if (vlSelfRef.TB_DIVIDER_WRAPPER__DOT__clr) {
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__counter = 0U;
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_done = 1U;
    } else {
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__DEN 
            = vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_DEN;
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME 
            = vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_NUME;
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_done 
            = vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_done;
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_q 
            = vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q;
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__counter 
            = vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_counter;
    }
    vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__en = 0U;
    if (vlSelfRef.TB_DIVIDER_WRAPPER__DOT__en) {
        vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__en = 1U;
        if ((1U & (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__func3))) {
            vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__nume 
                = vlSelfRef.TB_DIVIDER_WRAPPER__DOT__nume;
            vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den 
                = vlSelfRef.TB_DIVIDER_WRAPPER__DOT__den;
        } else {
            vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__nume 
                = ((vlSelfRef.TB_DIVIDER_WRAPPER__DOT__nume 
                    >> 0x1fU) ? ((IData)(1U) + (~ vlSelfRef.TB_DIVIDER_WRAPPER__DOT__nume))
                    : vlSelfRef.TB_DIVIDER_WRAPPER__DOT__nume);
            vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den 
                = ((vlSelfRef.TB_DIVIDER_WRAPPER__DOT__den 
                    >> 0x1fU) ? ((IData)(1U) + (~ vlSelfRef.TB_DIVIDER_WRAPPER__DOT__den))
                    : vlSelfRef.TB_DIVIDER_WRAPPER__DOT__den);
        }
    }
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

void VTB_DIVIDER_WRAPPER___024root___timing_resume(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___timing_resume\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h0f9ea3c8__0.resume(
                                                   "@(posedge TB_DIVIDER_WRAPPER.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h9d22e2c1__0.resume(
                                                   "@(posedge TB_DIVIDER_WRAPPER.DUT.r_done)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VTB_DIVIDER_WRAPPER___024root___timing_commit(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___timing_commit\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h0f9ea3c8__0.commit(
                                                   "@(posedge TB_DIVIDER_WRAPPER.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h9d22e2c1__0.commit(
                                                   "@(posedge TB_DIVIDER_WRAPPER.DUT.r_done)");
    }
}

void VTB_DIVIDER_WRAPPER___024root___eval_triggers__act(VTB_DIVIDER_WRAPPER___024root* vlSelf);

bool VTB_DIVIDER_WRAPPER___024root___eval_phase__act(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_phase__act\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTB_DIVIDER_WRAPPER___024root___eval_triggers__act(vlSelf);
    VTB_DIVIDER_WRAPPER___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTB_DIVIDER_WRAPPER___024root___timing_resume(vlSelf);
        VTB_DIVIDER_WRAPPER___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTB_DIVIDER_WRAPPER___024root___eval_phase__nba(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_phase__nba\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTB_DIVIDER_WRAPPER___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___dump_triggers__nba(VTB_DIVIDER_WRAPPER___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root___dump_triggers__act(VTB_DIVIDER_WRAPPER___024root* vlSelf);
#endif  // VL_DEBUG

void VTB_DIVIDER_WRAPPER___024root___eval(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTB_DIVIDER_WRAPPER___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("TB_DIVIDER_WRAPPER.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTB_DIVIDER_WRAPPER___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("TB_DIVIDER_WRAPPER.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTB_DIVIDER_WRAPPER___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTB_DIVIDER_WRAPPER___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTB_DIVIDER_WRAPPER___024root___eval_debug_assertions(VTB_DIVIDER_WRAPPER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root___eval_debug_assertions\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
