`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:01:30 10/22/2019 
// Design Name: 
// Module Name:    MEM 
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
module MEM(
	input			clk,
	input[31:0]	ex_PC,
	input[31:0]	ex_imm,
	input[31:0]	ex_rout,
	input[31:0]	ex_rv2,
	input[3:0]  ex_reg_we,
   input[3:0]	ex_mem_we,
	input			ex_sign,
	input[2:0]  ex_RFSrc,
	input[4:0]	ex_rd,

	output reg [31:0] mem_PC,
	output reg [31:0] mem_imm,
	output reg [31:0] mem_drdata,
	output reg [31:0] mem_rout,
	output reg [2:0]  mem_RFSrc,
	output reg	   	mem_sign,
	output reg [4:0]  mem_rd,
	output reg [3:0]  mem_reg_we
	 );
	 
dmem DMEM (
    .clk(clk), 
    .daddr(ex_rout), 
    .dwdata(ex_rv2), 
    .we(ex_mem_we), 
    .drdata(mem_drdata)
    );
always @(posedge clk)
begin
	mem_PC = ex_PC;
	mem_imm = ex_imm;
	mem_rout = ex_rout;
	mem_RFSrc = ex_RFSrc;
	mem_sign = ex_sign;
	mem_rd = ex_rd;
	mem_reg_we = ex_reg_we;
end
endmodule
