`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:54:03 10/27/2019 
// Design Name: 
// Module Name:    Stall_signal_generator 
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
module Stall_signal_generator(
    input [31:0] instr2,
    input [31:0] instr1,
	 input [0:0] instr1_validity,
    output reg [0:0] stall
    );
	 
	 always@(*)begin
		stall = 1'b0;
		if( instr1[6:3] == 7'b0000 )begin // if instr1 is a load instruction
			case(instr2[6:3])
				4'o06,4'o04,4'o14 : 
								if(( instr2[19:15] == instr1[11:7] )||( instr2[24:20] == instr1[11:7] ))
								 begin
									stall = instr1_validity;
								 end
				4'o02,4'o00,4'o14 : 
								if( instr2[19:15] == instr1[11:7] )begin // ALUI
									stall = instr1_validity;
								end

			endcase
		end
	 end


endmodule
