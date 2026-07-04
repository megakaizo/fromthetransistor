module uart_main_tb(
 input wire clk,
 input wire reset,

 output wire o_tx,

 input wire [7:0] tx_data,
 input wire tx_start,

 output wire rx_busy,
 output wire tx_busy,
 output wire [7:0] rx_byte
);

uart_main uart_main (
 .clk (clk),
 .reset (reset),
 .i_rx (o_tx),
 .o_tx (o_tx),

 .tx_data (tx_data),
 .tx_start (tx_start),

 .rx_busy (rx_busy),
 .tx_busy (tx_busy),
 .rx_byte (rx_byte)
);

endmodule
