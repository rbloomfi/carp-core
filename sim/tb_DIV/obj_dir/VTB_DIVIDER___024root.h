// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTB_DIVIDER.h for the primary calling header

#ifndef VERILATED_VTB_DIVIDER___024ROOT_H_
#define VERILATED_VTB_DIVIDER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VTB_DIVIDER__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTB_DIVIDER___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ TB_DIVIDER__DOT__clk;
    CData/*0:0*/ TB_DIVIDER__DOT__DUT__DOT__current_done;
    CData/*0:0*/ TB_DIVIDER__DOT__en;
    CData/*0:0*/ TB_DIVIDER__DOT__test;
    CData/*0:0*/ TB_DIVIDER__DOT__clr;
    CData/*0:0*/ TB_DIVIDER__DOT__error;
    CData/*5:0*/ TB_DIVIDER__DOT__DUT__DOT__NEXT_counter;
    CData/*5:0*/ TB_DIVIDER__DOT__DUT__DOT__counter;
    CData/*0:0*/ TB_DIVIDER__DOT__DUT__DOT__NEXT_done;
    CData/*0:0*/ TB_DIVIDER__DOT__DUT__DOT__check;
    CData/*0:0*/ TB_DIVIDER__DOT__DUT__DOT__running;
    CData/*0:0*/ TB_DIVIDER__DOT__DUT__DOT__NEXT_ERROR;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__TB_DIVIDER__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__TB_DIVIDER__DOT__DUT__DOT__current_done__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ TB_DIVIDER__DOT__nume;
    IData/*31:0*/ TB_DIVIDER__DOT__den;
    IData/*31:0*/ TB_DIVIDER__DOT__DUT__DOT__NEXT_q;
    IData/*31:0*/ TB_DIVIDER__DOT__DUT__DOT__current_q;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ TB_DIVIDER__DOT__DUT__DOT__DEN;
    QData/*63:0*/ TB_DIVIDER__DOT__DUT__DOT__NEXT_DEN;
    QData/*63:0*/ TB_DIVIDER__DOT__DUT__DOT__NEXT_NUME;
    QData/*63:0*/ TB_DIVIDER__DOT__DUT__DOT__NUME;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerScheduler __VtrigSched_hbd90f242__0;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h69b56474__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTB_DIVIDER__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTB_DIVIDER___024root(VTB_DIVIDER__Syms* symsp, const char* v__name);
    ~VTB_DIVIDER___024root();
    VL_UNCOPYABLE(VTB_DIVIDER___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
