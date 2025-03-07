// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMUX.h for the primary calling header

#include "verilated.h"

#include "VMUX___024root.h"

VL_INLINE_OPT void VMUX___024root___ico_sequent__TOP__0(VMUX___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_out = ((0U == (((IData)(vlSelf->io_sel0) 
                               << 1U) | (IData)(vlSelf->io_sel1)))
                       ? (IData)(vlSelf->io_in1) : 
                      ((1U == (((IData)(vlSelf->io_sel0) 
                                << 1U) | (IData)(vlSelf->io_sel1)))
                        ? (IData)(vlSelf->io_in2) : 
                       ((2U == (((IData)(vlSelf->io_sel0) 
                                 << 1U) | (IData)(vlSelf->io_sel1)))
                         ? (IData)(vlSelf->io_in3) : (IData)(vlSelf->io_in4))));
}

void VMUX___024root___eval_ico(VMUX___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VMUX___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VMUX___024root___eval_act(VMUX___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval_act\n"); );
}

void VMUX___024root___eval_nba(VMUX___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval_nba\n"); );
}

void VMUX___024root___eval_triggers__ico(VMUX___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMUX___024root___dump_triggers__ico(VMUX___024root* vlSelf);
#endif  // VL_DEBUG
void VMUX___024root___eval_triggers__act(VMUX___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMUX___024root___dump_triggers__act(VMUX___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMUX___024root___dump_triggers__nba(VMUX___024root* vlSelf);
#endif  // VL_DEBUG

void VMUX___024root___eval(VMUX___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VMUX___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VMUX___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/MUX.sv", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VMUX___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VMUX___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VMUX___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/MUX.sv", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VMUX___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VMUX___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/MUX.sv", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VMUX___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VMUX___024root___eval_debug_assertions(VMUX___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_in1 & 0xf8U))) {
        Verilated::overWidthError("io_in1");}
    if (VL_UNLIKELY((vlSelf->io_in2 & 0xf8U))) {
        Verilated::overWidthError("io_in2");}
    if (VL_UNLIKELY((vlSelf->io_in3 & 0xf8U))) {
        Verilated::overWidthError("io_in3");}
    if (VL_UNLIKELY((vlSelf->io_in4 & 0xf8U))) {
        Verilated::overWidthError("io_in4");}
    if (VL_UNLIKELY((vlSelf->io_sel0 & 0xfeU))) {
        Verilated::overWidthError("io_sel0");}
    if (VL_UNLIKELY((vlSelf->io_sel1 & 0xfeU))) {
        Verilated::overWidthError("io_sel1");}
}
#endif  // VL_DEBUG
