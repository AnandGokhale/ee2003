`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:40:43 10/25/2019 
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
	 input [0:0] clk,
	 /*
    input [31:0] daddr,
    input [31:0] dwdata,
    input [3:0] we,
    */
	 input [31:0] drdata,
	 input [31:0] alu_out,
    input [31:0] instr,
	 input [4:0] rd,
	 
	 output reg[31:0]instr_propogate,
	 output reg[31:0]indata,
	 output reg[4:0]rd_propogate,
	 output reg[0:0]Reg_Write,
	 
	 // for sending combinationally to register_file
	 output reg[31:0] c_indata,
	 output reg[4:0]  c_rd,
	 output reg[0:0]  c_reg_write,
	 
	 // for stall
	input [0:0] valid,
	output reg[0:0] valid_propogate
    );
	/*
		interaction with dmem is done through the main module.
	*/
	
	/*
	dmem dmem1(
    .clk(clk), 
    .daddr(daddr), 
    .dwdata(dwdata), 
    .we(we), 
    .drdata(wdrdata)
    );
	*/
	
	wire [31:0] windata;
	wire [0:0] wReg_Write;
	
	reg_write_generator reg_gene (
    .drdata(drdata), 
    .alu_out(alu_out), 
    .instr(instr), 
    .indata(windata), 
    .Reg_Write(wReg_Write)
    );
	
	always@(*)begin
		c_indata    = windata;
		c_rd        = rd;
		c_reg_write = wReg_Write&valid;
	end
	
	always@(posedge clk)begin
		instr_propogate = instr;
		indata          = windata ;
		Reg_Write       = wReg_Write&valid;
		rd_propogate    = rd;
		valid_propogate = valid;
	end
	

endmodule
