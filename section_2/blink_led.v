module blink_led(
 input wire clk,
 input wire reset,
 output reg led
);
reg [31:0] counter;
wire s;

parameter integer BLINK_BEAT = 10000000;

assign s = counter >= BLINK_BEAT;

always @(posedge clk or posedge reset) begin
 if (reset) begin
  counter <= 0;
  led <= 0;
 end else begin
  if (s) begin
   led <= s ? ~led : led;
   counter <= 0;
   $display("LED: [%b]", !led);
  end else begin
   counter <= counter + 1;
  end
 end
end
endmodule
