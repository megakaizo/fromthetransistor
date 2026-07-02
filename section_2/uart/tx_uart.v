module tx_uart(
 input wire baud_tick,
 input wire clk,
 input wire reset,
 input wire [7:0] tx_data,
 output reg tx_busy,
 output reg tx
);

reg [9:0] tx_reg;

reg [3:0] counter = 0;

always @(posedge clk) begin
 if (reset) begin
  tx_busy <= 0;
  tx_reg <= 0;
  counter <= 0;
  tx <= 1;
 end else begin
  if (!tx_busy && baud_tick) begin
   tx_busy <= 1;
   tx_reg <= {1'b1, tx_data, 1'b0};
   counter <= 10;
  end else if (tx_busy && baud_tick) begin
   tx <= tx_reg[0];
   tx_reg <= {0, tx_reg[9:1]};
   counter <= counter - 1;
   if (counter == 1) begin
    tx_busy <= 0;
   end
  end
 end
end
endmodule
