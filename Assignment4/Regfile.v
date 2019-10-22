`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:19:35 10/04/2019 
// Design Name: 
// Module Name:    Regfile 
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
module Regfile(
	input clk,
	input [4:0]	rs1,
	input	[4:0]	rs2,
	input	[4:0]	rd,
	input [3:0] we,
	input 		sign,
	input [31:0]indata,
	output reg[31:0] rv1,
	output reg[31:0] rv2,
	output reg[31:0] x31
    );
	 reg [31:0] regfile[0:31];
	 integer i;
	 initial
	 begin
		 i =0;
		 while(i<32)
			 begin
				regfile[i] = 0;
				i=i+1;
			 end
	 end
	 
	 always@(posedge clk)
	 begin
	 rv1 = regfile[rs1];
	 rv2 = regfile[rs2];
	 x31 = regfile[31];
	 end
	 
	 always@(posedge clk)
	 begin
		if(rd!=0)
		begin
			case(we)
			4'b0001:
			begin
				case(sign)
				1'b1:regfile[rd] = {{24{1'b0}},indata[7:0]};
				1'b0:regfile[rd] = {{24{indata[7]}},indata[7:0]};
				endcase
			end
			4'b0011:
			begin
				case(sign)
				1'b1:regfile[rd] = {{16{1'b0}},indata[15:0]};
				1'b0:regfile[rd] = {{16{indata[15]}},indata[15:0]};
				endcase
			end
			4'b1111:
				regfile[rd] =  indata;
			default:
				regfile[rd] = regfile[rd];
			endcase
			$display("Time : %d %h %h %h %h %h",$time,regfile[1],regfile[2],regfile[3],regfile[4],regfile[5]);
		end
		else
		begin
			regfile[rd] = 0;
		end
	 end

endmodule