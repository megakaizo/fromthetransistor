module rx_uart(
 input wire clk,
 input wire rx,
 input wire reset,
 input wire baud_tick,
 output reg [7:0] rx_byte,
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
  rx_byte <= 0;
 end else begin
  if (!rx_busy && !rx) begin
   rx_busy <= 1;
   counter <= 1;
   reset_baud <= 1;
  end else if (rx_busy) begin
   reset_baud <= 0;
   if (baud_tick) begin
    if (counter < 4'd10) begin
     rx_data <= {rx, rx_data[7:1]};
     counter <= counter + 1;
     //$display("RX: %b", rx);
    end else if (counter == 4'd10) begin
     rx_busy <= 0;
     rx_byte <= rx_data;
     counter <= 0;
    end
   end
  end
 end
end
endmodule


