module regfile(
 input wire clk,
 input wire we3,
 input wire [4:0] ra1, ra2, wa3,
 input wire rcpsr,
 input wire rspsr,
 input  wire [31:0] wd3,
 input wire [4:0] mode,

 output reg [31:0] rd1, rd2
);

// GENERAL REGS
reg [31:0] r_g [16];

// BANKING REGS
reg [31:0] r_fiq [8:14];
reg [31:0] r_svc, r_abt, r_irq, r_und [13:14];

// STATUS REGS
reg [31:0] cpsr;

// BANKING STATUS REGS
reg [31:0] spsr_fiq, spsr_svc, spsr_abt, spsr_irq, spsr_und;

// CPU MODES
parameter reg ABT_MODE = 5'b10100;
parameter reg FIQ_MODE = 5'b10001;
parameter reg IRQ_MODE = 5'b10010;
parameter reg SVC_MODE = 5'b10011;
parameter reg SYS_MODE = 5'b10101;
parameter reg USR_MODE = 5'b10000;



endmodule
