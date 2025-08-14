// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipeline.h for the primary calling header

#include "VPipeline__pch.h"
#include "VPipeline___024root.h"

void VPipeline___024root___eval_act(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_act\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VPipeline___024root___nba_sequent__TOP__0(VPipeline___024root* vlSelf);

void VPipeline___024root___eval_nba(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_nba\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPipeline___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VPipeline___024root___nba_sequent__TOP__0(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___nba_sequent__TOP__0\n"); );
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
    IData/*31:0*/ __Vdly__Pipeline__DOT__pc__DOT__pc;
    __Vdly__Pipeline__DOT__pc__DOT__pc = 0;
    CData/*0:0*/ __Vdly__Pipeline__DOT__IDExRegister__DOT__csrWEn;
    __Vdly__Pipeline__DOT__IDExRegister__DOT__csrWEn = 0;
    CData/*0:0*/ __Vdly__Pipeline__DOT__exMemRegister__DOT__memRdMode;
    __Vdly__Pipeline__DOT__exMemRegister__DOT__memRdMode = 0;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    __Vdly__Pipeline__DOT__pc__DOT__pc = vlSelfRef.Pipeline__DOT__pc__DOT__pc;
    __Vdly__Pipeline__DOT__IDExRegister__DOT__csrWEn 
        = vlSelfRef.Pipeline__DOT__IDExRegister__DOT__csrWEn;
    __Vdly__Pipeline__DOT__exMemRegister__DOT__memRdMode 
        = vlSelfRef.Pipeline__DOT__exMemRegister__DOT__memRdMode;
    vlSelfRef.Pipeline__DOT__exMemRegister__DOT__regfileWEn 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ (IData)(vlSelfRef.io_debugLoadStallOut)) 
                                                   & ((IData)(vlSelfRef.io_debugLoadStallOut)
                                                       ? (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__regfileWEn)
                                                       : (IData)(vlSelfRef.Pipeline__DOT__memWbRegister_io_regfileWEnIn))));
    vlSelfRef.Pipeline__DOT__IDExRegister__DOT__isJump 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ (IData)(vlSelfRef.io_debugBranchStallOut)) 
                                                   & ((IData)(vlSelfRef.Pipeline__DOT__IDExRegister_io_regWEn)
                                                       ? 
                                                      ((~ (IData)(vlSelfRef.Pipeline__DOT___GEN)) 
                                                       & ((~ 
                                                           ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_3) 
                                                            | (IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_8))) 
                                                          & (IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_5)))
                                                       : (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__isJump))));
    __Vdly__Pipeline__DOT__IDExRegister__DOT__csrWEn 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ (IData)(vlSelfRef.io_debugBranchStallOut)) 
                                                   & ((IData)(vlSelfRef.Pipeline__DOT__IDExRegister_io_regWEn)
                                                       ? 
                                                      ((~ (IData)(vlSelfRef.Pipeline__DOT___GEN)) 
                                                       & ((~ 
                                                           ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_2) 
                                                            | (IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_15))) 
                                                          & (0x73U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))))
                                                       : (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__csrWEn))));
    vlSelfRef.Pipeline__DOT__IDExRegister__DOT__regfileWEn 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ (IData)(vlSelfRef.io_debugBranchStallOut)) 
                                                   & ((IData)(vlSelfRef.Pipeline__DOT__IDExRegister_io_regWEn)
                                                       ? 
                                                      ((~ (IData)(vlSelfRef.Pipeline__DOT___GEN)) 
                                                       & ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_3) 
                                                          | ((~ (IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_8)) 
                                                             & ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_14) 
                                                                | (0x73U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))))))
                                                       : (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__regfileWEn))));
    vlSelfRef.Pipeline__DOT__IDExRegister__DOT__isBranch 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ (IData)(vlSelfRef.io_debugBranchStallOut)) 
                                                   & ((IData)(vlSelfRef.Pipeline__DOT__IDExRegister_io_regWEn)
                                                       ? 
                                                      ((~ (IData)(vlSelfRef.Pipeline__DOT___GEN)) 
                                                       & ((~ (IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_5)) 
                                                          & (0x63U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))))
                                                       : (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__isBranch))));
    if (vlSelfRef.reset) {
        __Vdly__Pipeline__DOT__pc__DOT__pc = 0U;
        vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel = 0U;
        vlSelfRef.Pipeline__DOT__memWbRegister__DOT__aluResult = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_1 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_3 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_2 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_5 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_4 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_7 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_6 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_9 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_8 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_11 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_10 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_12 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_13 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_14 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_15 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_16 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_17 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_18 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_19 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_20 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_21 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_22 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_23 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_24 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_25 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_26 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_27 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_28 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_29 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_30 = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_31 = 0U;
        vlSelfRef.Pipeline__DOT__memWbRegister__DOT__memRdData = 0U;
        vlSelfRef.Pipeline__DOT__CSRFile__DOT__reg_0 = 0U;
        vlSelfRef.Pipeline__DOT__exMemRegister__DOT__wbSel = 0U;
        vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd = 0U;
        vlSelfRef.Pipeline__DOT__exMemRegister__DOT__rs1Data = 0U;
        vlSelfRef.Pipeline__DOT__exMemRegister__DOT__imm = 0U;
        vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult = 0U;
        vlSelfRef.Pipeline__DOT__exMemRegister__DOT__rd = 0U;
        vlSelfRef.Pipeline__DOT__exMemRegister__DOT__memAccessLength = 0U;
        __Vdly__Pipeline__DOT__exMemRegister__DOT__memRdMode = 0U;
        vlSelfRef.Pipeline__DOT__exMemRegister__DOT__csrWEn = 0U;
        vlSelfRef.Pipeline__DOT__exMemRegister__DOT__csrImm = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__pc = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs1 = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs2 = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs1Data = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs2Data = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__imm = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rd = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSel = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSigned = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aSel = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__bSel = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__brCmpMode = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__wbSel = 0U;
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__csrImm = 0U;
        vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__pc = 0U;
        vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction = 0U;
    } else {
        if (vlSelfRef.io_reset) {
            __Vdly__Pipeline__DOT__pc__DOT__pc = 0U;
        } else if (vlSelfRef.io_debugBranchStallOut) {
            __Vdly__Pipeline__DOT__pc__DOT__pc = vlSelfRef.io_debugAluResult;
        } else if ((1U & (~ (IData)(vlSelfRef.io_debugLoadStallOut)))) {
            __Vdly__Pipeline__DOT__pc__DOT__pc = ((IData)(4U) 
                                                  + vlSelfRef.Pipeline__DOT__pc__DOT__pc);
        }
        vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel 
            = vlSelfRef.Pipeline__DOT__exMemRegister__DOT__wbSel;
        vlSelfRef.Pipeline__DOT__memWbRegister__DOT__aluResult 
            = vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult;
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (1U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_1 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (3U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_3 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (2U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_2 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (5U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_5 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (4U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_4 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (7U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_7 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (6U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_6 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (9U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_9 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (8U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_8 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0xbU == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_11 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0xaU == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_10 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0xcU == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_12 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0xdU == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_13 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0xeU == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_14 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0xfU == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_15 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x10U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_16 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x11U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_17 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x12U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_18 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x13U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_19 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x14U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_20 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x15U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_21 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x16U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_22 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x17U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_23 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x18U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_24 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x19U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_25 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x1aU == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_26 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x1bU == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_27 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x1cU == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_28 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x1dU == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_29 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x1eU == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_30 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        if ((((IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd))) 
             & (0x1fU == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_31 
                = vlSelfRef.Pipeline__DOT__writeBackResult;
        }
        vlSelfRef.Pipeline__DOT__memWbRegister__DOT__memRdData 
            = ((1U == (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__memAccessLength))
                ? ((((IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__memRdMode)
                      ? (0xffffffU & (- (IData)((1U 
                                                 & (vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                                    [
                                                    (0xfffU 
                                                     & vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult)] 
                                                    >> 7U)))))
                      : 0U) << 8U) | vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                   [(0xfffU & vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult)])
                : ((2U == (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__memAccessLength))
                    ? ((((IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__memRdMode)
                          ? (0xffffU & (- (IData)((1U 
                                                   & (vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                                      [
                                                      (0xfffU 
                                                       & ((IData)(1U) 
                                                          + vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult))] 
                                                      >> 7U)))))
                          : 0U) << 0x10U) | (IData)(vlSelfRef.Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0))
                    : ((4U == (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__memAccessLength))
                        ? ((vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                            [(0xfffU & ((IData)(3U) 
                                        + vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult))] 
                            << 0x18U) | ((vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                          [(0xfffU 
                                            & ((IData)(2U) 
                                               + vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult))] 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0)))
                        : 0xdeadbeefU)));
        if (vlSelfRef.Pipeline__DOT__exMemRegister__DOT__csrWEn) {
            vlSelfRef.Pipeline__DOT__CSRFile__DOT__reg_0 
                = ((IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__csrImm)
                    ? vlSelfRef.Pipeline__DOT__exMemRegister__DOT__imm
                    : vlSelfRef.Pipeline__DOT__exMemRegister__DOT__rs1Data);
        }
        if (vlSelfRef.io_debugLoadStallOut) {
            vlSelfRef.Pipeline__DOT__exMemRegister__DOT__wbSel = 1U;
            vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd 
                = vlSelfRef.Pipeline__DOT__exMemRegister__DOT__rd;
            vlSelfRef.Pipeline__DOT__exMemRegister__DOT__unnamedblk1__DOT___GEN = 1U;
        } else {
            if ((1U & (~ (IData)(vlSelfRef.io_debugLoadStallOut)))) {
                vlSelfRef.Pipeline__DOT__exMemRegister__DOT__wbSel 
                    = ((IData)(vlSelfRef.io_debugLoadStallOut)
                        ? 0U : (3U & (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__wbSel)));
            }
            vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd 
                = vlSelfRef.Pipeline__DOT__exMemRegister__DOT__rd;
            vlSelfRef.Pipeline__DOT__exMemRegister__DOT__unnamedblk1__DOT___GEN = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__unnamedblk1__DOT___GEN)))) {
            if (vlSelfRef.io_debugLoadStallOut) {
                vlSelfRef.Pipeline__DOT__exMemRegister__DOT__rs1Data = 0U;
                vlSelfRef.Pipeline__DOT__exMemRegister__DOT__imm = 0U;
                vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult = 0U;
                vlSelfRef.Pipeline__DOT__exMemRegister__DOT__rd = 0U;
            } else {
                vlSelfRef.Pipeline__DOT__exMemRegister__DOT__rs1Data 
                    = vlSelfRef.Pipeline__DOT___forwardingUnit_io_rs1DataOut;
                vlSelfRef.Pipeline__DOT__exMemRegister__DOT__imm 
                    = vlSelfRef.Pipeline__DOT__IDExRegister__DOT__imm;
                vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult 
                    = vlSelfRef.io_debugAluResult;
                vlSelfRef.Pipeline__DOT__exMemRegister__DOT__rd 
                    = vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rd;
            }
            vlSelfRef.Pipeline__DOT__exMemRegister__DOT__memAccessLength = 0U;
            vlSelfRef.Pipeline__DOT__exMemRegister__DOT__csrWEn 
                = ((~ (IData)(vlSelfRef.io_debugLoadStallOut)) 
                   & (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__csrWEn));
            vlSelfRef.Pipeline__DOT__exMemRegister__DOT__csrImm 
                = ((~ (IData)(vlSelfRef.io_debugLoadStallOut)) 
                   & (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__csrImm));
        }
        __Vdly__Pipeline__DOT__exMemRegister__DOT__memRdMode 
            = ((IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__unnamedblk1__DOT___GEN) 
               & (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__memRdMode));
        vlSelfRef.Pipeline__DOT__IDExRegister__DOT__unnamedblk1__DOT___GEN 
            = (1U & ((IData)(vlSelfRef.io_debugBranchStallOut) 
                     | (~ (IData)(vlSelfRef.Pipeline__DOT__IDExRegister_io_regWEn))));
        if ((1U & (~ (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__unnamedblk1__DOT___GEN)))) {
            if (vlSelfRef.Pipeline__DOT___GEN) {
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__pc = 0U;
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs1 = 0U;
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs2 = 0U;
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs1Data = 0U;
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs2Data = 0U;
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__imm = 0U;
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rd = 0U;
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSel = 0U;
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__brCmpMode = 0U;
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__wbSel = 0U;
            } else {
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__pc 
                    = vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__pc;
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs1 
                    = (0x1fU & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                >> 0xfU));
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs2 
                    = (0x1fU & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                >> 0x14U));
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs1Data 
                    = (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                      (0x1fU 
                                                       & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                          >> 0xfU)), 5U)))
                         ? 0U : (vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[
                                 (((IData)(0x1fU) + 
                                   (0x3ffU & VL_SHIFTL_III(10,10,32, 
                                                           (0x1fU 
                                                            & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                               >> 0xfU)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                     >> 0xfU)), 5U))))) 
                       | (vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[
                          (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                  (0x1fU 
                                                   & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                      >> 0xfU)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                     >> 0xfU)), 5U))));
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs2Data 
                    = (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                      (0x1fU 
                                                       & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                          >> 0x14U)), 5U)))
                         ? 0U : (vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[
                                 (((IData)(0x1fU) + 
                                   (0x3ffU & VL_SHIFTL_III(10,10,32, 
                                                           (0x1fU 
                                                            & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                               >> 0x14U)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                     >> 0x14U)), 5U))))) 
                       | (vlSelfRef.Pipeline__DOT__regfile__DOT___GEN[
                          (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                  (0x1fU 
                                                   & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                      >> 0x14U)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                                     >> 0x14U)), 5U))));
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__imm 
                    = vlSelfRef.Pipeline__DOT___immGen_io_out;
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rd 
                    = (0x1fU & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                >> 7U));
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSel 
                    = ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_2)
                        ? (7U & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                 >> 0xcU)) : (((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_6) 
                                               | (IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_12))
                                               ? 0U
                                               : ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
                                                  << 3U)));
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__brCmpMode 
                    = (((0x63U != (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
                        | (IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_5))
                        ? 0U : (7U & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                      >> 0xcU)));
                vlSelfRef.Pipeline__DOT__IDExRegister__DOT__wbSel 
                    = ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_3)
                        ? 1U : ((0x23U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))
                                 ? 0U : ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_12)
                                          ? 2U : ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_13)
                                                   ? 1U
                                                   : 
                                                  ((0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))
                                                    ? 3U
                                                    : 0U)))));
            }
            vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aluSigned 
                = (1U & ((~ (IData)(vlSelfRef.Pipeline__DOT___GEN)) 
                         & ((0x13U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))
                             ? (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                >> 0x1eU) : ((0x1bU 
                                              == (0x7fU 
                                                  & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))
                                              ? (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                                                 >> 0x1eU)
                                              : (IData)(
                                                        (0x40000033U 
                                                         == 
                                                         (0x4000007fU 
                                                          & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)))))));
            vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aSel 
                = ((~ (IData)(vlSelfRef.Pipeline__DOT___GEN)) 
                   & ((~ (IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_5)) 
                      & ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_4) 
                         | ((~ ((0x67U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
                                | (0x37U == (0x7fU 
                                             & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)))) 
                            & (0x17U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))))));
            vlSelfRef.Pipeline__DOT__IDExRegister__DOT__bSel 
                = ((~ (IData)(vlSelfRef.Pipeline__DOT___GEN)) 
                   & ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_1) 
                      | ((0x33U != (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
                         & ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_15) 
                            | (0x73U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction))))));
            vlSelfRef.Pipeline__DOT__IDExRegister__DOT__csrImm 
                = (1U & ((~ (IData)(vlSelfRef.Pipeline__DOT___GEN)) 
                         & (vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                            >> 0xeU)));
        }
        if ((1U & (~ ((IData)(vlSelfRef.io_debugBranchStallOut) 
                      | (~ (IData)(vlSelfRef.Pipeline__DOT__IDExRegister_io_regWEn)))))) {
            vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__pc 
                = ((IData)(vlSelfRef.Pipeline__DOT___GEN)
                    ? 0U : vlSelfRef.Pipeline__DOT__pc__DOT__pc);
        }
        if (vlSelfRef.io_debugBranchStallOut) {
            vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction = 0x13U;
        } else if (vlSelfRef.Pipeline__DOT__IDExRegister_io_regWEn) {
            vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction 
                = ((IData)(vlSelfRef.Pipeline__DOT___GEN)
                    ? 0U : vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                   [(0xfffU & (vlSelfRef.Pipeline__DOT__pc__DOT__pc 
                               >> 2U))]);
        }
    }
    vlSelfRef.io_debugIsJump = vlSelfRef.Pipeline__DOT__IDExRegister__DOT__isJump;
    vlSelfRef.io_debugIsBranch = vlSelfRef.Pipeline__DOT__IDExRegister__DOT__isBranch;
    vlSelfRef.io_debugRegs_1 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_1;
    vlSelfRef.io_debugRegs_3 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_3;
    vlSelfRef.io_debugRegs_2 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_2;
    vlSelfRef.io_debugRegs_5 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_5;
    vlSelfRef.io_debugRegs_4 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_4;
    vlSelfRef.io_debugRegs_7 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_7;
    vlSelfRef.io_debugRegs_6 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_6;
    vlSelfRef.io_debugRegs_9 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_9;
    vlSelfRef.io_debugRegs_8 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_8;
    vlSelfRef.io_debugRegs_11 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_11;
    vlSelfRef.io_debugRegs_10 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_10;
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
    vlSelfRef.Pipeline__DOT__memWbRegister__DOT__regfileWEn 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.Pipeline__DOT__memWbRegister_io_regfileWEnIn));
    vlSelfRef.io_debugCsr = vlSelfRef.Pipeline__DOT__CSRFile__DOT__reg_0;
    __Vtemp_6[0U] = vlSelfRef.Pipeline__DOT__memWbRegister__DOT__memRdData;
    __Vtemp_6[1U] = vlSelfRef.Pipeline__DOT__memWbRegister__DOT__aluResult;
    __Vtemp_6[2U] = (IData)((4ULL | ((QData)((IData)(vlSelfRef.Pipeline__DOT__CSRFile__DOT__reg_0)) 
                                     << 0x20U)));
    __Vtemp_6[3U] = (IData)(((4ULL | ((QData)((IData)(vlSelfRef.Pipeline__DOT__CSRFile__DOT__reg_0)) 
                                      << 0x20U)) >> 0x20U));
    vlSelfRef.Pipeline__DOT__writeBackResult = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel), 5U)))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp_6[
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
                                                | (__Vtemp_6[
                                                   (3U 
                                                    & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel), 5U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel), 5U))));
    vlSelfRef.Pipeline__DOT__exMemRegister__DOT__memRdMode 
        = __Vdly__Pipeline__DOT__exMemRegister__DOT__memRdMode;
    vlSelfRef.Pipeline__DOT__IDExRegister__DOT__csrWEn 
        = __Vdly__Pipeline__DOT__IDExRegister__DOT__csrWEn;
    vlSelfRef.Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0 
        = ((vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
            [(0xfffU & ((IData)(1U) + vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult))] 
            << 8U) | vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
           [(0xfffU & vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult)]);
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
    vlSelfRef.Pipeline__DOT___forwardingUnit_io_rs1DataOut 
        = (((IData)(__VdfgRegularize_h6171c202_0_0) 
            & (1U == (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__wbSel)))
            ? vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult
            : ((((IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs1) 
                 == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)) 
                & (1U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel)))
                ? vlSelfRef.Pipeline__DOT__writeBackResult
                : vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs1Data));
    vlSelfRef.io_debugLoadStallOut = (((IData)(__VdfgRegularize_h6171c202_0_0) 
                                       | (IData)(__VdfgRegularize_h6171c202_0_1)) 
                                      & ((IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__regfileWEn) 
                                         & (0U == (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__wbSel))));
    Pipeline__DOT___forwardingUnit_io_rs2DataOut = 
        (((IData)(__VdfgRegularize_h6171c202_0_1) & 
          (1U == (IData)(vlSelfRef.Pipeline__DOT__exMemRegister__DOT__wbSel)))
          ? vlSelfRef.Pipeline__DOT__exMemRegister__DOT__aluResult
          : ((((IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs2) 
               == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__rd)) 
              & (1U == (IData)(vlSelfRef.Pipeline__DOT__memWbRegister__DOT__wbSel)))
              ? vlSelfRef.Pipeline__DOT__writeBackResult
              : vlSelfRef.Pipeline__DOT__IDExRegister__DOT__rs2Data));
    vlSelfRef.Pipeline__DOT__pc__DOT__pc = __Vdly__Pipeline__DOT__pc__DOT__pc;
    Pipeline__DOT____Vcellinp__alu__io_in0 = ((IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__aSel)
                                               ? vlSelfRef.Pipeline__DOT__IDExRegister__DOT__pc
                                               : vlSelfRef.Pipeline__DOT___forwardingUnit_io_rs1DataOut);
    vlSelfRef.Pipeline__DOT__memWbRegister_io_regfileWEnIn 
        = ((~ (IData)(vlSelfRef.io_debugLoadStallOut)) 
           & (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__regfileWEn));
    Pipeline__DOT____Vcellinp__alu__io_in1 = ((IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__bSel)
                                               ? vlSelfRef.Pipeline__DOT__IDExRegister__DOT__imm
                                               : Pipeline__DOT___forwardingUnit_io_rs2DataOut);
    Pipeline__DOT__branchComparator__DOT___GEN = ((7U 
                                                   == (IData)(vlSelfRef.Pipeline__DOT__IDExRegister__DOT__brCmpMode)) 
                                                  & (vlSelfRef.Pipeline__DOT___forwardingUnit_io_rs1DataOut 
                                                     >= Pipeline__DOT___forwardingUnit_io_rs2DataOut));
    vlSelfRef.io_pcOut = vlSelfRef.Pipeline__DOT__pc__DOT__pc;
    vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_8 = 
        ((0x23U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
         | (0x63U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)));
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
    vlSelfRef.Pipeline__DOT__IDExRegister_io_regWEn 
        = (1U & ((~ (IData)(vlSelfRef.io_debugBranchStallOut)) 
                 & (~ (IData)(vlSelfRef.io_debugLoadStallOut))));
    vlSelfRef.Pipeline__DOT___GEN = ((IData)(vlSelfRef.io_debugBranchStallOut) 
                                     | (IData)(vlSelfRef.io_debugLoadStallOut));
    vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_3 
        = ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_2) 
           | (3U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)));
    vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_15 
        = ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_6) 
           | ((0x63U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)) 
              | (IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_14)));
    vlSelfRef.Pipeline__DOT__idLogic__DOT___GEN_5 = 
        ((IData)(vlSelfRef.Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_3) 
         | (0x23U == (0x7fU & vlSelfRef.Pipeline__DOT__IFIDRegister__DOT__instruction)));
}

void VPipeline___024root___eval_triggers__act(VPipeline___024root* vlSelf);

bool VPipeline___024root___eval_phase__act(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_phase__act\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VPipeline___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VPipeline___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VPipeline___024root___eval_phase__nba(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_phase__nba\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VPipeline___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline___024root___dump_triggers__nba(VPipeline___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline___024root___dump_triggers__act(VPipeline___024root* vlSelf);
#endif  // VL_DEBUG

void VPipeline___024root___eval(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VPipeline___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("generated/Pipeline.sv", 1240, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VPipeline___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("generated/Pipeline.sv", 1240, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VPipeline___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VPipeline___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VPipeline___024root___eval_debug_assertions(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_debug_assertions\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.io_reset & 0xfeU)))) {
        Verilated::overWidthError("io_reset");}
}
#endif  // VL_DEBUG
