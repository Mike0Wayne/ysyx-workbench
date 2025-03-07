// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMUX.h for the primary calling header

#include "verilated.h"

#include "VMUX__Syms.h"
#include "VMUX___024root.h"

void VMUX___024root___ctor_var_reset(VMUX___024root* vlSelf);

VMUX___024root::VMUX___024root(VMUX__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMUX___024root___ctor_var_reset(this);
}

void VMUX___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMUX___024root::~VMUX___024root() {
}
