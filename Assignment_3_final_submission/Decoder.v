`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:48:10 10/04/2019 
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
	input [31:0] PC,
	output reg Branch,
	output reg MemRead,
	output reg [1:0]RFSrc,
	output reg [3:0]we,
	output reg ALUSrc,
	output reg[3:0]RegWrite,
	output reg [31:0] imm,
	output reg sign
    );
	always @(instr)
	begin
		sign = instr[14];
		Branch = 0;
		MemRead= 0;
		case(instr[6:2])
			5'b01101://LUI
			begin
				RFSrc 	= 2'b00;
				we 		= 4'b0000;
				ALUSrc	= 1;
				RegWrite = 4'b1111;
				imm 		= {{instr[31:12]},{12{1'b0}}};
				$display("LUI : %h %h",imm,RegWrite);
			end
			5'b01101://AUIPC
			begin
				RFSrc 	= 2'b00;
				we 		= 4'b0000;
				ALUSrc	= 0;
				RegWrite = 4'b1111;
				imm 		= PC + {{instr[31:12]},{12{1'b0}}};
			end
			5'b11011://JAL
			begin
				RFSrc 	= 2'b01;
				we 		= 4'b0000;
				ALUSrc	= 0;
				RegWrite = 4'b1111;
				imm 		= {{12{instr[31]}},instr[19:12],instr[20],instr[30:21],{1'b0}};
			end
			5'b11001://JALR
			begin
				RFSrc 	= 2'b01;
				we 		= 4'b0000;
				ALUSrc	= 0;
				RegWrite = 4'b1111;
				imm 		= {{20{instr[31]}},instr[31:20]};
			end
			5'b11000://B 
			begin
				Branch 	= 1;
				RFSrc 	= 2'b00;
				we 		= 4'b0000;
				ALUSrc	= 0;
				RegWrite = 4'b0000;
				imm 		= {{20{instr[31]}},instr[7],instr[30:25],instr[11:8],{1'b0}};
				$display("%h",imm);
			end
			5'b00000://L
			begin
				MemRead 	= 1;
				RFSrc 	= 2'b10;
				case(instr[13:12])
				3'b00:RegWrite = 4'b0001;
				3'b01:RegWrite = 4'b0011;
				3'b10:RegWrite = 4'b1111;
				endcase
				ALUSrc	= 1;
				we = 4'b0000;
				imm 		= {{20{instr[31]}},{instr[31:20]}};
			end
			5'b01000://S
			begin
				RFSrc 	= 2'b10;
				case(instr[13:12])
				3'b00:
				begin
				we = 4'b0001;
				end
				3'b01:we = 4'b0011;
				3'b10:we = 4'b1111;
				endcase
				ALUSrc	= 1;
				RegWrite = 4'b0000;
				imm 		= {{20{instr[31]}},{instr[31:25]},{instr[11:7]}};
				$display("%h %h rs1 : %d  rs2 %d",imm,we,instr[19:15],instr[24:20]);
			end
			5'b00100://ALUI
			begin
				RFSrc 	= 2'b11;
				ALUSrc	= 1;
				RegWrite = 4'b1111;
				we			= 4'b0000;
				imm 		= {{20{instr[31]}},{instr[31:20]}};
			end
			5'b01100://ALU
			begin
				RFSrc 	= 2'b11;
				ALUSrc	= 0;
				RegWrite = 4'b1111;
				we			= 4'b0000;
				imm 		= {{20{instr[31]}},{instr[31:20]}};
			end
			
		endcase
	end
endmodule