`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:40 10/22/2019 
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
	input			clk,
	
	input[31:0] id_PC,
	input[31:0] id_rv1,
	input[31:0] id_rv2,
	input[31:0] id_imm,
	input		 	id_Branch,
	input[1:0]	id_RFSrc,
   input		 	id_ALUSrc,
	input[3:0]	id_we,
	input[3:0]	id_RegWrite,
	input		 	id_sign,
	input[6:0]	id_ALUOp,
	
	output[31:0]	ex_PC,
	output[31:0]	ex_imm,
	output[31:0]	ex_rout,
	output[31:0]	ex_rv2,
	output[3:0]  	ex_reg_we,
   output[3:0]	 	ex_mem_we,
	output		 	ex_sign,
	output[2:0]  	ex_RFSrc,
	output[4:0]	 	ex_rd,
	output			ex_B    
	);

ALU A (
    .r1(id_rv1), 
    .r2(ALUIn), 
    .Op(id_ALUOp), 
    .rout(ex_rout), 
    .B(ex_B)
    );



endmodule
