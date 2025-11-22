// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTB_DIVIDER_WRAPPER__Syms.h"


void VTB_DIVIDER_WRAPPER___024root__trace_chg_0_sub_0(VTB_DIVIDER_WRAPPER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_DIVIDER_WRAPPER___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root__trace_chg_0\n"); );
    // Init
    VTB_DIVIDER_WRAPPER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DIVIDER_WRAPPER___024root*>(voidSelf);
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_DIVIDER_WRAPPER___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_DIVIDER_WRAPPER___024root__trace_chg_0_sub_0(VTB_DIVIDER_WRAPPER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root__trace_chg_0_sub_0\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__nume),32);
        bufp->chgIData(oldp+1,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__den),32);
        bufp->chgCData(oldp+2,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__func3),2);
        bufp->chgBit(oldp+3,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__en));
        bufp->chgBit(oldp+4,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__clr));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+5,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__r_done));
        bufp->chgIData(oldp+6,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__out),32);
        bufp->chgBit(oldp+7,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__en));
        bufp->chgBit(oldp+8,((1U & (~ (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_done)))));
        bufp->chgBit(oldp+9,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_done));
        bufp->chgIData(oldp+10,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_q),32);
        bufp->chgIData(oldp+11,((IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME)),32);
        bufp->chgIData(oldp+12,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__nume),32);
        bufp->chgIData(oldp+13,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den),32);
        bufp->chgQData(oldp+14,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__DEN),64);
        bufp->chgQData(oldp+16,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_DEN),64);
        bufp->chgQData(oldp+18,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_NUME),64);
        bufp->chgQData(oldp+20,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME),64);
        bufp->chgIData(oldp+22,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q),32);
        bufp->chgCData(oldp+23,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_counter),6);
        bufp->chgCData(oldp+24,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__counter),6);
        bufp->chgBit(oldp+25,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_done));
    }
    bufp->chgBit(oldp+26,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__clk));
}

void VTB_DIVIDER_WRAPPER___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root__trace_cleanup\n"); );
    // Init
    VTB_DIVIDER_WRAPPER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DIVIDER_WRAPPER___024root*>(voidSelf);
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
