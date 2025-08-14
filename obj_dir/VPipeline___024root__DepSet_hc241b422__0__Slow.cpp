// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipeline.h for the primary calling header

#include "VPipeline__pch.h"
#include "VPipeline___024root.h"

VL_ATTR_COLD void VPipeline___024root___eval_static(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_static\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void VPipeline___024root___eval_initial__TOP(VPipeline___024root* vlSelf);

VL_ATTR_COLD void VPipeline___024root___eval_initial(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_initial\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPipeline___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VPipeline___024root___eval_initial__TOP(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_initial__TOP\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_debugRegs_0 = 0U;
    VL_READMEM_N(true, 32, 4096, 0, std::string{"test.hex"}
                 ,  &(vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VPipeline___024root___eval_final(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_final\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline___024root___dump_triggers__stl(VPipeline___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VPipeline___024root___eval_phase__stl(VPipeline___024root* vlSelf);

VL_ATTR_COLD void VPipeline___024root___eval_settle(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_settle\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VPipeline___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("generated/Pipeline.sv", 1240, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VPipeline___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline___024root___dump_triggers__stl(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___dump_triggers__stl\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipeline___024root___stl_sequent__TOP__0(VPipeline___024root* vlSelf);

VL_ATTR_COLD void VPipeline___024root___eval_stl(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_stl\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPipeline___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VPipeline___024root___stl_sequent__TOP__0(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___stl_sequent__TOP__0\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ Pipeline__DOT___forwardingUnit_io_rs2DataOut;
    Pipeline__DOT___forwardingUnit_io_rs2DataOut = 0;
    IData/*31:0*/ Pipeline__DOT____Vcellinp__alu__io_in1;
    Pipeline__DOT____Vcellinp__alu__io_in1 = 0;
    IData/*31:0*/ Pipeline__DOT____Vcellinp__alu__io_in0;
    Pipeline__DOT____Vcellinp__alu__io_in0 = 0;
    IData/*31:0*/ Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3;
    Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3 = 0;
    CData/*0:0*/ Pipeline__DOT__branchComparator__DOT___GEN;
    Pipeline__DOT__branchComparator__DOT___GEN = 0;
    CData/*0:0*/ __VdfgRegularize_h6171c202_0_0;
    __VdfgRegularize_h6171c202_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h6171c202_0_1;
    __VdfgRegularize_h6171c202_0_1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_18;
    // Body
    vlSelfRef.io_pcOut = vlSelfRef.Pipeline__DOT__pc__DOT__pc;
    vlSelfRef.io_debugRegs_1 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_1;
    vlSelfRef.io_debugRegs_2 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_2;
    vlSelfRef.io_debugRegs_3 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_3;
    vlSelfRef.io_debugRegs_4 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_4;
    vlSelfRef.io_debugRegs_5 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_5;
    vlSelfRef.io_debugRegs_6 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_6;
    vlSelfRef.io_debugRegs_7 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_7;
    vlSelfRef.io_debugRegs_8 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_8;
    vlSelfRef.io_debugRegs_9 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_9;
    vlSelfRef.io_debugRegs_10 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_10;
    vlSelfRef.io_debugRegs_11 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_11;
    vlSelfRef.io_debugRegs_12 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_12;
    vlSelfRef.io_debugRegs_13 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_13;
    vlSelfRef.io_debugRegs_14 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_14;
    vlSelfRef.io_debugRegs_15 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_15;
    vlSelfRef.io_debugRegs_16 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_16;
    vlSelfRef.io_debugRegs_17 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_17;
    vlSelfRef.io_debugRegs_18 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_18;
    vlSelfRef.io_debugRegs_19 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_19;
    vlSelfRef.io_debugRegs_20 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_20;
    vlSelfRef.io_debugRegs_21 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_21;
    vlSelfRef.io_debugRegs_22 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_22;
    vlSelfRef.io_debugRegs_23 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_23;
    vlSelfRef.io_debugRegs_24 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_24;
    vlSelfRef.io_debugRegs_25 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_25;
    vlSelfRef.io_debugRegs_26 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_26;
    vlSelfRef.io_debugRegs_27 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_27;
    vlSelfRef.io_debugRegs_28 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_28;
    vlSelfRef.io_debugRegs_29 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_29;
    vlSelfRef.io_debugRegs_30 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_30;
    vlSelfRef.io_debugRegs_31 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_31;
    vlSelfRef.io_debugCsr = vlSelfRef.Pipeline__DOT__CSRFile__DOT__reg_0;
    vlSelfRef.io_debugIsBranch = vlSelfRef.Pipeline__DOT__IDExRegister__DOT__isBranch;
    vlSelfRef.io_debugIsJump = vlSelfRef.Pipeline__DOT__IDExRegister__DOT__isJump;
    vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_8 = 
        ((0x23U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
         | (0x63U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)));
    vlSelfRef.Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0 
        = ((vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
            [(0xfffU & ((IData)(1U) + vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult))] 
            << 8U) | vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
           [(0xfffU & vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult)]);
    vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_4 
        = ((0x63U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
           | (0x6fU == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)));
    Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3 
        = (((- (IData)((vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                        >> 0x1fU))) << 0xcU) | (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                >> 0x14U));
    vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_6 
        = ((3U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
           | (0x23U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)));
    vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_5 
        = ((0x6fU == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
           | (0x67U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)));
    vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_1 
        = ((0x13U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
           | (0x1bU == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)));
    vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_13 
        = ((0x37U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
           | (0x17U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0U] = 0U;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[1U] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_1;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_3)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_2))));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_3)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_2))) 
                   >> 0x20U));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[4U] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_4;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[5U] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_5;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[6U] 
        = (IData)((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_7)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_6))));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[7U] 
        = (IData)(((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_7)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_6))) 
                   >> 0x20U));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[8U] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_8;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[9U] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_9;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0xaU] 
        = (IData)((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_11)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_10))));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0xbU] 
        = (IData)(((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_11)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_10))) 
                   >> 0x20U));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0xcU] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_12;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0xdU] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_13;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0xeU] 
        = (IData)((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_15)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_14))));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0xfU] 
        = (IData)(((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_15)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_14))) 
                   >> 0x20U));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x10U] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_16;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x11U] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_17;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x12U] 
        = (IData)((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_19)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_18))));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x13U] 
        = (IData)(((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_19)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_18))) 
                   >> 0x20U));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x14U] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_20;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x15U] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_21;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x16U] 
        = (IData)((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_23)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_22))));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x17U] 
        = (IData)(((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_23)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_22))) 
                   >> 0x20U));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x18U] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_24;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x19U] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_25;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x1aU] 
        = (IData)((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_27)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_26))));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x1bU] 
        = (IData)(((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_27)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_26))) 
                   >> 0x20U));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x1cU] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_28;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x1dU] 
        = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_29;
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x1eU] 
        = (IData)((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_31)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_30))));
    vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[0x1fU] 
        = (IData)(((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_31)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_30))) 
                   >> 0x20U));
    __VdfgRegularize_h6171c202_0_0 = ((IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs1) 
                                      == (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__rd));
    __VdfgRegularize_h6171c202_0_1 = ((IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs2) 
                                      == (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__rd));
    __Vtemp_18[0U] = vlSelfRef.Pipeline__DOT__memWbRegister__DOT__memRdData;
    __Vtemp_18[1U] = vlSelfRef.Pipeline__DOT__memWbRegister__DOT__aluResult;
    __Vtemp_18[2U] = (IData)((4ULL | ((QData)((IData)(vlSelfRef.Pipeline__DOT__CSRFile__DOT__reg_0)) 
                                      << 0x20U)));
    __Vtemp_18[3U] = (IData)(((4ULL | ((QData)((IData)(vlSelfRef.Pipeline__DOT__CSRFile__DOT__reg_0)) 
                                       << 0x20U)) >> 0x20U));
    vlSelfRef.Pipeline__DOT__writeBackResult = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel), 5U)))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp_18[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel), 5U))))) 
                                                | (__Vtemp_18[
                                                   (3U 
                                                    & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel), 5U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel), 5U))));
    vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_12 
        = ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_4) 
           | (0x67U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)));
    vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_2 
        = ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_1) 
           | (0x33U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)));
    vlSelfRef.Pipeline__DOT___immGen_io_out = (((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
                                                | ((0x1bU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
                                                   | (3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))))
                                                ? Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                             >> 7U))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                 >> 7U)))))
                                                     : 
                                                    ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_13)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | (((0xff000U 
                                                            & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction) 
                                                           | (0x800U 
                                                              & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                 >> 9U))) 
                                                          | (0x7feU 
                                                             & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                >> 0x14U))))
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))
                                                        ? Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3
                                                        : 
                                                       ((0x73U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))
                                                         ? 
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                         >> 0x13U)))) 
                                                          << 0x19U) 
                                                         | (0x1ffffffU 
                                                            & ((0x1f00000U 
                                                                & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                   << 5U)) 
                                                               | ((0xf8000U 
                                                                   & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction) 
                                                                  | ((0x7c00U 
                                                                      & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                         >> 5U)) 
                                                                     | ((0x3e0U 
                                                                         & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                            >> 0xaU)) 
                                                                        | (0x1fU 
                                                                           & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                              >> 0xfU))))))))
                                                         : 0U)))))));
    vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_14 
        = ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_5) 
           | (IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_13));
    vlSelfRef.io_debugLoadStallOut = (((IData)(__VdfgRegularize_h6171c202_0_0) 
                                       | (IData)(__VdfgRegularize_h6171c202_0_1)) 
                                      & ((IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__regfileWEn) 
                                         & (0U == (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__wbSel))));
    vlSelfRef.Pipeline__DOT___forwardingUnit_io_rs1DataOut 
        = (((IData)(__VdfgRegularize_h6171c202_0_0) 
            & (1U == (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__wbSel)))
            ? vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult
            : ((((IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs1) 
                 == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)) 
                & (1U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel)))
                ? vlSelfRef.Pipeline__DOT__writeBackResult
                : vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs1Data));
    Pipeline__DOT___forwardingUnit_io_rs2DataOut = 
        (((IData)(__VdfgRegularize_h6171c202_0_1) & 
          (1U == (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__wbSel)))
          ? vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult
          : ((((IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs2) 
               == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)) 
              & (1U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel)))
              ? vlSelfRef.Pipeline__DOT__writeBackResult
              : vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs2Data));
    vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_3 
        = ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_2) 
           | (3U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)));
    vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_15 
        = ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_6) 
           | ((0x63U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
              | (IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_14)));
    vlSelfRef.Pipeline__DOT__memWbRegister_io_regfileWEnIn 
        = ((~ (IData)(vlSelfRef.io_debugLoadStallOut)) 
           & (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__regfileWEn));
    Pipeline__DOT____Vcellinp__alu__io_in0 = ((IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aSel)
                                               ? vlSelfRef.Pipeline__DOT__IDExRegister__DOT__pc
                                               : vlSelfRef.Pipeline__DOT___forwardingUnit_io_rs1DataOut);
    Pipeline__DOT____Vcellinp__alu__io_in1 = ((IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__bSel)
                                               ? vlSelfRef.Pipeline__DOT__IDExRegister__DOT__imm
                                               : Pipeline__DOT___forwardingUnit_io_rs2DataOut);
    Pipeline__DOT__branchComparator__DOT___GEN = ((7U 
                                                   == (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__brCmpMode)) 
                                                  & (vlSelfRef.Pipeline__DOT___forwardingUnit_io_rs1DataOut 
                                                     >= Pipeline__DOT___forwardingUnit_io_rs2DataOut));
    vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_5 = 
        ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_3) 
         | (0x23U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)));
    vlSelfRef.io_debugAluResult = ((0U == (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSel))
                                    ? ((IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSigned)
                                        ? (Pipeline__DOT____Vcellinp__alu__io_in0 
                                           - Pipeline__DOT____Vcellinp__alu__io_in1)
                                        : (Pipeline__DOT____Vcellinp__alu__io_in0 
                                           + Pipeline__DOT____Vcellinp__alu__io_in1))
                                    : ((1U == (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSel))
                                        ? (Pipeline__DOT____Vcellinp__alu__io_in0 
                                           << (0x1fU 
                                               & Pipeline__DOT____Vcellinp__alu__io_in1))
                                        : ((2U == (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSel))
                                            ? VL_LTS_III(32, Pipeline__DOT____Vcellinp__alu__io_in0, Pipeline__DOT____Vcellinp__alu__io_in1)
                                            : ((3U 
                                                == (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSel))
                                                ? (Pipeline__DOT____Vcellinp__alu__io_in0 
                                                   < Pipeline__DOT____Vcellinp__alu__io_in1)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSel))
                                                    ? 
                                                   (Pipeline__DOT____Vcellinp__alu__io_in0 
                                                    ^ Pipeline__DOT____Vcellinp__alu__io_in1)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSel))
                                                     ? 
                                                    ((IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSigned)
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, Pipeline__DOT____Vcellinp__alu__io_in0, 
                                                                    (0x1fU 
                                                                     & Pipeline__DOT____Vcellinp__alu__io_in1))
                                                      : 
                                                     (Pipeline__DOT____Vcellinp__alu__io_in0 
                                                      >> 
                                                      (0x1fU 
                                                       & Pipeline__DOT____Vcellinp__alu__io_in1)))
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSel))
                                                      ? 
                                                     (Pipeline__DOT____Vcellinp__alu__io_in0 
                                                      | Pipeline__DOT____Vcellinp__alu__io_in1)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSel))
                                                       ? 
                                                      (Pipeline__DOT____Vcellinp__alu__io_in0 
                                                       & Pipeline__DOT____Vcellinp__alu__io_in1)
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSel))
                                                        ? Pipeline__DOT____Vcellinp__alu__io_in1
                                                        : 0U)))))))));
    vlSelfRef.io_debugBranchStallOut = (((IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__isBranch) 
                                         & ((((((IData)(Pipeline__DOT__branchComparator__DOT___GEN) 
                                                << 7U) 
                                               | ((vlSelfRef.Pipeline__DOT___forwardingUnit_io_rs1DataOut 
                                                   < Pipeline__DOT___forwardingUnit_io_rs2DataOut) 
                                                  << 6U)) 
                                              | ((VL_GTES_III(32, vlSelfRef.Pipeline__DOT___forwardingUnit_io_rs1DataOut, Pipeline__DOT___forwardingUnit_io_rs2DataOut) 
                                                  << 5U) 
                                                 | (VL_LTS_III(32, vlSelfRef.Pipeline__DOT___forwardingUnit_io_rs1DataOut, Pipeline__DOT___forwardingUnit_io_rs2DataOut) 
                                                    << 4U))) 
                                             | ((0xcU 
                                                 & ((- (IData)((IData)(Pipeline__DOT__branchComparator__DOT___GEN))) 
                                                    << 2U)) 
                                                | (((vlSelfRef.Pipeline__DOT___forwardingUnit_io_rs1DataOut 
                                                     != Pipeline__DOT___forwardingUnit_io_rs2DataOut) 
                                                    << 1U) 
                                                   | (vlSelfRef.Pipeline__DOT___forwardingUnit_io_rs1DataOut 
                                                      == Pipeline__DOT___forwardingUnit_io_rs2DataOut)))) 
                                            >> (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__brCmpMode))) 
                                        | (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__isJump));
    vlSelfRef.Pipeline__DOT__IDExRegister_io_regWEn 
        = (1U & ((~ (IData)(vlSelfRef.io_debugBranchStallOut)) 
                 & (~ (IData)(vlSelfRef.io_debugLoadStallOut))));
    vlSelfRef.Pipeline__DOT___GEN = ((IData)(vlSelfRef.io_debugBranchStallOut) 
                                     | (IData)(vlSelfRef.io_debugLoadStallOut));
}

VL_ATTR_COLD void VPipeline___024root___eval_triggers__stl(VPipeline___024root* vlSelf);

VL_ATTR_COLD bool VPipeline___024root___eval_phase__stl(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_phase__stl\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VPipeline___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VPipeline___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline___024root___dump_triggers__act(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___dump_triggers__act\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline___024root___dump_triggers__nba(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___dump_triggers__nba\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipeline___024root___ctor_var_reset(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___ctor_var_reset\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_reset = VL_RAND_RESET_I(1);
    vlSelf->io_pcOut = VL_RAND_RESET_I(32);
    vlSelf->io_debugAluResult = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_0 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_1 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_2 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_3 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_4 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_5 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_6 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_7 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_8 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_9 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_10 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_11 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_12 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_13 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_14 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_15 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_16 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_17 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_18 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_19 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_20 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_21 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_22 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_23 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_24 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_25 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_26 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_27 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_28 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_29 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_30 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_31 = VL_RAND_RESET_I(32);
    vlSelf->io_debugCsr = VL_RAND_RESET_I(32);
    vlSelf->io_debugIsBranch = VL_RAND_RESET_I(1);
    vlSelf->io_debugIsJump = VL_RAND_RESET_I(1);
    vlSelf->io_debugBranchStallOut = VL_RAND_RESET_I(1);
    vlSelf->io_debugLoadStallOut = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT___forwardingUnit_io_rs1DataOut = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT___immGen_io_out = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__IDExRegister_io_regWEn = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__memWbRegister_io_regfileWEnIn = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__writeBackResult = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__pc__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_1 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_2 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_3 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_4 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_5 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_6 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_7 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_8 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_9 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_10 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_11 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_12 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_13 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_14 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_15 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_16 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_17 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_18 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_19 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_20 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_21 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_22 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_23 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_24 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_25 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_26 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_27 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_28 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_29 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_30 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_31 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->Pipeline__DOT__regfile__DOT___GEN);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->Pipeline__DOT__CSRFile__DOT__reg_0 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__idLogic__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__idLogic__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__idLogic__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__idLogic__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__idLogic__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__idLogic__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_1 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_2 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_3 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_4 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_5 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_6 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__IFIDRegister__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__IFIDRegister__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__rs1Data = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__rs2Data = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__regfileWEn = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__aluSel = VL_RAND_RESET_I(4);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__aluSigned = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__aSel = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__bSel = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__isBranch = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__brCmpMode = VL_RAND_RESET_I(3);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__isJump = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__wbSel = VL_RAND_RESET_I(3);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__csrWEn = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__csrImm = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__IDExRegister__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__exMemRegister__DOT__rs1Data = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__exMemRegister__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__exMemRegister__DOT__aluResult = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__exMemRegister__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->Pipeline__DOT__exMemRegister__DOT__regfileWEn = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__exMemRegister__DOT__wbSel = VL_RAND_RESET_I(2);
    vlSelf->Pipeline__DOT__exMemRegister__DOT__memAccessLength = VL_RAND_RESET_I(3);
    vlSelf->Pipeline__DOT__exMemRegister__DOT__memRdMode = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__exMemRegister__DOT__csrWEn = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__exMemRegister__DOT__csrImm = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__exMemRegister__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__memWbRegister__DOT__aluResult = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__memWbRegister__DOT__memRdData = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__memWbRegister__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->Pipeline__DOT__memWbRegister__DOT__regfileWEn = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__memWbRegister__DOT__wbSel = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
