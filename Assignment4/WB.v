`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:34:45 10/21/2019 
// Design Name: 
// Module Name:    WB 
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
module WB(
	input[31:0] mem_PC,
	input[31:0] mem_imm,
	input[31:0] mem_drdata,
	input[31:0] mem_rout,
	input[2:0]  mem_RFSrc,
	input			mem_sign,
	input[4:0]  mem_rd,
	input[3:0]  mem_reg_we,
	
		
	output reg[4:0]    wb_rd,
	output reg[3:0]    wb_reg_we,
	output reg			 wb_sign,
	output reg[31:0]	 wb_indata
	);
	
	always @(*)
	begin
		wb_rd = mem_rd;
		wb_sign = mem_sign;
		wb_we = mem_reg_we;
		case(mem_RFSrc)
			2'b00:wb_indata = mem_imm;
			2'b01:wb_indata = mem_PC;
			2'b10:wb_indata = mem_drdata;
			2'b11:wb_indata = mem_rout;
		endcase
	end
endmodule
