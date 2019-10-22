`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:32:50 10/21/2019 
// Design Name: 
// Module Name:    ID 
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
module ID(
	input clk,
	input[31:0] if_PC,
	input[31:0] if_instr,
	input[4:0]  wb_rd,
	input[3:0]  wb_we,
	input			wb_sign,
	input[31:0]	wb_indata,
	
	output reg[31:0] id_PC,
	output[31:0] id_rv1,
	output[31:0] id_rv2,
	output[31:0] id_imm,
	output		 id_Branch,
	output[1:0]	 id_RFSrc,
   output		 id_ALUSrc,
	output[3:0]	 id_we,
	output[3:0]	 id_RegWrite,
	output		 id_sign,
	output[6:0]	 id_ALUOp
	);
	 
Regfile R (
    .clk(clk), 
    .rs1(if_instr[19:15]), 
    .rs2(if_instr[24:20]), 
    .rd(wb_rd), 
    .we(wb_we), 
    .sign(wb_sign), 
    .indata(wb_indata), 
    .rv1(id_rv1), 
    .rv2(id_rv2), 
    .x31(x31)
    );
	 
Decoder D (
	 .clk(clk),
    .instr(if_instr), 
    .PC(if_PC),
	 .ALUOp(id_ALUOp),
    .Branch(id_Branch),
    .RFSrc(id_RFSrc), 
    .we(id_we), 
    .ALUSrc(id_ALUSrc), 
    .RegWrite(id_RegWrite), 
    .imm(id_imm), 
    .sign(id_sign)
    );

always@(posedge clk)
begin
	id_PC = if_PC;
end
endmodule
