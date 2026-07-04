#include "Vuart_main_tb.h"
#include <iostream>

void tx_send_char(Vuart_main_tb* top, char ch) {
    top->tx_data = (uint8_t)ch; 
    top->tx_start = 1;          
    top->clk = 1; top->eval(); top->clk = 0; top->eval(); 
    top->tx_start = 0;

    for (int t = 0; t < 6000; t++) {
        top->clk = 1; top->eval();
        top->clk = 0; top->eval();
    }

    std::cout << "Received by RX: " << (char)top->rx_byte << "\n" << std::endl; 
}

int main(int argc, char** argv) {
    Vuart_main_tb* top = new Vuart_main_tb;
    
    top->clk = 0; top->reset = 1; top->tx_start = 0;
    for (int i = 0; i < 10; i++) { top->clk = !top->clk; top->eval(); }
    top->reset = 0;
    for (int i = 0; i < 200; i++) { top->clk = !top->clk; top->eval(); }

    for (int step = 0; step < 20; step++) {
        char ch; 
        std::cout << "[" << step + 1 << "/20] Enter char: "; 
        std::cin >> ch;
        
        tx_send_char(top, ch);
    }
    
    delete top;
    return 0;
}
