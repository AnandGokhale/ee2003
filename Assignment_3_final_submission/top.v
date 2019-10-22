`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:40:14 10/18/2019 
// Design Name: 
// Module Name:    top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top(
	input clka
    );

	wire[35:0] VIO_CONTROL;
	wire clk, reset;
	wire [31:0] iaddr, idata;
	wire [31:0] daddr, drdata, dwdata;
	wire [3:0] we;
	wire [31:0] x31, pc;

    SingleCycleCPU dut (
        .clk(clk),
        .reset(reset),
        .iaddr(iaddr),
        .instr(idata),
        .daddr(daddr),
        .rdata(drdata),
        .wdata(dwdata),
        .we(we),
        .x31(x31),
        .PC(pc)
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
	icon ICON (
    .CONTROL0(VIO_CONTROL) // INOUT BUS [35:0]
	);
	vio VIO (
    .CONTROL(VIO_CONTROL), // INOUT BUS [35:0]
    .ASYNC_IN({iaddr,idata,daddr,drdata,dwdata,we,x31,pc}), // IN BUS [227:0]
    .ASYNC_OUT({clk,reset}) // OUT BUS [1:0]
	);
	
	




endmodule
