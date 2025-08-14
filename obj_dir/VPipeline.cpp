// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPipeline__pch.h"

//============================================================
// Constructors

VPipeline::VPipeline(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPipeline__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_reset{vlSymsp->TOP.io_reset}
    , io_debugIsBranch{vlSymsp->TOP.io_debugIsBranch}
    , io_debugIsJump{vlSymsp->TOP.io_debugIsJump}
    , io_debugBranchStallOut{vlSymsp->TOP.io_debugBranchStallOut}
    , io_debugLoadStallOut{vlSymsp->TOP.io_debugLoadStallOut}
    , io_pcOut{vlSymsp->TOP.io_pcOut}
    , io_debugAluResult{vlSymsp->TOP.io_debugAluResult}
    , io_debugRegs_0{vlSymsp->TOP.io_debugRegs_0}
    , io_debugRegs_1{vlSymsp->TOP.io_debugRegs_1}
    , io_debugRegs_2{vlSymsp->TOP.io_debugRegs_2}
    , io_debugRegs_3{vlSymsp->TOP.io_debugRegs_3}
    , io_debugRegs_4{vlSymsp->TOP.io_debugRegs_4}
    , io_debugRegs_5{vlSymsp->TOP.io_debugRegs_5}
    , io_debugRegs_6{vlSymsp->TOP.io_debugRegs_6}
    , io_debugRegs_7{vlSymsp->TOP.io_debugRegs_7}
    , io_debugRegs_8{vlSymsp->TOP.io_debugRegs_8}
    , io_debugRegs_9{vlSymsp->TOP.io_debugRegs_9}
    , io_debugRegs_10{vlSymsp->TOP.io_debugRegs_10}
    , io_debugRegs_11{vlSymsp->TOP.io_debugRegs_11}
    , io_debugRegs_12{vlSymsp->TOP.io_debugRegs_12}
    , io_debugRegs_13{vlSymsp->TOP.io_debugRegs_13}
    , io_debugRegs_14{vlSymsp->TOP.io_debugRegs_14}
    , io_debugRegs_15{vlSymsp->TOP.io_debugRegs_15}
    , io_debugRegs_16{vlSymsp->TOP.io_debugRegs_16}
    , io_debugRegs_17{vlSymsp->TOP.io_debugRegs_17}
    , io_debugRegs_18{vlSymsp->TOP.io_debugRegs_18}
    , io_debugRegs_19{vlSymsp->TOP.io_debugRegs_19}
    , io_debugRegs_20{vlSymsp->TOP.io_debugRegs_20}
    , io_debugRegs_21{vlSymsp->TOP.io_debugRegs_21}
    , io_debugRegs_22{vlSymsp->TOP.io_debugRegs_22}
    , io_debugRegs_23{vlSymsp->TOP.io_debugRegs_23}
    , io_debugRegs_24{vlSymsp->TOP.io_debugRegs_24}
    , io_debugRegs_25{vlSymsp->TOP.io_debugRegs_25}
    , io_debugRegs_26{vlSymsp->TOP.io_debugRegs_26}
    , io_debugRegs_27{vlSymsp->TOP.io_debugRegs_27}
    , io_debugRegs_28{vlSymsp->TOP.io_debugRegs_28}
    , io_debugRegs_29{vlSymsp->TOP.io_debugRegs_29}
    , io_debugRegs_30{vlSymsp->TOP.io_debugRegs_30}
    , io_debugRegs_31{vlSymsp->TOP.io_debugRegs_31}
    , io_debugCsr{vlSymsp->TOP.io_debugCsr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPipeline::VPipeline(const char* _vcname__)
    : VPipeline(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPipeline::~VPipeline() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPipeline___024root___eval_debug_assertions(VPipeline___024root* vlSelf);
#endif  // VL_DEBUG
void VPipeline___024root___eval_static(VPipeline___024root* vlSelf);
void VPipeline___024root___eval_initial(VPipeline___024root* vlSelf);
void VPipeline___024root___eval_settle(VPipeline___024root* vlSelf);
void VPipeline___024root___eval(VPipeline___024root* vlSelf);

void VPipeline::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPipeline::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPipeline___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VPipeline___024root___eval_static(&(vlSymsp->TOP));
        VPipeline___024root___eval_initial(&(vlSymsp->TOP));
        VPipeline___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VPipeline___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VPipeline::eventsPending() { return false; }

uint64_t VPipeline::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VPipeline::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VPipeline___024root___eval_final(VPipeline___024root* vlSelf);

VL_ATTR_COLD void VPipeline::final() {
    VPipeline___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPipeline::hierName() const { return vlSymsp->name(); }
const char* VPipeline::modelName() const { return "VPipeline"; }
unsigned VPipeline::threads() const { return 1; }
void VPipeline::prepareClone() const { contextp()->prepareClone(); }
void VPipeline::atClone() const {
    contextp()->threadPoolpOnClone();
}
