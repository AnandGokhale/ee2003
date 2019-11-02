`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:46:46 10/20/2019 
// Design Name: 
// Module Name:    Register_file 
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
module Register_file(
    input [4:0] rs1,
    input [4:0] rs2,
    input [4:0] rd,
    output[31:0] rv1,
    output[31:0] rv2,
    input [31:0] indata,
    input [0:0] we,
	 input [0:0] clk
    );
	
	reg [31:0] reg_file [31:0];
	integer i;
	initial begin
		for(i=0;i<32;i=i+1)begin
			reg_file[i] = 0;
		end
	end
	
	//asynchronus read
	assign rv1 = reg_file[rs1];
	assign rv2 = reg_file[rs2];
	
	// synchronus write
	always@(posedge clk)begin
		if((rd!=0)&&(we==1))begin
			reg_file[rd] = indata;
		end
	end
	
	// asynchronus read
	//always@(*)begin
		
	//end
	
endmodule
