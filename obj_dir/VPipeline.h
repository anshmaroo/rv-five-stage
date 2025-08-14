// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPIPELINE_H_
#define VERILATED_VPIPELINE_H_  // guard

#include "verilated.h"

class VPipeline__Syms;
class VPipeline___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VPipeline VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VPipeline__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_reset,0,0);
    VL_OUT8(&io_debugIsBranch,0,0);
    VL_OUT8(&io_debugIsJump,0,0);
    VL_OUT8(&io_debugBranchStallOut,0,0);
    VL_OUT8(&io_debugLoadStallOut,0,0);
    VL_OUT(&io_pcOut,31,0);
    VL_OUT(&io_debugAluResult,31,0);
    VL_OUT(&io_debugRegs_0,31,0);
    VL_OUT(&io_debugRegs_1,31,0);
    VL_OUT(&io_debugRegs_2,31,0);
    VL_OUT(&io_debugRegs_3,31,0);
    VL_OUT(&io_debugRegs_4,31,0);
    VL_OUT(&io_debugRegs_5,31,0);
    VL_OUT(&io_debugRegs_6,31,0);
    VL_OUT(&io_debugRegs_7,31,0);
    VL_OUT(&io_debugRegs_8,31,0);
    VL_OUT(&io_debugRegs_9,31,0);
    VL_OUT(&io_debugRegs_10,31,0);
    VL_OUT(&io_debugRegs_11,31,0);
    VL_OUT(&io_debugRegs_12,31,0);
    VL_OUT(&io_debugRegs_13,31,0);
    VL_OUT(&io_debugRegs_14,31,0);
    VL_OUT(&io_debugRegs_15,31,0);
    VL_OUT(&io_debugRegs_16,31,0);
    VL_OUT(&io_debugRegs_17,31,0);
    VL_OUT(&io_debugRegs_18,31,0);
    VL_OUT(&io_debugRegs_19,31,0);
    VL_OUT(&io_debugRegs_20,31,0);
    VL_OUT(&io_debugRegs_21,31,0);
    VL_OUT(&io_debugRegs_22,31,0);
    VL_OUT(&io_debugRegs_23,31,0);
    VL_OUT(&io_debugRegs_24,31,0);
    VL_OUT(&io_debugRegs_25,31,0);
    VL_OUT(&io_debugRegs_26,31,0);
    VL_OUT(&io_debugRegs_27,31,0);
    VL_OUT(&io_debugRegs_28,31,0);
    VL_OUT(&io_debugRegs_29,31,0);
    VL_OUT(&io_debugRegs_30,31,0);
    VL_OUT(&io_debugRegs_31,31,0);
    VL_OUT(&io_debugCsr,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VPipeline___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VPipeline(VerilatedContext* contextp, const char* name = "TOP");
    explicit VPipeline(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VPipeline();
  private:
    VL_UNCOPYABLE(VPipeline);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
