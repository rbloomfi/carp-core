// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTB_DIVIDER__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTB_DIVIDER::VTB_DIVIDER(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTB_DIVIDER__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VTB_DIVIDER::VTB_DIVIDER(const char* _vcname__)
    : VTB_DIVIDER(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTB_DIVIDER::~VTB_DIVIDER() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTB_DIVIDER___024root___eval_debug_assertions(VTB_DIVIDER___024root* vlSelf);
#endif  // VL_DEBUG
void VTB_DIVIDER___024root___eval_static(VTB_DIVIDER___024root* vlSelf);
void VTB_DIVIDER___024root___eval_initial(VTB_DIVIDER___024root* vlSelf);
void VTB_DIVIDER___024root___eval_settle(VTB_DIVIDER___024root* vlSelf);
void VTB_DIVIDER___024root___eval(VTB_DIVIDER___024root* vlSelf);

void VTB_DIVIDER::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTB_DIVIDER::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTB_DIVIDER___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTB_DIVIDER___024root___eval_static(&(vlSymsp->TOP));
        VTB_DIVIDER___024root___eval_initial(&(vlSymsp->TOP));
        VTB_DIVIDER___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTB_DIVIDER___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VTB_DIVIDER::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VTB_DIVIDER::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VTB_DIVIDER::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VTB_DIVIDER::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VTB_DIVIDER::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTB_DIVIDER___024root___eval_final(VTB_DIVIDER___024root* vlSelf);

VL_ATTR_COLD void VTB_DIVIDER::final() {
    VTB_DIVIDER___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTB_DIVIDER::hierName() const { return vlSymsp->name(); }
const char* VTB_DIVIDER::modelName() const { return "VTB_DIVIDER"; }
unsigned VTB_DIVIDER::threads() const { return 1; }
void VTB_DIVIDER::prepareClone() const { contextp()->prepareClone(); }
void VTB_DIVIDER::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VTB_DIVIDER::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTB_DIVIDER___024root__trace_decl_types(VerilatedVcd* tracep);

void VTB_DIVIDER___024root__trace_init_top(VTB_DIVIDER___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTB_DIVIDER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DIVIDER___024root*>(voidSelf);
    VTB_DIVIDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VTB_DIVIDER___024root__trace_decl_types(tracep);
    VTB_DIVIDER___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTB_DIVIDER___024root__trace_register(VTB_DIVIDER___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTB_DIVIDER::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTB_DIVIDER::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTB_DIVIDER___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
