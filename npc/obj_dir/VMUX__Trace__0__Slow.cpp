// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMUX__Syms.h"


VL_ATTR_COLD void VMUX___024root__trace_init_sub__TOP__0(VMUX___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"io_in1", false,-1, 2,0);
    tracep->declBus(c+4,"io_in2", false,-1, 2,0);
    tracep->declBus(c+5,"io_in3", false,-1, 2,0);
    tracep->declBus(c+6,"io_in4", false,-1, 2,0);
    tracep->declBit(c+7,"io_sel0", false,-1);
    tracep->declBit(c+8,"io_sel1", false,-1);
    tracep->declBus(c+9,"io_out", false,-1, 2,0);
    tracep->pushNamePrefix("MUX ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"io_in1", false,-1, 2,0);
    tracep->declBus(c+4,"io_in2", false,-1, 2,0);
    tracep->declBus(c+5,"io_in3", false,-1, 2,0);
    tracep->declBus(c+6,"io_in4", false,-1, 2,0);
    tracep->declBit(c+7,"io_sel0", false,-1);
    tracep->declBit(c+8,"io_sel1", false,-1);
    tracep->declBus(c+9,"io_out", false,-1, 2,0);
    tracep->declBus(c+10,"casez_tmp", false,-1, 2,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VMUX___024root__trace_init_top(VMUX___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root__trace_init_top\n"); );
    // Body
    VMUX___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMUX___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMUX___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMUX___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMUX___024root__trace_register(VMUX___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMUX___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMUX___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMUX___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMUX___024root__trace_full_sub_0(VMUX___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMUX___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root__trace_full_top_0\n"); );
    // Init
    VMUX___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMUX___024root*>(voidSelf);
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMUX___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMUX___024root__trace_full_sub_0(VMUX___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clock));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullCData(oldp+3,(vlSelf->io_in1),3);
    bufp->fullCData(oldp+4,(vlSelf->io_in2),3);
    bufp->fullCData(oldp+5,(vlSelf->io_in3),3);
    bufp->fullCData(oldp+6,(vlSelf->io_in4),3);
    bufp->fullBit(oldp+7,(vlSelf->io_sel0));
    bufp->fullBit(oldp+8,(vlSelf->io_sel1));
    bufp->fullCData(oldp+9,(vlSelf->io_out),3);
    bufp->fullCData(oldp+10,(((0U == (((IData)(vlSelf->io_sel0) 
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
