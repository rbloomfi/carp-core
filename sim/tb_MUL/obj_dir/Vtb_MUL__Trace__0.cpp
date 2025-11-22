// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_MUL__Syms.h"


void Vtb_MUL___024root__trace_chg_0_sub_0(Vtb_MUL___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_MUL___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root__trace_chg_0\n"); );
    // Init
    Vtb_MUL___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_MUL___024root*>(voidSelf);
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_MUL___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_MUL___024root__trace_chg_0_sub_0(Vtb_MUL___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root__trace_chg_0_sub_0\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_MUL__DOT__negate_M));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_MUL__DOT__negate_W));
        bufp->chgQData(oldp+2,(vlSelfRef.tb_MUL__DOT__product_MI),64);
        bufp->chgQData(oldp+4,(vlSelfRef.tb_MUL__DOT__product_WI),64);
        bufp->chgQData(oldp+6,(vlSelfRef.tb_MUL__DOT__product_MO),64);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_MUL__DOT__opA_M),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_MUL__DOT__opB_M),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_MUL__DOT__opA_W),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_MUL__DOT__opB_W),32);
        bufp->chgQData(oldp+12,(vlSelfRef.tb_MUL__DOT__UUT3__DOT__W_product),64);
        bufp->chgQData(oldp+14,(vlSelfRef.tb_MUL__DOT__UUT3__DOT__corrected),64);
    }
    bufp->chgBit(oldp+16,(vlSelfRef.tb_MUL__DOT__clk));
    bufp->chgIData(oldp+17,(vlSelfRef.tb_MUL__DOT__rs1),32);
    bufp->chgIData(oldp+18,(vlSelfRef.tb_MUL__DOT__rs2),32);
    bufp->chgCData(oldp+19,(vlSelfRef.tb_MUL__DOT__mul_op),2);
    bufp->chgIData(oldp+20,(vlSelfRef.tb_MUL__DOT__rd),32);
    bufp->chgBit(oldp+21,(vlSelfRef.tb_MUL__DOT__negate_E));
    bufp->chgQData(oldp+22,(vlSelfRef.tb_MUL__DOT__product_EO),64);
    bufp->chgIData(oldp+24,(vlSelfRef.tb_MUL__DOT__opA_E),32);
    bufp->chgIData(oldp+25,(vlSelfRef.tb_MUL__DOT__opB_E),32);
}

void Vtb_MUL___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root__trace_cleanup\n"); );
    // Init
    Vtb_MUL___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_MUL___024root*>(voidSelf);
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
