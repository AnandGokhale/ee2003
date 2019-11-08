`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:58:59 10/20/2019
// Design Name:   CPU
// Module Name:   /home/p/Desktop/Single_Cycle_CPU/CPU_tb.v
// Project Name:  Single_Cycle_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_tb();
    reg clk, reset;
    wire [31:0] iaddr, idata;
    wire [31:0] daddr, drdata, dwdata;
    wire [3:0] we;
	 wire [31:0] x31, y31, z31, n31;
    wire [31:0] pc;

    Pipelined_CPU dut (
        .clk(clk),
        .reset(reset),
        .iaddr(iaddr),
        .idata(idata),
        .daddr(daddr),
        .drdata(drdata),
        .dwdata(dwdata),
        .we(we),
        .x31(x31),
		  .y31(y31),
		  .z31(z31),
		  .n31(n31),
        .pc(pc)
    );
	 
	 dmem dmem(
		.clk(clk),
		.daddr(daddr),
		.dwdata(dwdata),
		.drdata(drdata),
		.we(we)
		);
	 
	 imem imem(
		.iaddr(iaddr), 
		.idata(idata)
	);
	
    always #5 clk = ~clk;
    initial begin
        clk = 0;
        reset = 1;
        #100
        reset = 0;
    end

endmodule

