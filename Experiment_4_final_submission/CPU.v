`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:54:15 11/03/2019 
// Design Name: 
// Module Name:    CPU 
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
module CPU(
	 input 					clk,
    input 					reset,
    output reg	[31:0] 	iaddr,  // address to instruction memory
    input 		[31:0] 	idata,   // data from instruction memory
    output reg	[31:0] 	daddr,  // address to data memory
    input 		[31:0] 	drdata,  // data read from data memory
    output reg	[31:0] 	dwdata, // data to be written to data memory
    output reg	[3:0] 	we,      // write enable signal for each byte of 32-b word
    // Additional outputs for debugging
    output reg	[31:0] 	x31,
	 output reg	[31:0] 	y31,
	 output reg	[31:0] 	z31,
	 output reg	[31:0] 	n31,
    output reg	[31:0] 	pc
    );


endmodule
