// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipeline.h for the primary calling header

#include "VPipeline__pch.h"
#include "VPipeline__Syms.h"
#include "VPipeline___024unit.h"

void VPipeline___024unit___ctor_var_reset(VPipeline___024unit* vlSelf);

VPipeline___024unit::VPipeline___024unit(VPipeline__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPipeline___024unit___ctor_var_reset(this);
}

void VPipeline___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VPipeline___024unit::~VPipeline___024unit() {
}
