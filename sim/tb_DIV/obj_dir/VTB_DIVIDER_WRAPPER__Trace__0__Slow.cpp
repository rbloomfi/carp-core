// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTB_DIVIDER_WRAPPER__Syms.h"


VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root__trace_init_sub__TOP__0(VTB_DIVIDER_WRAPPER___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root__trace_init_sub__TOP__0\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("TB_DIVIDER_WRAPPER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"nume",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"den",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+4,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"test",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"go",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"r_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"w_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"nume",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"den",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("divider", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"nume",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"den",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"quotient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"remainder",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+15,0,"DEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"NEXT_DEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+19,0,"NEXT_NUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"NUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+23,0,"NEXT_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"current_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"NEXT_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+25,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+26,0,"NEXT_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"current_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"running",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root__trace_init_top(VTB_DIVIDER_WRAPPER___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root__trace_init_top\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTB_DIVIDER_WRAPPER___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_DIVIDER_WRAPPER___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_DIVIDER_WRAPPER___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root__trace_register(VTB_DIVIDER_WRAPPER___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root__trace_register\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VTB_DIVIDER_WRAPPER___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTB_DIVIDER_WRAPPER___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTB_DIVIDER_WRAPPER___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTB_DIVIDER_WRAPPER___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root__trace_const_0_sub_0(VTB_DIVIDER_WRAPPER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root__trace_const_0\n"); );
    // Init
    VTB_DIVIDER_WRAPPER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DIVIDER_WRAPPER___024root*>(voidSelf);
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_DIVIDER_WRAPPER___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root__trace_const_0_sub_0(VTB_DIVIDER_WRAPPER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root__trace_const_0_sub_0\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+28,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__test));
    bufp->fullBit(oldp+29,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__error));
    bufp->fullBit(oldp+30,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__check));
    bufp->fullBit(oldp+31,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__running));
}

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root__trace_full_0_sub_0(VTB_DIVIDER_WRAPPER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root__trace_full_0\n"); );
    // Init
    VTB_DIVIDER_WRAPPER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DIVIDER_WRAPPER___024root*>(voidSelf);
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_DIVIDER_WRAPPER___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_DIVIDER_WRAPPER___024root__trace_full_0_sub_0(VTB_DIVIDER_WRAPPER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DIVIDER_WRAPPER___024root__trace_full_0_sub_0\n"); );
    VTB_DIVIDER_WRAPPER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__nume),32);
    bufp->fullIData(oldp+2,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__den),32);
    bufp->fullCData(oldp+3,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__func3),2);
    bufp->fullBit(oldp+4,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__en));
    bufp->fullBit(oldp+5,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__clr));
    bufp->fullBit(oldp+6,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__r_done));
    bufp->fullIData(oldp+7,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__out),32);
    bufp->fullBit(oldp+8,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__en));
    bufp->fullBit(oldp+9,((1U & (~ (IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_done)))));
    bufp->fullBit(oldp+10,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_done));
    bufp->fullIData(oldp+11,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__current_q),32);
    bufp->fullIData(oldp+12,((IData)(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME)),32);
    bufp->fullIData(oldp+13,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__nume),32);
    bufp->fullIData(oldp+14,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__den),32);
    bufp->fullQData(oldp+15,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__DEN),64);
    bufp->fullQData(oldp+17,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_DEN),64);
    bufp->fullQData(oldp+19,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_NUME),64);
    bufp->fullQData(oldp+21,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NUME),64);
    bufp->fullIData(oldp+23,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_q),32);
    bufp->fullCData(oldp+24,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_counter),6);
    bufp->fullCData(oldp+25,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__counter),6);
    bufp->fullBit(oldp+26,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__DUT__DOT__divider__DOT__NEXT_done));
    bufp->fullBit(oldp+27,(vlSelfRef.TB_DIVIDER_WRAPPER__DOT__clk));
}
