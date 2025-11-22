// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_MUL.h for the primary calling header

#include "Vtb_MUL__pch.h"
#include "Vtb_MUL___024root.h"

VL_ATTR_COLD void Vtb_MUL___024root___eval_static(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_static\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_MUL___024root___eval_final(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_final\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_MUL___024root___dump_triggers__stl(Vtb_MUL___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_MUL___024root___eval_phase__stl(Vtb_MUL___024root* vlSelf);

VL_ATTR_COLD void Vtb_MUL___024root___eval_settle(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_settle\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_MUL___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_MUL.sv", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_MUL___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_MUL___024root___dump_triggers__stl(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___dump_triggers__stl\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_MUL___024root___stl_sequent__TOP__0(Vtb_MUL___024root* vlSelf);
VL_ATTR_COLD void Vtb_MUL___024root____Vm_traceActivitySetAll(Vtb_MUL___024root* vlSelf);

VL_ATTR_COLD void Vtb_MUL___024root___eval_stl(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_stl\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_MUL___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_MUL___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_MUL___024root___stl_sequent__TOP__0(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___stl_sequent__TOP__0\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_MUL__DOT__product_MO = vlSelfRef.tb_MUL__DOT__product_MI;
    if ((0x800U & vlSelfRef.tb_MUL__DOT__opA_M)) {
        vlSelfRef.tb_MUL__DOT__product_MO = (vlSelfRef.tb_MUL__DOT__product_MO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_M)), 0xbU));
    }
    if ((0x1000U & vlSelfRef.tb_MUL__DOT__opA_M)) {
        vlSelfRef.tb_MUL__DOT__product_MO = (vlSelfRef.tb_MUL__DOT__product_MO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_M)), 0xcU));
    }
    if ((0x2000U & vlSelfRef.tb_MUL__DOT__opA_M)) {
        vlSelfRef.tb_MUL__DOT__product_MO = (vlSelfRef.tb_MUL__DOT__product_MO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_M)), 0xdU));
    }
    if ((0x4000U & vlSelfRef.tb_MUL__DOT__opA_M)) {
        vlSelfRef.tb_MUL__DOT__product_MO = (vlSelfRef.tb_MUL__DOT__product_MO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_M)), 0xeU));
    }
    if ((0x8000U & vlSelfRef.tb_MUL__DOT__opA_M)) {
        vlSelfRef.tb_MUL__DOT__product_MO = (vlSelfRef.tb_MUL__DOT__product_MO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_M)), 0xfU));
    }
    if ((0x10000U & vlSelfRef.tb_MUL__DOT__opA_M)) {
        vlSelfRef.tb_MUL__DOT__product_MO = (vlSelfRef.tb_MUL__DOT__product_MO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_M)), 0x10U));
    }
    if ((0x20000U & vlSelfRef.tb_MUL__DOT__opA_M)) {
        vlSelfRef.tb_MUL__DOT__product_MO = (vlSelfRef.tb_MUL__DOT__product_MO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_M)), 0x11U));
    }
    if ((0x40000U & vlSelfRef.tb_MUL__DOT__opA_M)) {
        vlSelfRef.tb_MUL__DOT__product_MO = (vlSelfRef.tb_MUL__DOT__product_MO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_M)), 0x12U));
    }
    if ((0x80000U & vlSelfRef.tb_MUL__DOT__opA_M)) {
        vlSelfRef.tb_MUL__DOT__product_MO = (vlSelfRef.tb_MUL__DOT__product_MO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_M)), 0x13U));
    }
    if ((0x100000U & vlSelfRef.tb_MUL__DOT__opA_M)) {
        vlSelfRef.tb_MUL__DOT__product_MO = (vlSelfRef.tb_MUL__DOT__product_MO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_M)), 0x14U));
    }
    if ((0x200000U & vlSelfRef.tb_MUL__DOT__opA_M)) {
        vlSelfRef.tb_MUL__DOT__product_MO = (vlSelfRef.tb_MUL__DOT__product_MO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_M)), 0x15U));
    }
    vlSelfRef.tb_MUL__DOT__product_EO = 0ULL;
    if ((2U & (IData)(vlSelfRef.tb_MUL__DOT__mul_op))) {
        vlSelfRef.tb_MUL__DOT__negate_E = (1U & ((1U 
                                                  & (~ (IData)(vlSelfRef.tb_MUL__DOT__mul_op))) 
                                                 && (vlSelfRef.tb_MUL__DOT__rs1 
                                                     >> 0x1fU)));
        if ((1U & (IData)(vlSelfRef.tb_MUL__DOT__mul_op))) {
            vlSelfRef.tb_MUL__DOT__opA_E = vlSelfRef.tb_MUL__DOT__rs1;
            vlSelfRef.tb_MUL__DOT__opB_E = vlSelfRef.tb_MUL__DOT__rs2;
        } else {
            vlSelfRef.tb_MUL__DOT__opA_E = ((vlSelfRef.tb_MUL__DOT__rs1 
                                             >> 0x1fU)
                                             ? ((IData)(1U) 
                                                + (~ vlSelfRef.tb_MUL__DOT__rs1))
                                             : vlSelfRef.tb_MUL__DOT__rs1);
            vlSelfRef.tb_MUL__DOT__opB_E = vlSelfRef.tb_MUL__DOT__rs2;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_MUL__DOT__mul_op))) {
        vlSelfRef.tb_MUL__DOT__negate_E = (1U & ((vlSelfRef.tb_MUL__DOT__rs1 
                                                  ^ vlSelfRef.tb_MUL__DOT__rs2) 
                                                 >> 0x1fU));
        vlSelfRef.tb_MUL__DOT__opA_E = ((vlSelfRef.tb_MUL__DOT__rs1 
                                         >> 0x1fU) ? 
                                        ((IData)(1U) 
                                         + (~ vlSelfRef.tb_MUL__DOT__rs1))
                                         : vlSelfRef.tb_MUL__DOT__rs1);
        vlSelfRef.tb_MUL__DOT__opB_E = ((vlSelfRef.tb_MUL__DOT__rs2 
                                         >> 0x1fU) ? 
                                        ((IData)(1U) 
                                         + (~ vlSelfRef.tb_MUL__DOT__rs2))
                                         : vlSelfRef.tb_MUL__DOT__rs2);
    } else {
        vlSelfRef.tb_MUL__DOT__negate_E = (1U & ((vlSelfRef.tb_MUL__DOT__rs1 
                                                  ^ vlSelfRef.tb_MUL__DOT__rs2) 
                                                 >> 0x1fU));
        vlSelfRef.tb_MUL__DOT__opA_E = ((vlSelfRef.tb_MUL__DOT__rs1 
                                         >> 0x1fU) ? 
                                        ((IData)(1U) 
                                         + (~ vlSelfRef.tb_MUL__DOT__rs1))
                                         : vlSelfRef.tb_MUL__DOT__rs1);
        vlSelfRef.tb_MUL__DOT__opB_E = ((vlSelfRef.tb_MUL__DOT__rs2 
                                         >> 0x1fU) ? 
                                        ((IData)(1U) 
                                         + (~ vlSelfRef.tb_MUL__DOT__rs2))
                                         : vlSelfRef.tb_MUL__DOT__rs2);
    }
    if ((1U & vlSelfRef.tb_MUL__DOT__opA_E)) {
        vlSelfRef.tb_MUL__DOT__product_EO = (vlSelfRef.tb_MUL__DOT__product_EO 
                                             + (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_E)));
    }
    if ((2U & vlSelfRef.tb_MUL__DOT__opA_E)) {
        vlSelfRef.tb_MUL__DOT__product_EO = (vlSelfRef.tb_MUL__DOT__product_EO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_E)), 1U));
    }
    if ((4U & vlSelfRef.tb_MUL__DOT__opA_E)) {
        vlSelfRef.tb_MUL__DOT__product_EO = (vlSelfRef.tb_MUL__DOT__product_EO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_E)), 2U));
    }
    if ((8U & vlSelfRef.tb_MUL__DOT__opA_E)) {
        vlSelfRef.tb_MUL__DOT__product_EO = (vlSelfRef.tb_MUL__DOT__product_EO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_E)), 3U));
    }
    if ((0x10U & vlSelfRef.tb_MUL__DOT__opA_E)) {
        vlSelfRef.tb_MUL__DOT__product_EO = (vlSelfRef.tb_MUL__DOT__product_EO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_E)), 4U));
    }
    if ((0x20U & vlSelfRef.tb_MUL__DOT__opA_E)) {
        vlSelfRef.tb_MUL__DOT__product_EO = (vlSelfRef.tb_MUL__DOT__product_EO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_E)), 5U));
    }
    if ((0x40U & vlSelfRef.tb_MUL__DOT__opA_E)) {
        vlSelfRef.tb_MUL__DOT__product_EO = (vlSelfRef.tb_MUL__DOT__product_EO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_E)), 6U));
    }
    if ((0x80U & vlSelfRef.tb_MUL__DOT__opA_E)) {
        vlSelfRef.tb_MUL__DOT__product_EO = (vlSelfRef.tb_MUL__DOT__product_EO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_E)), 7U));
    }
    if ((0x100U & vlSelfRef.tb_MUL__DOT__opA_E)) {
        vlSelfRef.tb_MUL__DOT__product_EO = (vlSelfRef.tb_MUL__DOT__product_EO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_E)), 8U));
    }
    if ((0x200U & vlSelfRef.tb_MUL__DOT__opA_E)) {
        vlSelfRef.tb_MUL__DOT__product_EO = (vlSelfRef.tb_MUL__DOT__product_EO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_E)), 9U));
    }
    if ((0x400U & vlSelfRef.tb_MUL__DOT__opA_E)) {
        vlSelfRef.tb_MUL__DOT__product_EO = (vlSelfRef.tb_MUL__DOT__product_EO 
                                             + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_E)), 0xaU));
    }
    vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product = vlSelfRef.tb_MUL__DOT__product_WI;
    if ((0x400000U & vlSelfRef.tb_MUL__DOT__opA_W)) {
        vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
            = (vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_W)), 0x16U));
    }
    if ((0x800000U & vlSelfRef.tb_MUL__DOT__opA_W)) {
        vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
            = (vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_W)), 0x17U));
    }
    if ((0x1000000U & vlSelfRef.tb_MUL__DOT__opA_W)) {
        vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
            = (vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_W)), 0x18U));
    }
    if ((0x2000000U & vlSelfRef.tb_MUL__DOT__opA_W)) {
        vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
            = (vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_W)), 0x19U));
    }
    if ((0x4000000U & vlSelfRef.tb_MUL__DOT__opA_W)) {
        vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
            = (vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_W)), 0x1aU));
    }
    if ((0x8000000U & vlSelfRef.tb_MUL__DOT__opA_W)) {
        vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
            = (vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_W)), 0x1bU));
    }
    if ((0x10000000U & vlSelfRef.tb_MUL__DOT__opA_W)) {
        vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
            = (vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_W)), 0x1cU));
    }
    if ((0x20000000U & vlSelfRef.tb_MUL__DOT__opA_W)) {
        vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
            = (vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_W)), 0x1dU));
    }
    if ((0x40000000U & vlSelfRef.tb_MUL__DOT__opA_W)) {
        vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
            = (vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_W)), 0x1eU));
    }
    if ((vlSelfRef.tb_MUL__DOT__opA_W >> 0x1fU)) {
        vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
            = (vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_MUL__DOT__opB_W)), 0x1fU));
    }
    vlSelfRef.tb_MUL__DOT__UUT3__DOT__corrected = ((IData)(vlSelfRef.tb_MUL__DOT__negate_W)
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    (~ vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product))
                                                    : vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product);
    vlSelfRef.tb_MUL__DOT__rd = ((2U & (IData)(vlSelfRef.tb_MUL__DOT__mul_op))
                                  ? ((1U & (IData)(vlSelfRef.tb_MUL__DOT__mul_op))
                                      ? (IData)((vlSelfRef.tb_MUL__DOT__UUT3__DOT__corrected 
                                                 >> 0x20U))
                                      : (IData)((vlSelfRef.tb_MUL__DOT__UUT3__DOT__corrected 
                                                 >> 0x20U)))
                                  : ((1U & (IData)(vlSelfRef.tb_MUL__DOT__mul_op))
                                      ? (IData)((vlSelfRef.tb_MUL__DOT__UUT3__DOT__corrected 
                                                 >> 0x20U))
                                      : (IData)(vlSelfRef.tb_MUL__DOT__UUT3__DOT__corrected)));
}

VL_ATTR_COLD void Vtb_MUL___024root___eval_triggers__stl(Vtb_MUL___024root* vlSelf);

VL_ATTR_COLD bool Vtb_MUL___024root___eval_phase__stl(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_phase__stl\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_MUL___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_MUL___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_MUL___024root___dump_triggers__act(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___dump_triggers__act\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_MUL.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( tb_MUL.mul_op)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( tb_MUL.rd)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( tb_MUL.rs1)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( tb_MUL.rs2)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_MUL___024root___dump_triggers__nba(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___dump_triggers__nba\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_MUL.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( tb_MUL.mul_op)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( tb_MUL.rd)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( tb_MUL.rs1)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( tb_MUL.rs2)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_MUL___024root____Vm_traceActivitySetAll(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root____Vm_traceActivitySetAll\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtb_MUL___024root___ctor_var_reset(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___ctor_var_reset\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_MUL__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_MUL__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb_MUL__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb_MUL__DOT__mul_op = VL_RAND_RESET_I(2);
    vlSelf->tb_MUL__DOT__rd = VL_RAND_RESET_I(32);
    vlSelf->tb_MUL__DOT__negate_E = VL_RAND_RESET_I(1);
    vlSelf->tb_MUL__DOT__negate_M = VL_RAND_RESET_I(1);
    vlSelf->tb_MUL__DOT__negate_W = VL_RAND_RESET_I(1);
    vlSelf->tb_MUL__DOT__product_MI = VL_RAND_RESET_Q(64);
    vlSelf->tb_MUL__DOT__product_WI = VL_RAND_RESET_Q(64);
    vlSelf->tb_MUL__DOT__product_EO = VL_RAND_RESET_Q(64);
    vlSelf->tb_MUL__DOT__product_MO = VL_RAND_RESET_Q(64);
    vlSelf->tb_MUL__DOT__opA_E = VL_RAND_RESET_I(32);
    vlSelf->tb_MUL__DOT__opB_E = VL_RAND_RESET_I(32);
    vlSelf->tb_MUL__DOT__opA_M = VL_RAND_RESET_I(32);
    vlSelf->tb_MUL__DOT__opB_M = VL_RAND_RESET_I(32);
    vlSelf->tb_MUL__DOT__opA_W = VL_RAND_RESET_I(32);
    vlSelf->tb_MUL__DOT__opB_W = VL_RAND_RESET_I(32);
    vlSelf->tb_MUL__DOT__UUT3__DOT__W_product = VL_RAND_RESET_Q(64);
    vlSelf->tb_MUL__DOT__UUT3__DOT__corrected = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__tb_MUL__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_MUL__DOT__mul_op__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_MUL__DOT__rd__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_MUL__DOT__rs1__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_MUL__DOT__rs2__0 = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
