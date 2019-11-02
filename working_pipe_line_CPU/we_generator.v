`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:25:41 10/25/2019 
// Design Name: 
// Module Name:    we_generator 
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
module we_generator(
    input [31:0] instr,
	 input [1:0] out,
	 input [31:0] rv2,
    output reg[3:0] we,
    output reg[31:0] dwdata
    );
	 
	 always@(*)begin
		dwdata = rv2;
		we     = 4'b0000;
		case(instr[6:0])
			7'b0100011 : begin // we for STORE
								case(instr[14:12])
								3'b000 : begin
											we = {out[1]&out[0], out[1]&~out[0],
								               ~out[1]&out[0], ~out[1]&~out[0] };
											dwdata = {rv2[7:0], rv2[7:0], rv2[7:0], rv2[7:0]};
											end
								3'b001 :	begin
											we = {out[1], out[1], ~out[1], ~out[1]};
											dwdata = {rv2[15:0], rv2[15:0]};
											end
								3'b010 : we = 4'b1111;
							   endcase
							 end
		endcase
	end


endmodule
