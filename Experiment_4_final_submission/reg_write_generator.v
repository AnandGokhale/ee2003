`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:16 10/25/2019 
// Design Name: 
// Module Name:    reg_write_generator 
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
module reg_write_generator(
    input [31:0] drdata,
	 input [31:0] alu_out,
	 input [31:0] instr,
		
	 output reg[31:0] indata,
	 output reg[0:0] Reg_Write
	 );
	
	always@(*)begin
		indata = alu_out;
		Reg_Write = 1'b0;
		case(instr[6:0])
			7'b0000011 : 	begin
								Reg_Write = 1'b1;
								case(instr[14:12]) // load
									3'b000 : begin
													case(alu_out[1:0])
														2'b00 : indata = {{24{drdata[7]}},  drdata[7:0]};
														2'b01 : indata = {{24{drdata[15]}}, drdata[15:8]};
														2'b10 : indata = {{24{drdata[23]}}, drdata[23:16]};
														2'b11 : indata = {{24{drdata[31]}}, drdata[31:24]};
													endcase
		                               
												end
									3'b001 : begin
													case(alu_out[1])
														1'b0 : indata = {{12{drdata[15]}}, drdata[15:0]};
														1'b1 : indata = {{12{drdata[31]}}, drdata[31:16]};
													endcase
												end
									3'b010 : begin
													indata = drdata;
												end
									3'b100 : begin
													case(alu_out[1:0])
														2'b00 : indata = {{24{1'b0}}, drdata[7:0]};
														2'b01 : indata = {{24{1'b0}}, drdata[15:8]};
														2'b10 : indata = {{24{1'b0}}, drdata[23:16]};
														2'b11 : indata = {{24{1'b0}}, drdata[31:24]};
													endcase
												end
									3'b101 : begin
													case(alu_out[1])
														1'b0 : indata = {{12{1'b0}}, drdata[15:0]};
														1'b1 : indata = {{12{1'b0}}, drdata[31:16]};
													endcase
												end			
								endcase
								end
			7'b0010011, 7'b0110011,
			7'b0110111, 7'b0010111,
			7'b1101111, 7'b1100111 : Reg_Write = 1'b1;  // ALUI ALU
		endcase
	end
	

endmodule
