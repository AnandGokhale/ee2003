`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:08:30 10/25/2019 
// Design Name: 
// Module Name:    ID 
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
module ID(
	 input [0:0] clk,
    input [31:0] instr,
    input [31:0] pc,
	 input [31:0] rv1_rf, //from rf in the main module
	 input [31:0] rv2_rf, //from rf in the main module
	
	output reg [4:0] rs1,
	output reg [4:0] rs2,
	
	 output reg[31:0] instr_propogate,
	 output reg[31:0] pc_propogate,
    output reg[10:0] alu_opcode,
    output reg[4:0]  rd,
    output reg[6:0]  opcode,
	 output reg[31:0] rv1,
	 output reg[31:0] rv2,
	 output reg[31:0] alu_in,
	 output reg[31:0] imm,
	 output reg[4:0] id_rs1,
	 output reg[4:0] id_rs2,
	 
	 // for stall
	input [0:0] valid,
	output reg[0:0] valid_propogate
    );
	 
	 //reg[31:0] imm;
	 
	 wire[10:0] walu_opcode;
    wire[4:0]  wrs1;
    wire[4:0]  wrs2;
    wire[4:0] wrd;
    wire[0:0] wALUsrc;
    wire[6:0] wopcode;
	 wire[31:0] wimm;
	 
	 Decoder d1 (
    .instr(instr), 
    .opcode(wopcode), 
    .rs1(wrs1), 
    .rs2(wrs2), 
    .rd(wrd), 
    .imm(wimm), 
    .ALUsrc(wALUsrc), 
    .alu_op(walu_opcode)
    );
	 
	 always@(*)begin
		rs1 = wrs1;
		rs2 = wrs2;
	 end
	 
	always@(posedge clk)begin
	 instr_propogate = instr;
	 pc_propogate    = pc;
    alu_opcode      = walu_opcode;
    rd              = wrd;
    opcode          = wopcode;
	 imm             = wimm;
	 rv1             = rv1_rf;
	 rv2             = rv2_rf;
	 alu_in          = ({32{wALUsrc}}&rv2_rf)|({32{~wALUsrc}}&wimm);
	 id_rs1          = wrs1;
	 id_rs2          = wrs2;
	 valid_propogate = valid;
	end
	 
	 


endmodule
