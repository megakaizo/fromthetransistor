module baud_rate(
 input wire clk,
 input wire reset,
 input wire reset_rx,
 output reg baud_tick
);
reg [31:0] counter;

parameter integer BAUD_BEAT = 434;

always @(posedge clk) begin
 if (reset) begin
  counter <= 0;
  baud_tick <= 0;
 end else if (reset_rx) begin
  counter <= BAUD_BEAT / 2;
  baud_tick <= 0;
 end else begin
  if (counter >= (BAUD_BEAT - 1)) begin
   counter <= 0;
   baud_tick <= 1'b1;
  end else begin
   counter <= counter + 1;
   baud_tick <= 0;
  end
 end
end
endmodule
