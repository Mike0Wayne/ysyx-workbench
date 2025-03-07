// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMUX.h for the primary calling header

#ifndef VERILATED_VMUX___024ROOT_H_
#define VERILATED_VMUX___024ROOT_H_  // guard

#include "verilated.h"

class VMUX__Syms;

class VMUX___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_in1,2,0);
    VL_IN8(io_in2,2,0);
    VL_IN8(io_in3,2,0);
    VL_IN8(io_in4,2,0);
    VL_IN8(io_sel0,0,0);
    VL_IN8(io_sel1,0,0);
    VL_OUT8(io_out,2,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMUX__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMUX___024root(VMUX__Syms* symsp, const char* v__name);
    ~VMUX___024root();
    VL_UNCOPYABLE(VMUX___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
