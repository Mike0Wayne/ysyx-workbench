// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMUX__Syms.h"


void VMUX___024root__trace_chg_sub_0(VMUX___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMUX___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root__trace_chg_top_0\n"); );
    // Init
    VMUX___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMUX___024root*>(voidSelf);
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMUX___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VMUX___024root__trace_chg_sub_0(VMUX___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clock));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgCData(oldp+2,(vlSelf->io_in1),3);
    bufp->chgCData(oldp+3,(vlSelf->io_in2),3);
    bufp->chgCData(oldp+4,(vlSelf->io_in3),3);
    bufp->chgCData(oldp+5,(vlSelf->io_in4),3);
    bufp->chgBit(oldp+6,(vlSelf->io_sel0));
    bufp->chgBit(oldp+7,(vlSelf->io_sel1));
    bufp->chgCData(oldp+8,(vlSelf->io_out),3);
    bufp->chgCData(oldp+9,(((0U == (((IData)(vlSelf->io_sel0) 
                                     << 1U) | (IData)(vlSelf->io_sel1)))
                             ? (IData)(vlSelf->io_in1)
                             : ((1U == (((IData)(vlSelf->io_sel0) 
                                         << 1U) | (IData)(vlSelf->io_sel1)))
                                 ? (IData)(vlSelf->io_in2)
                                 : ((2U == (((IData)(vlSelf->io_sel0) 
                                             << 1U) 
                                            | (IData)(vlSelf->io_sel1)))
                                     ? (IData)(vlSelf->io_in3)
                                     : (IData)(vlSelf->io_in4))))),3);
}

void VMUX___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root__trace_cleanup\n"); );
    // Init
    VMUX___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMUX___024root*>(voidSelf);
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
