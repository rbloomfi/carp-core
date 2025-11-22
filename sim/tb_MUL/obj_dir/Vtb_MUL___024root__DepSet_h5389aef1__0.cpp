// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_MUL.h for the primary calling header

#include "Vtb_MUL__pch.h"
#include "Vtb_MUL__Syms.h"
#include "Vtb_MUL___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_MUL___024root___eval_initial__TOP__Vtiming__1(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.tb_MUL__DOT__mul_op = 0U;
    vlSelfRef.tb_MUL__DOT__rs1 = 2U;
    vlSelfRef.tb_MUL__DOT__rs2 = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "tb_MUL.sv", 
                                         91);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((6U != vlSelfRef.tb_MUL__DOT__rd)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_MUL.sv:92: Assertion failed in %Ntb_MUL: Test failed: 2 * 3 LOW != %10#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_MUL__DOT__rd);
            VL_STOP_MT("tb_MUL.sv", 92, "");
        }
    }
    vlSelfRef.tb_MUL__DOT__mul_op = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "tb_MUL.sv", 
                                         94);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != vlSelfRef.tb_MUL__DOT__rd)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_MUL.sv:95: Assertion failed in %Ntb_MUL: Test failed: 2 * 3 HIGH != %10#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_MUL__DOT__rd);
            VL_STOP_MT("tb_MUL.sv", 95, "");
        }
    }
    vlSelfRef.tb_MUL__DOT__mul_op = 2U;
    vlSelfRef.tb_MUL__DOT__rs1 = 0xfffffffeU;
    vlSelfRef.tb_MUL__DOT__rs2 = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "tb_MUL.sv", 
                                         99);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0xffffffffU != vlSelfRef.tb_MUL__DOT__rd)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_MUL.sv:100: Assertion failed in %Ntb_MUL: Test failed: -2 * 3 HIGH != %10#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_MUL__DOT__rd);
            VL_STOP_MT("tb_MUL.sv", 100, "");
        }
    }
    vlSelfRef.tb_MUL__DOT__mul_op = 3U;
    vlSelfRef.tb_MUL__DOT__rs1 = 2U;
    vlSelfRef.tb_MUL__DOT__rs2 = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "tb_MUL.sv", 
                                         104);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != vlSelfRef.tb_MUL__DOT__rd)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_MUL.sv:105: Assertion failed in %Ntb_MUL: Test failed: -2 * 3 HIGH != %10#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_MUL__DOT__rd);
            VL_STOP_MT("tb_MUL.sv", 105, "");
        }
    }
    VL_FINISH_MT("tb_MUL.sv", 107, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_MUL___024root___dump_triggers__act(Vtb_MUL___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_MUL___024root___eval_triggers__act(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___eval_triggers__act\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_MUL__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_MUL__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_MUL__DOT__mul_op) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_MUL__DOT__mul_op__0)));
    vlSelfRef.__VactTriggered.set(2U, (vlSelfRef.tb_MUL__DOT__rd 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_MUL__DOT__rd__0));
    vlSelfRef.__VactTriggered.set(3U, (vlSelfRef.tb_MUL__DOT__rs1 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_MUL__DOT__rs1__0));
    vlSelfRef.__VactTriggered.set(4U, (vlSelfRef.tb_MUL__DOT__rs2 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_MUL__DOT__rs2__0));
    vlSelfRef.__VactTriggered.set(5U, vlSelfRef.__VdlySched.awaitingCurrentTime());
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
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_MUL___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_MUL___024root___nba_sequent__TOP__0(Vtb_MUL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUL___024root___nba_sequent__TOP__0\n"); );
    Vtb_MUL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("RS1 =%x\tRS2 =%x\tMUL_OP = %x\n RESULT = %x\n",0,
                     32,vlSelfRef.tb_MUL__DOT__rs1,
                     32,vlSelfRef.tb_MUL__DOT__rs2,
                     2,(IData)(vlSelfRef.tb_MUL__DOT__mul_op),
                     32,vlSelfRef.tb_MUL__DOT__rd);
    }
}
