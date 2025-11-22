// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_MUL.h for the primary calling header

#ifndef VERILATED_VTB_MUL___024ROOT_H_
#define VERILATED_VTB_MUL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_MUL___024unit;


class Vtb_MUL__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_MUL___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_MUL___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_MUL__DOT__clk;
    CData/*1:0*/ tb_MUL__DOT__mul_op;
    CData/*0:0*/ tb_MUL__DOT__negate_E;
    CData/*0:0*/ tb_MUL__DOT__negate_M;
    CData/*0:0*/ tb_MUL__DOT__negate_W;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_MUL__DOT__clk__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_MUL__DOT__mul_op__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_MUL__DOT__rs1;
    IData/*31:0*/ tb_MUL__DOT__rs2;
    IData/*31:0*/ tb_MUL__DOT__rd;
    IData/*31:0*/ tb_MUL__DOT__opA_E;
    IData/*31:0*/ tb_MUL__DOT__opB_E;
    IData/*31:0*/ tb_MUL__DOT__opA_M;
    IData/*31:0*/ tb_MUL__DOT__opB_M;
    IData/*31:0*/ tb_MUL__DOT__opA_W;
    IData/*31:0*/ tb_MUL__DOT__opB_W;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_MUL__DOT__rd__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_MUL__DOT__rs1__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_MUL__DOT__rs2__0;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_MUL__DOT__product_MI;
    QData/*63:0*/ tb_MUL__DOT__product_WI;
    QData/*63:0*/ tb_MUL__DOT__product_EO;
    QData/*63:0*/ tb_MUL__DOT__product_MO;
    QData/*63:0*/ tb_MUL__DOT__UUT3__DOT__W_product;
    QData/*63:0*/ tb_MUL__DOT__UUT3__DOT__corrected;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_MUL__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_MUL___024root(Vtb_MUL__Syms* symsp, const char* v__name);
    ~Vtb_MUL___024root();
    VL_UNCOPYABLE(Vtb_MUL___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
