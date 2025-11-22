// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_MUL.h for the primary calling header

#include "Vtb_MUL__pch.h"
#include "Vtb_MUL___024root.h"

VL_ATTR_COLD void Vtb_MUL___024root___eval_initial__TOP(Vtb_MUL___024root* vlSelf);
VlCoroutine Vtb_MUL___024root___eval_initial__TOP__Vtiming__0(Vtb_MUL___024root* vlSelf);
VlCoroutine Vtb_MUL___024root___eval_initial__TOP__Vtiming__1(Vtb_MUL___024root* vlSelf);

void Vtb_MUL___024root___eval_initial(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_initial\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_MUL___024root___eval_initial__TOP(vlSelf);
    Vtb_MUL___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_MUL___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_MUL__DOT__clk__0 
        = vlSelfRef.tb_MUL__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_MUL__DOT__mul_op__0 
        = vlSelfRef.tb_MUL__DOT__mul_op;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_MUL__DOT__rd__0 
        = vlSelfRef.tb_MUL__DOT__rd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_MUL__DOT__rs1__0 
        = vlSelfRef.tb_MUL__DOT__rs1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_MUL__DOT__rs2__0 
        = vlSelfRef.tb_MUL__DOT__rs2;
}

VL_INLINE_OPT VlCoroutine Vtb_MUL___024root___eval_initial__TOP__Vtiming__0(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_MUL__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_MUL.sv", 
                                             81);
        vlSelfRef.tb_MUL__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_MUL__DOT__clk)));
    }
}

void Vtb_MUL___024root___act_sequent__TOP__0(Vtb_MUL___024root* vlSelf);

void Vtb_MUL___024root___eval_act(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_act\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_MUL___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_MUL___024root___act_sequent__TOP__0(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___act_sequent__TOP__0\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U & (IData)(vlSelfRef.tb_MUL__DOT__mul_op))) {
        vlSelfRef.tb_MUL__DOT__negate_E = (1U & ((1U 
                                                  & (~ (IData)(vlSelfRef.tb_MUL__DOT__mul_op))) 
                                                 && (vlSelfRef.tb_MUL__DOT__rs1 
                                                     >> 0x1fU)));
        if ((1U & (IData)(vlSelfRef.tb_MUL__DOT__mul_op))) {
            vlSelfRef.tb_MUL__DOT__opA_E = vlSelfRef.tb_MUL__DOT__rs1;
            vlSelfRef.tb_MUL__DOT__opB_E = vlSelfRef.tb_MUL__DOT__rs2;
            vlSelfRef.tb_MUL__DOT__rd = (IData)((vlSelfRef.tb_MUL__DOT__UUT3__DOT__corrected 
                                                 >> 0x20U));
        } else {
            vlSelfRef.tb_MUL__DOT__opA_E = ((vlSelfRef.tb_MUL__DOT__rs1 
                                             >> 0x1fU)
                                             ? ((IData)(1U) 
                                                + (~ vlSelfRef.tb_MUL__DOT__rs1))
                                             : vlSelfRef.tb_MUL__DOT__rs1);
            vlSelfRef.tb_MUL__DOT__opB_E = vlSelfRef.tb_MUL__DOT__rs2;
            vlSelfRef.tb_MUL__DOT__rd = (IData)((vlSelfRef.tb_MUL__DOT__UUT3__DOT__corrected 
                                                 >> 0x20U));
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
        vlSelfRef.tb_MUL__DOT__rd = (IData)((vlSelfRef.tb_MUL__DOT__UUT3__DOT__corrected 
                                             >> 0x20U));
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
        vlSelfRef.tb_MUL__DOT__rd = (IData)(vlSelfRef.tb_MUL__DOT__UUT3__DOT__corrected);
    }
    vlSelfRef.tb_MUL__DOT__product_EO = 0ULL;
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
}

void Vtb_MUL___024root___nba_sequent__TOP__0(Vtb_MUL___024root* vlSelf);
void Vtb_MUL___024root___nba_sequent__TOP__1(Vtb_MUL___024root* vlSelf);
void Vtb_MUL___024root___nba_sequent__TOP__2(Vtb_MUL___024root* vlSelf);
void Vtb_MUL___024root___nba_comb__TOP__0(Vtb_MUL___024root* vlSelf);

void Vtb_MUL___024root___eval_nba(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_nba\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1eULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_MUL___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_MUL___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_MUL___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x21ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_MUL___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_MUL___024root___nba_sequent__TOP__1(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___nba_sequent__TOP__1\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_MUL__DOT__product_MI = vlSelfRef.tb_MUL__DOT__product_EO;
    vlSelfRef.tb_MUL__DOT__product_WI = vlSelfRef.tb_MUL__DOT__product_MO;
    vlSelfRef.tb_MUL__DOT__negate_W = vlSelfRef.tb_MUL__DOT__negate_M;
    vlSelfRef.tb_MUL__DOT__opA_W = vlSelfRef.tb_MUL__DOT__opA_M;
    vlSelfRef.tb_MUL__DOT__opB_W = vlSelfRef.tb_MUL__DOT__opB_M;
    vlSelfRef.tb_MUL__DOT__negate_M = vlSelfRef.tb_MUL__DOT__negate_E;
    vlSelfRef.tb_MUL__DOT__opA_M = vlSelfRef.tb_MUL__DOT__opA_E;
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
    vlSelfRef.tb_MUL__DOT__opB_M = vlSelfRef.tb_MUL__DOT__opB_E;
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
}

VL_INLINE_OPT void Vtb_MUL___024root___nba_sequent__TOP__2(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___nba_sequent__TOP__2\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.tb_MUL__DOT__product_EO = 0ULL;
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
}

VL_INLINE_OPT void Vtb_MUL___024root___nba_comb__TOP__0(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___nba_comb__TOP__0\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vtb_MUL___024root___timing_resume(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___timing_resume\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_MUL___024root___eval_triggers__act(Vtb_MUL___024root* vlSelf);

bool Vtb_MUL___024root___eval_phase__act(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_phase__act\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_MUL___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_MUL___024root___timing_resume(vlSelf);
        Vtb_MUL___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_MUL___024root___eval_phase__nba(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_phase__nba\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_MUL___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_MUL___024root___dump_triggers__nba(Vtb_MUL___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_MUL___024root___dump_triggers__act(Vtb_MUL___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_MUL___024root___eval(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_MUL___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_MUL.sv", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_MUL___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_MUL.sv", 7, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_MUL___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_MUL___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_MUL___024root___eval_debug_assertions(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_debug_assertions\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
