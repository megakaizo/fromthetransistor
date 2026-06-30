module blink_led(
 input logic clk,
 output logic led
);
logic [31:0] counter;
logic s;

parameter logic [31:0] BLINK_BEAT = 10000000;

assign s = counter >= BLINK_BEAT;

always_ff @(posedge clk) begin
  led <= s ? ~led : led;
  counter <= s ? 0 : counter + 1;

  if (s) $display("LED: [%b]", !led);
 end
endmodule
