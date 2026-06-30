// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBLINK_LED__SYMS_H_
#define VERILATED_VBLINK_LED__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vblink_led.h"

// INCLUDE MODULE CLASSES
#include "Vblink_led___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vblink_led__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vblink_led* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vblink_led___024root           TOP;

    // CONSTRUCTORS
    Vblink_led__Syms(VerilatedContext* contextp, const char* namep, Vblink_led* modelp);
    ~Vblink_led__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
