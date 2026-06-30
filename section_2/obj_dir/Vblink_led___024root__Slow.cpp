// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblink_led.h for the primary calling header

#include "Vblink_led__pch.h"

void Vblink_led___024root___ctor_var_reset(Vblink_led___024root* vlSelf);

Vblink_led___024root::Vblink_led___024root(Vblink_led__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vblink_led___024root___ctor_var_reset(this);
}

void Vblink_led___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vblink_led___024root::~Vblink_led___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
