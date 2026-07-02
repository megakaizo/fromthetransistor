// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vblink_led.h for the primary calling header

#ifndef VERILATED_VBLINK_LED___024ROOT_H_
#define VERILATED_VBLINK_LED___024ROOT_H_  // guard

#include "verilated.h"


class Vblink_led__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vblink_led___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(led,0,0);
    CData/*0:0*/ blink_led__DOT__s;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ blink_led__DOT__counter;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vblink_led__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vblink_led___024root(Vblink_led__Syms* symsp, const char* namep);
    ~Vblink_led___024root();
    VL_UNCOPYABLE(Vblink_led___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
