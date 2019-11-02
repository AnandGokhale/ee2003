`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:41:18 10/25/2019 
// Design Name: 
// Module Name:    EX 
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
module EX(
	input [0:0] clk,
   input [31:0] instr,
   input [31:0] pc,
	input [31:0] num1,
   input [31:0] num2,
	input [31:0] rv2,
	input [31:0] imm,
   input [10:0] ALU_op,
	input [4:0]  rd,
   input [6:0]  opcode,
	input [4:0] rs1,
	input [4:0] rs2,
	
	output reg [31:0] alu_out_comb,
	output reg [31:0] alu_out,
	output reg [3:0]  we,
	output reg [31:0] daddr,
	output reg [31:0] dwdata,
	output reg[31:0] instr_propogate,
	output reg[31:0] pc_propogate,
	output reg[4:0] rd_propogate,
	output reg[0:0] branch,
	output reg[31:0] offset,
	output reg[4:0] ex_rs1,
	output reg[4:0] ex_rs2,
	// for stall
	input [0:0] valid,
	output reg[0:0] valid_propogate
    );
	 
	wire [31:0] out;
	wire [0:0]  wbranch;
	 
	 ALU a1 (
    .num1(num1), 
    .num2(num2),
	 .pc(pc),
    .ALU_op(ALU_op), 
    .out(out), 
    .branch(wbranch)
    );
	
	wire [3:0]wwe;
	wire [31:0]wdwdata;
	
	we_generator w1 (
    .instr(instr), 
    .out(out[1:0]), 
    .rv2(rv2), 
    .we(wwe), 
    .dwdata(wdwdata)
    );
	
	always@(*)begin
		offset  = imm;
		branch = wbranch;
		alu_out_comb = out;
		if( instr[6:0] == 7'b1100111 )begin
			alu_out_comb = (num1 + imm)&(32'hfffffffe);
		end
	end
	
	always@(posedge clk)begin
		instr_propogate = instr;
		pc_propogate    = pc;
		daddr           = out;
		dwdata          = wdwdata;
		we              = wwe;
		alu_out         = out;
		rd_propogate    = rd;
		ex_rs1          = rs1;
		ex_rs2          = rs2;
		valid_propogate = valid;
	end
	
			
	

endmodule
