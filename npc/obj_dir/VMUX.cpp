// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMUX.h"
#include "VMUX__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMUX::VMUX(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMUX__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_in1{vlSymsp->TOP.io_in1}
    , io_in2{vlSymsp->TOP.io_in2}
    , io_in3{vlSymsp->TOP.io_in3}
    , io_in4{vlSymsp->TOP.io_in4}
    , io_sel0{vlSymsp->TOP.io_sel0}
    , io_sel1{vlSymsp->TOP.io_sel1}
    , io_out{vlSymsp->TOP.io_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMUX::VMUX(const char* _vcname__)
    : VMUX(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMUX::~VMUX() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMUX___024root___eval_debug_assertions(VMUX___024root* vlSelf);
#endif  // VL_DEBUG
void VMUX___024root___eval_static(VMUX___024root* vlSelf);
void VMUX___024root___eval_initial(VMUX___024root* vlSelf);
void VMUX___024root___eval_settle(VMUX___024root* vlSelf);
void VMUX___024root___eval(VMUX___024root* vlSelf);

void VMUX::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMUX::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMUX___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMUX___024root___eval_static(&(vlSymsp->TOP));
        VMUX___024root___eval_initial(&(vlSymsp->TOP));
        VMUX___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMUX___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMUX::eventsPending() { return false; }

uint64_t VMUX::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMUX::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMUX___024root___eval_final(VMUX___024root* vlSelf);

VL_ATTR_COLD void VMUX::final() {
    VMUX___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMUX::hierName() const { return vlSymsp->name(); }
const char* VMUX::modelName() const { return "VMUX"; }
unsigned VMUX::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VMUX::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VMUX___024root__trace_init_top(VMUX___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMUX___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMUX___024root*>(voidSelf);
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMUX___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMUX___024root__trace_register(VMUX___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMUX::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VMUX::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMUX___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
