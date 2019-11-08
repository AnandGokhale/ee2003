`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:08:55 10/23/2019 
// Design Name: 
// Module Name:    IF 
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
module IF(
	
    input [31:0] pc,
	 input [31:0] idata,
	 input [0:0] clk,
	 // the reg IF/ID
	 output reg[31:0] instr,
	 output reg[31:0] pc_propogate, // since the decoder in the next block needs pc value
    
	 // for stall
	 input [0:0] valid,
	 output reg[0:0] valid_propogate
	 );
	
	/*
		the IF module is simply a register which stores the pc and instr at clock edge.
		the fetching of idata and changing pc will be done in the main module.
	*/
	 
	 always@(posedge clk)begin
		instr           = idata;
		pc_propogate    = pc;
		valid_propogate = valid;
	 end
	 
endmodule
