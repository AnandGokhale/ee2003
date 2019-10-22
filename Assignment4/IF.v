`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:10:10 10/21/2019 
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
	input clk,
	input reset,
	input mem_spl,
	input[31:0] mem_in1,
	output reg [31:0] if_PC,
	output[31:0] if_instr
   );
	
imem I (
    .iaddr(if_PC), 
    .idata(if_instr)
    );


always@(*)
begin
	if(reset==0)
		if_PC = 0;
end

always @(posedge clk)
begin

	if(mem_spl)
		if_PC = mem_in1;
	else
		if_PC = if_PC+ 4;
end
endmodule
