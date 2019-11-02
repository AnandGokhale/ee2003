`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:57:48 10/27/2019 
// Design Name: 
// Module Name:    Pipelined_CPU 
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
module Pipelined_CPU(
input clk,
    input reset,
    output reg[31:0] iaddr,  // address to instruction memory
    input [31:0] idata,   // data from instruction memory
    output reg[31:0] daddr,  // address to data memory
    input [31:0] drdata,  // data read from data memory
    output reg[31:0] dwdata, // data to be written to data memory
    output reg[3:0] we,      // write enable signal for each byte of 32-b word
    // Additional outputs for debugging
    output reg[31:0] x31,
	 output reg[31:0] y31,
	 output reg[31:0] z31,
	 output reg[31:0] n31,
    output reg[31:0] pc
    );
	
	wire [31:0] if_instr;
	wire [31:0] if_pc;
	wire [0:0] stall;
	wire [0:0] if_valid;
	wire [0:0] wrong_jump; // for branch instructions
	wire [0:0] jalr; // for jalr instruction
	
	IF if_id (
    .pc(pc), 
    .idata(idata), 
    .clk(clk), 
    .instr(if_instr), 
    .pc_propogate(if_pc), 
    .valid( (~stall)&(~wrong_jump)&(~jalr) ), 
    .valid_propogate(if_valid)
    );
	 
	 Stall_signal_generator stall_gen (
    .instr2(idata), 
    .instr1(if_instr),
	 .instr1_validity(if_valid),
    .stall(stall)
    );

	
	wire [4:0] rs1;
	wire [4:0] rs2;
	wire [4:0] rd;
	wire [31:0] rv1;
	wire [31:0] rv2;
	wire [31:0] indata;
	//wire [0:0] we;
	
	wire [1:0] f_ex;
	wire [1:0] f_mem;
	wire [0:0] to_mem;
	
	// from mem block
	wire [31:0] mem_indata;
	wire [4:0] mem_rd;
	wire [0:0] mem_Reg_Write;
	
	// combinationally from mem block
	wire [31:0] reg_indata;
	wire [4:0]  reg_rd;
	wire [0:0]  reg_write;
	
	Register_file reg_file (
    .rs1(rs1),  // from ID
    .rs2(rs2),  // from ID
    .rd(reg_rd),    // from MEM
    .rv1(rv1),  // to ID
    .rv2(rv2),  // to ID
    .indata(reg_indata), // from MEM 
    .we(reg_write),    // from MEM
    .clk(clk)
    );
	
	wire [31:0] id_instr;
	wire [31:0] id_pc;
	wire [10:0] id_alu_opcode;
   wire [4:0]  id_rd;
   wire [6:0]  id_opcode;
	wire [31:0] id_rv1;
	wire [31:0] id_rv2;
	wire [31:0] id_alu_in;
	wire [0:0] id_valid;
	wire [31:0] id_imm;
	wire [4:0] id_rs1;
	wire [4:0] id_rs2;
	
	ID id_ex (
    .clk(clk), 
    .instr(if_instr), 
    .pc(if_pc), 
    .rv1_rf(rv1), 
    .rv2_rf(rv2), 
    .rs1(rs1), 
    .rs2(rs2), 
    .instr_propogate(id_instr), 
    .pc_propogate(id_pc), 
    .alu_opcode(id_alu_opcode), 
    .rd(id_rd), 
    .opcode(id_opcode), 
    .rv1(id_rv1), 
    .rv2(id_rv2), 
    .alu_in(id_alu_in),
	 .imm(id_imm),
	 .valid(if_valid&(~wrong_jump)&(~jalr)), 
    .valid_propogate(id_valid),
	 .id_rs1(id_rs1),
	 .id_rs2(id_rs2)
    );
	
	wire [31:0] ex_alu_out; 
   wire [3:0] ex_we; 
   wire [31:0] ex_daddr; 
   wire [31:0] ex_dwdata;
   wire [31:0] ex_instr; 
   wire [31:0] ex_pc; 
   wire [31:0] ex_rd;
	wire [0:0] ex_valid;
	wire [0:0] ex_branch;
	wire [31:0] ex_offset;
	wire [4:0] ex_rs1;
	wire [4:0] ex_rs2;
	
	wire [1:0] str_fwd;
	wire [31:0] ex_alu_out_comb;
	
	EX ex_mem (
    .clk(clk), 
    .instr(id_instr), 
    .pc(id_pc), 
    .num1( (ex_alu_out&{32{f_ex[1]}})|
           (mem_indata&{32{f_mem[1]}})|
			  (id_rv1&{32{(~f_ex[1]&~f_mem[1])}}) ), 
    .num2( (ex_alu_out&{32{f_ex[0]}})|
           (mem_indata&{32{f_mem[0]}})|
			  (id_alu_in&{32{(~f_ex[0]&~f_mem[0])}}) ),
	 .imm(id_imm),
    .rv2( ((id_rv2)&{32{~str_fwd[0]&~str_fwd[1]}})|((ex_alu_out)&{32{str_fwd[1]}})|((mem_indata)&{32{str_fwd[0]}})  ), 
    .ALU_op(id_alu_opcode), 
    .rd(id_rd), 
    .opcode(id_opcode),
	 .rs1(id_rs1),
	 .rs2(id_rs2),
	 .alu_out_comb(ex_alu_out_comb),
    .alu_out(ex_alu_out), 
    .we(ex_we), 
    .daddr(ex_daddr), 
    .dwdata(ex_dwdata), 
    .instr_propogate(ex_instr), 
    .pc_propogate(ex_pc), 
    .rd_propogate(ex_rd),
	 .branch(ex_branch),// is 1 if branch is taken
	 .offset(ex_offset),
	 .ex_rs1(ex_rs1),
	 .ex_rs2(ex_rs2),
	 .valid(id_valid), 
    .valid_propogate(ex_valid)
    );
	
	wire [31:0] mem_instr;
	wire [0:0] mem_valid;
	
	MEM mem_wb (
    .clk(clk), 
    .drdata(drdata), 
    .alu_out(ex_alu_out), 
    .instr(ex_instr), 
    .rd(ex_rd), 
    .instr_propogate(mem_instr), 
    .indata(mem_indata), 
    .rd_propogate(mem_rd), 
    .Reg_Write(mem_Reg_Write), 
	 .c_indata(reg_indata),
	 .c_rd(reg_rd),
	 .c_reg_write(reg_write),
    .valid(ex_valid), 
    .valid_propogate(mem_valid)
    );
	
	//assign x31 = {32{mem_Reg_Write}};
	
	forward_signal_generator fwd_gen (
    .ex_instr1(ex_instr), 
    .ex_rd(ex_rd), 
    .ex_validity(ex_valid), 
    .mem_instr1(mem_instr), 
    .mem_rd(mem_rd), 
    .mem_validity(mem_valid), 
    .instr2(id_instr), 
    .rs1(id_rs1), 
    .rs2(id_rs2),
	 .id_validity(id_valid),
    .ex_instr2(ex_instr), 
    .ex_rs1(ex_rs1), 
    .ex_rs2(ex_rs2), 
    .f_ex(f_ex), 
    .f_mem(f_mem), 
    .to_mem(to_mem),
	 .str_fwd(str_fwd)
    );
	
	 wire [31:0] next_PC;
	 
	generate_next_PC nexPC (
    .instr(idata), 
    .pc(pc), 
    .branch(ex_branch), 
    .id_instr(id_instr),
	 .alu_out(ex_alu_out_comb),
    .id_pc(id_pc),
	 .id_validity(id_valid),
	 .wrong_jump(wrong_jump),
	 .jalr(jalr),
    .next_PC(next_PC)
    );
	 
	 always@(*)begin
		daddr  = ex_daddr;
		dwdata = ex_dwdata;
		we     = ex_we&{4{ex_valid}};
		iaddr  = pc;
		x31    = ((id_rv2)&{32{~str_fwd[0]&~str_fwd[1]}})
		          |((ex_alu_out)&{32{str_fwd[1]}})
		          |((mem_indata)&{32{str_fwd[0]}}) ;
		y31    = id_rv2;
		n31    = ex_alu_out;
		z31    = mem_indata;
	end
	 
	 always@(posedge clk)begin
		if( reset == 1)begin
			pc = 0;
		end
		else if((wrong_jump == 1)||(jalr == 1'b1))begin
			// wrong_branch has more priority than stall
			pc = next_PC;
		end
		else if(stall == 1'b1)begin
			pc = pc;
		end 
		else begin
			pc = next_PC;
		end
	 end
	 
	 
	
endmodule
