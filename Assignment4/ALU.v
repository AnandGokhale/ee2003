`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:57:31 10/04/2019 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	input [31:0] r1,
	input [31:0] r2,
	input [6:0] Op,
	output reg[31:0] rout,
	output reg B
    );
	 always @(*)
	 begin
	 case(Op[5:0])
		6'o00,6'o10,6'o20,6'o40,6'o50:rout = r1 + r2;
		6'o02,6'o12,6'o22:rout = r1+r2;
		6'o01:rout = r1+r2;
		6'o21,6'o23:rout = ($signed(r1) < $signed(r2));
		6'o31,6'o33:rout = r1<r2;
		6'o41,6'o43:rout = r1^r2;
		6'o61,6'o63:rout = r1|r2;
		6'o71,6'o73:rout = r1&r2;
		6'o11,6'o13:
		begin
		$display("r1 : %h r2 : %h",r1,r2[4:0]);
		rout = r1<<r2[4:0];
		end
		6'o51:
		begin
		if(Op[6])
			rout = r1>>r2[4:0];
		else
			rout = $signed(r1)>>>r2[4:0];
		end
		6'o03:
		begin
		if(Op[6])
			rout = r1 - r2;
		else
			rout = r1 + r2;
		end
		default : rout = 0;
	endcase
	
	case(Op[5:3])
		3'o0:B = (r1==r2);
		3'o1:B = (r1!=r2);
		3'o4:
		begin
		$display($signed(r1),$signed(r2));
		B = ($signed(r1)<$signed(r2));
		end
		3'o5:B = ($signed(r1)>=$signed(r2));
		3'o6:B = (r1<r2);
		3'o7:B = (r1>=r2);
		default:B = 0;
	endcase
	
	//$display("Time : %d, r1 = %h, r2 = %h, rout = %h, B = %b, Op = %o",$time,r1,r2,rout,B,Op);
	end
endmodule