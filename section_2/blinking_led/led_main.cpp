#include "Vblink_led.h"
#include "verilated.h"
#include <iostream>


uint64_t sim_time = 0; 

void tick(Vblink_led* top) {

    top->clk = 1;
    top->eval();
    sim_time++; 
    

    top->clk = 0;
    top->eval();
    sim_time++; 
}


int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vblink_led* top = new Vblink_led{contextp};
 

    for (int i = 0; i < 25000000 * 10; i++) {
        tick(top);
    }

    delete top;
    delete contextp;
    return 0;
}
