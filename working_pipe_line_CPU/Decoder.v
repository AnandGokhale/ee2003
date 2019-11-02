`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:14:24 10/19/2019 
// Design Name: 
// Module Name:    Decoder 
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
module Decoder(
    input [31:0] instr,
	 output reg[6:0] opcode, 
    output reg[4:0] rs1,
    output reg[4:0] rs2,
    output reg[4:0] rd,
    output reg[31:0] imm,
	 output reg[0:0] ALUsrc,
    output reg[10:0] alu_op // 1 3 7
    );
	
	always@(*)begin
	
		rd         = instr[11:7];
		rs1        = instr[19:15];
		rs2        = instr[24:20];
		opcode     = instr[6:0];
		alu_op     = {instr[30], instr[14:12], instr[6:0]};
		ALUsrc     = 1'b0;

		case(instr[6:0])
			7'b0110111             : imm = {instr[31:12], {12{1'b0}}};     // LUI 
			7'b0010111             : imm = {instr[31:12], {12{1'b0}}};  //  AUIPC
			7'b1101111             : imm = {{11{instr[31]}}, 
			                                    instr[31],
                         							instr[19:12],
															instr[20],
															instr[30:21],
															{1{1'b0}}}; // JAL
			7'b1100111             : imm = {{20{instr[31]}}, instr[31:20]}; // JALR
			7'b1100011             : begin  // BRANCH
												imm = { {19{instr[31]}},    
															 instr[31],
															 instr[7], 
															 instr[30:25], 
															 instr[11:8], 
															 {1{1'b0}}  };
												ALUsrc = 1'b1;
											 end
			7'b0000011, 7'b0010011 : imm = {{20{instr[31]}}, instr[31:20]}; // LOAD, ALUI
			7'b0100011             : imm = { {20{instr[31]}},  // STORE
															instr[31:25],
															instr[11:7] };
			7'b0110011             : ALUsrc = 1'b1;
			//default                : imm = 0;
		endcase
	end

endmodule
