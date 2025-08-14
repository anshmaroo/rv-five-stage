// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipeline.h for the primary calling header

#ifndef VERILATED_VPIPELINE___024ROOT_H_
#define VERILATED_VPIPELINE___024ROOT_H_  // guard

#include "verilated.h"


class VPipeline__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPipeline___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_reset,0,0);
        VL_OUT8(io_debugIsBranch,0,0);
        VL_OUT8(io_debugIsJump,0,0);
        VL_OUT8(io_debugBranchStallOut,0,0);
        VL_OUT8(io_debugLoadStallOut,0,0);
        CData/*0:0*/ Pipeline__DOT__IDExRegister_io_regWEn;
        CData/*0:0*/ Pipeline__DOT___GEN;
        CData/*0:0*/ Pipeline__DOT__memWbRegister_io_regfileWEnIn;
        CData/*0:0*/ Pipeline__DOT__idLogic__DOT___GEN_5;
        CData/*0:0*/ Pipeline__DOT__idLogic__DOT___GEN_8;
        CData/*0:0*/ Pipeline__DOT__idLogic__DOT___GEN_12;
        CData/*0:0*/ Pipeline__DOT__idLogic__DOT___GEN_13;
        CData/*0:0*/ Pipeline__DOT__idLogic__DOT___GEN_14;
        CData/*0:0*/ Pipeline__DOT__idLogic__DOT___GEN_15;
        CData/*0:0*/ Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_1;
        CData/*0:0*/ Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_2;
        CData/*0:0*/ Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_3;
        CData/*0:0*/ Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_4;
        CData/*0:0*/ Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_5;
        CData/*0:0*/ Pipeline__DOT__idLogic__DOT____VdfgRegularize_h9396951e_0_6;
        CData/*4:0*/ Pipeline__DOT__IDExRegister__DOT__rs1;
        CData/*4:0*/ Pipeline__DOT__IDExRegister__DOT__rs2;
        CData/*4:0*/ Pipeline__DOT__IDExRegister__DOT__rd;
        CData/*0:0*/ Pipeline__DOT__IDExRegister__DOT__regfileWEn;
        CData/*3:0*/ Pipeline__DOT__IDExRegister__DOT__aluSel;
        CData/*0:0*/ Pipeline__DOT__IDExRegister__DOT__aluSigned;
        CData/*0:0*/ Pipeline__DOT__IDExRegister__DOT__aSel;
        CData/*0:0*/ Pipeline__DOT__IDExRegister__DOT__bSel;
        CData/*0:0*/ Pipeline__DOT__IDExRegister__DOT__isBranch;
        CData/*2:0*/ Pipeline__DOT__IDExRegister__DOT__brCmpMode;
        CData/*0:0*/ Pipeline__DOT__IDExRegister__DOT__isJump;
        CData/*2:0*/ Pipeline__DOT__IDExRegister__DOT__wbSel;
        CData/*0:0*/ Pipeline__DOT__IDExRegister__DOT__csrWEn;
        CData/*0:0*/ Pipeline__DOT__IDExRegister__DOT__csrImm;
        CData/*0:0*/ Pipeline__DOT__IDExRegister__DOT__unnamedblk1__DOT___GEN;
        CData/*4:0*/ Pipeline__DOT__exMemRegister__DOT__rd;
        CData/*0:0*/ Pipeline__DOT__exMemRegister__DOT__regfileWEn;
        CData/*1:0*/ Pipeline__DOT__exMemRegister__DOT__wbSel;
        CData/*2:0*/ Pipeline__DOT__exMemRegister__DOT__memAccessLength;
        CData/*0:0*/ Pipeline__DOT__exMemRegister__DOT__memRdMode;
        CData/*0:0*/ Pipeline__DOT__exMemRegister__DOT__csrWEn;
        CData/*0:0*/ Pipeline__DOT__exMemRegister__DOT__csrImm;
        CData/*0:0*/ Pipeline__DOT__exMemRegister__DOT__unnamedblk1__DOT___GEN;
        CData/*4:0*/ Pipeline__DOT__memWbRegister__DOT__rd;
        CData/*0:0*/ Pipeline__DOT__memWbRegister__DOT__regfileWEn;
        CData/*1:0*/ Pipeline__DOT__memWbRegister__DOT__wbSel;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0;
        VL_OUT(io_pcOut,31,0);
        VL_OUT(io_debugAluResult,31,0);
        VL_OUT(io_debugRegs_0,31,0);
        VL_OUT(io_debugRegs_1,31,0);
        VL_OUT(io_debugRegs_2,31,0);
        VL_OUT(io_debugRegs_3,31,0);
        VL_OUT(io_debugRegs_4,31,0);
        VL_OUT(io_debugRegs_5,31,0);
        VL_OUT(io_debugRegs_6,31,0);
        VL_OUT(io_debugRegs_7,31,0);
        VL_OUT(io_debugRegs_8,31,0);
        VL_OUT(io_debugRegs_9,31,0);
    };
    struct {
        VL_OUT(io_debugRegs_10,31,0);
        VL_OUT(io_debugRegs_11,31,0);
        VL_OUT(io_debugRegs_12,31,0);
        VL_OUT(io_debugRegs_13,31,0);
        VL_OUT(io_debugRegs_14,31,0);
        VL_OUT(io_debugRegs_15,31,0);
        VL_OUT(io_debugRegs_16,31,0);
        VL_OUT(io_debugRegs_17,31,0);
        VL_OUT(io_debugRegs_18,31,0);
        VL_OUT(io_debugRegs_19,31,0);
        VL_OUT(io_debugRegs_20,31,0);
        VL_OUT(io_debugRegs_21,31,0);
        VL_OUT(io_debugRegs_22,31,0);
        VL_OUT(io_debugRegs_23,31,0);
        VL_OUT(io_debugRegs_24,31,0);
        VL_OUT(io_debugRegs_25,31,0);
        VL_OUT(io_debugRegs_26,31,0);
        VL_OUT(io_debugRegs_27,31,0);
        VL_OUT(io_debugRegs_28,31,0);
        VL_OUT(io_debugRegs_29,31,0);
        VL_OUT(io_debugRegs_30,31,0);
        VL_OUT(io_debugRegs_31,31,0);
        VL_OUT(io_debugCsr,31,0);
        IData/*31:0*/ Pipeline__DOT___forwardingUnit_io_rs1DataOut;
        IData/*31:0*/ Pipeline__DOT___immGen_io_out;
        IData/*31:0*/ Pipeline__DOT__writeBackResult;
        IData/*31:0*/ Pipeline__DOT__pc__DOT__pc;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_1;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_2;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_3;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_4;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_5;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_6;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_7;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_8;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_9;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_10;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_11;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_12;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_13;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_14;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_15;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_16;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_17;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_18;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_19;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_20;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_21;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_22;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_23;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_24;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_25;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_26;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_27;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_28;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_29;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_30;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_31;
        VlWide<32>/*1023:0*/ Pipeline__DOT__regfile__DOT___GEN;
        IData/*31:0*/ Pipeline__DOT__CSRFile__DOT__reg_0;
        IData/*31:0*/ Pipeline__DOT__IFIDRegister__DOT__instruction;
        IData/*31:0*/ Pipeline__DOT__IFIDRegister__DOT__pc;
        IData/*31:0*/ Pipeline__DOT__IDExRegister__DOT__pc;
        IData/*31:0*/ Pipeline__DOT__IDExRegister__DOT__rs1Data;
    };
    struct {
        IData/*31:0*/ Pipeline__DOT__IDExRegister__DOT__rs2Data;
        IData/*31:0*/ Pipeline__DOT__IDExRegister__DOT__imm;
        IData/*31:0*/ Pipeline__DOT__exMemRegister__DOT__rs1Data;
        IData/*31:0*/ Pipeline__DOT__exMemRegister__DOT__imm;
        IData/*31:0*/ Pipeline__DOT__exMemRegister__DOT__aluResult;
        IData/*31:0*/ Pipeline__DOT__memWbRegister__DOT__aluResult;
        IData/*31:0*/ Pipeline__DOT__memWbRegister__DOT__memRdData;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 4096> Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory;
        VlUnpacked<CData/*7:0*/, 4096> Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipeline__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipeline___024root(VPipeline__Syms* symsp, const char* v__name);
    ~VPipeline___024root();
    VL_UNCOPYABLE(VPipeline___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
