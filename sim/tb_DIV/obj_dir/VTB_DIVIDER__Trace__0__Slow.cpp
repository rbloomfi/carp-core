// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTB_DIVIDER__Syms.h"


VL_ATTR_COLD void VTB_DIVIDER___024root__trace_init_sub__TOP__0(VTB_DIVIDER___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root__trace_init_sub__TOP__0\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("TB_DIVIDER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"nume",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"den",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"test",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"nume",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"den",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"quotient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"remainder",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+14,0,"DEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"NEXT_DEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"NEXT_NUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+16,0,"NUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+5,0,"NEXT_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"current_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"NEXT_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+18,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+7,0,"NEXT_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"current_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"running",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"NEXT_ERROR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTB_DIVIDER___024root__trace_init_top(VTB_DIVIDER___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root__trace_init_top\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTB_DIVIDER___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTB_DIVIDER___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_DIVIDER___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_DIVIDER___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_DIVIDER___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTB_DIVIDER___024root__trace_register(VTB_DIVIDER___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root__trace_register\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VTB_DIVIDER___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTB_DIVIDER___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTB_DIVIDER___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTB_DIVIDER___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTB_DIVIDER___024root__trace_const_0_sub_0(VTB_DIVIDER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_DIVIDER___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root__trace_const_0\n"); );
    // Init
    VTB_DIVIDER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DIVIDER___024root*>(voidSelf);
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_DIVIDER___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_DIVIDER___024root__trace_const_0_sub_0(VTB_DIVIDER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root__trace_const_0_sub_0\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+24,(vlSelfRef.TB_DIVIDER__DOT__clr));
    bufp->fullBit(oldp+25,(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__check));
    bufp->fullBit(oldp+26,(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__running));
}

VL_ATTR_COLD void VTB_DIVIDER___024root__trace_full_0_sub_0(VTB_DIVIDER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_DIVIDER___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root__trace_full_0\n"); );
    // Init
    VTB_DIVIDER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DIVIDER___024root*>(voidSelf);
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_DIVIDER___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_DIVIDER___024root__trace_full_0_sub_0(VTB_DIVIDER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER___024root__trace_full_0_sub_0\n"); );
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__NEXT_DEN),64);
    bufp->fullQData(oldp+3,(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__NEXT_NUME),64);
    bufp->fullIData(oldp+5,(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__NEXT_q),32);
    bufp->fullCData(oldp+6,(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__NEXT_counter),6);
    bufp->fullBit(oldp+7,(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__NEXT_done));
    bufp->fullBit(oldp+8,(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__NEXT_ERROR));
    bufp->fullBit(oldp+9,(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__current_done));
    bufp->fullIData(oldp+10,(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__current_q),32);
    bufp->fullIData(oldp+11,((IData)(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__NUME)),32);
    bufp->fullBit(oldp+12,(vlSelfRef.TB_DIVIDER__DOT__error));
    bufp->fullBit(oldp+13,((1U & (~ (IData)(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__current_done)))));
    bufp->fullQData(oldp+14,(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__DEN),64);
    bufp->fullQData(oldp+16,(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__NUME),64);
    bufp->fullCData(oldp+18,(vlSelfRef.TB_DIVIDER__DOT__DUT__DOT__counter),6);
    bufp->fullIData(oldp+19,(vlSelfRef.TB_DIVIDER__DOT__nume),32);
    bufp->fullIData(oldp+20,(vlSelfRef.TB_DIVIDER__DOT__den),32);
    bufp->fullBit(oldp+21,(vlSelfRef.TB_DIVIDER__DOT__en));
    bufp->fullBit(oldp+22,(vlSelfRef.TB_DIVIDER__DOT__clk));
    bufp->fullBit(oldp+23,(vlSelfRef.TB_DIVIDER__DOT__test));
}
