// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipeline.h for the primary calling header

#ifndef VERILATED_VPIPELINE___024UNIT_H_
#define VERILATED_VPIPELINE___024UNIT_H_  // guard

#include "verilated.h"


class VPipeline__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPipeline___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VPipeline__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipeline___024unit(VPipeline__Syms* symsp, const char* v__name);
    ~VPipeline___024unit();
    VL_UNCOPYABLE(VPipeline___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
