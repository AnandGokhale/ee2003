`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:11:31 10/28/2019 
// Design Name: 
// Module Name:    forward_signal_generator 
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
module forward_signal_generator(
    // from ex/mem block
	 input [31:0] ex_instr1,
	 //input [31:0] alu_out, // no need of this
	 input [4:0] ex_rd,
    input [0:0] ex_validity,
	 
	 // from mem/wb block
    input [31:0] mem_instr1,
	 //input [31:0] mem_out, // no need of this
	 input [4:0] mem_rd,
    input [0:0] mem_validity,
	 
	 // from id/ex block
	 input [31:0] instr2,
	 input [4:0] rs1,
	 input [4:0] rs2,
	 input [0:0] id_validity,
	 
	 // from ex/mem block
	 input [31:0] ex_instr2,
	 input [4:0] ex_rs1,
	 input [4:0] ex_rs2,
    
	 output reg [1:0] f_ex,
	 output reg [1:0] f_mem,
	 output reg [0:0] to_mem, // no need design changed
	 output reg [1:0] str_fwd
 	 );
	 
	 always@(*)begin
	 f_ex    = 2'b00;
	 f_mem   = 2'b00;
	 to_mem  = 1'b0;
	 str_fwd = 2'b00;
	 
		case(ex_validity)
			1'b1 : case( ex_instr1[6:0] ) 
						7'b0110011,
						7'b0010011,
						7'b0110111,
						7'b0010111,
						7'b1101111,
						7'b1100111 : case( instr2[6:0] )// 1 : ALU, ALUI, JAL, JALR, AUIPC, LUI
											7'b0110011,
											7'b1100011	: begin  // 2 : ALU, BRANCH
																if( rs1 == ex_rd )begin
																	f_ex[1] = 1'b1;
																end
																if( rs2 == ex_rd )begin
																	f_ex[0] = 1'b1;
																end
															 end
											7'b0010011,
											7'b0000011	: begin  // 2 : ALUI, LD
																if( rs1 == ex_rd )begin
																	f_ex[1] = 1'b1;
																end
															 end
											7'b0100011 : begin // STORE
																if( rs1 == ex_rd )begin
																	f_ex[1] = 1'b1;
																end
																if( rs2 == ex_rd )begin
																	str_fwd[1] = 1'b1;
																end
															 end
											7'b1100111 : begin // JALR
																if( rs1 == ex_rd )begin
																	f_ex[1] = 1'b1;
																end
															 end
										 endcase
					 endcase
		endcase
		
		case(mem_validity)
			1'b1 : case( mem_instr1[6:0] ) 
						7'b0110011,
						7'b0010011,
						7'b0110111,
						7'b0010111,
						7'b1101111,
						7'b1100111 : case( instr2[6:0] )// 1 : ALU, ALUI, JAL, JALR, AUIPC, LUI
											7'b0110011,
											7'b1100011	: begin  // 2 : ALU, STR, BRANCH
																if( rs1 == mem_rd )begin
																	f_mem[1] = (1'b1)^f_ex[1];
																end
																if( rs2 == mem_rd )begin
																	f_mem[0] = (1'b1)^f_ex[0];
																end
															 end
											7'b0010011,
											7'b0000011	: begin  // 2 : ALUI, LD
																if( rs1 == mem_rd )begin
																	f_mem[1] = (1'b1)^f_ex[1];
																end
															 end
											7'b0100011 : begin // STORE
																if( rs1 == mem_rd )begin
																	f_mem[1] = (1'b1)^f_ex[1];
																end
																if( rs2 == mem_rd )begin
																	str_fwd[0] = (1'b1)^str_fwd[1];
																end
															 end
											7'b1100111	: begin  // JALR
																if( rs1 == mem_rd )begin
																	f_mem[1] = (1'b1)^f_ex[1];
																end
															 end
										 endcase
					   7'b0000011 : begin // 1 : LD
										 case(instr2[6:0])  
											7'b0110011,
											7'b1100011 : begin // 2 : ALU, BRANCH
																if( rs1 == mem_rd )begin
																	f_mem[1] = 1'b1;
																end
																if( rs2 == mem_rd )begin
																	f_mem[0] = 1'b1;
																end
															 end
											7'b0010011 : begin // 2: ALUI 
																if( rs1 == mem_rd )begin
																	f_mem[1] = 1'b1;
																end
															 end
											7'b0100011 : begin // 2: STR
																if( rs1 == mem_rd )begin
																	f_mem[1] = 1'b1;
																end
																if( rs2 == mem_rd )begin
																	str_fwd[0] = (1'b1)^str_fwd[1];
																end
															 end
											7'b0000011 : begin // 2: LOAD
																if( rs1 == mem_rd)begin
																	f_mem[1] = 1'b1;
																end
															 end
											7'b1100111 : begin // 2: JALR
																if( rs1 == mem_rd)begin
																	f_mem[1] = 1'b1;
																end
															 end
										 endcase
										 
										 /*
										 case( ex_instr2[6:0] ) // for mem/wb to mem
											7'b0100011 : begin
																if(( ex_rs1 == mem_rd )&&( ex_rs2 != mem_rd))begin
																	to_mem = 1'b1;
																end
															 end
										 endcase
								removed because of design change
										 */
										 end
					 endcase
		endcase
		
	 end
	 


endmodule
