module uart_main(
 input wire clk,
 input wire reset,

 input wire i_rx,
 output wire o_tx,

 input wire [7:0] tx_data,
 input wire tx_start,

 output wire rx_busy,
 output wire tx_busy,
 output wire [7:0] rx_byte
);

wire reset_baud_rx;
wire baud_tick;

baud_rate #(
 .BAUD_BEAT(434)
) my_baud_gen (
 .clk (clk),
 .reset (reset),
 .reset_rx (reset_baud_rx),
 .baud_tick (baud_tick)
);

rx_uart my_rx_uart (
 .clk (clk),
 .reset(reset),
 .rx (i_rx),
 .baud_tick (baud_tick),
 .rx_byte (rx_byte),
 .rx_busy (rx_busy),
 .reset_baud (reset_baud_rx)
);

tx_uart my_tx_uart (
 .clk (clk),
 .reset (reset),
 .baud_tick (baud_tick),
 .tx_start (tx_start),
 .tx_data (tx_data),
 .tx_busy (tx_busy),
 .tx (o_tx)
);

endmodule
