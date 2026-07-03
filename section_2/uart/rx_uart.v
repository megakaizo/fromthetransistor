module rx_uart(
 input wire clk,
 input wire rx,
 input wire reset,
 input wire baud_tick,
 output reg [7:0] rx,
 output reg rx_busy,
 output reg reset_baud
);

reg [7:0] rx_data;
reg [3:0] counter;

always @(posedge clk) begin
 if (reset) begin
  rx_busy <= 0;
  counter <= 0;
  rx_data <= 0;
  rx <= 0;
 end else begin
  if (!rx_busy && !tx) begin
   rx_busy <= 1;
   counter <= 0;
   reset_baud <= 1;
  end else if (rx_busy && baud_tick) begin
   reset_baud <= 0;
   if (counter == 8) begin
    rx <= rx_data;
    rx_busy <= 0;
   end else begin
    counter <= counter + 1;
    rx_data[counter] <= tx;
   end
  end else begin
   reset_baud <= 0;
  end
 end
end
endmodule
