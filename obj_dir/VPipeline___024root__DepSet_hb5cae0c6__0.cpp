// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipeline.h for the primary calling header

#include "VPipeline__pch.h"
#include "VPipeline__Syms.h"
#include "VPipeline___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline___024root___dump_triggers__act(VPipeline___024root* vlSelf);
#endif  // VL_DEBUG

void VPipeline___024root___eval_triggers__act(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_triggers__act\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPipeline___024root___dump_triggers__act(vlSelf);
    }
#endif
}
