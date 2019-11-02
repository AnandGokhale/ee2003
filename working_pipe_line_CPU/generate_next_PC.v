`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:43:06 10/27/2019 
// Design Name: 
// Module Name:    generate_next_PC 
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
module generate_next_PC(
    input [31:0] instr,
    input [31:0] pc,
    input [0:0] branch,
    input [31:0] id_instr,
	 input [31:0] alu_out,
	 input [31:0] id_pc,
	 input [0:0] id_validity,
	 output reg[0:0] wrong_jump,
	 output reg[0:0] jalr,
    output reg[31:0] next_PC
    );
	 
	 always@(*)begin
		wrong_jump = 1'b0;
		jalr       = 1'b0;
		if(( id_instr[6:0] == 7'b1100011 )&&( branch == 1'b0 )&&(id_validity == 1'b1))begin
			next_PC    = id_pc + 32'h00000004; // branch should'nt have been taken
			wrong_jump = 1'b1;
		end
		else if(( id_instr[6:0] == 7'b1100111 )&&(id_validity == 1'b1))begin
			next_PC = alu_out;
			jalr    = 1'b1;
		end
		else begin
			next_PC = pc + 4;
			case(instr[6:0])
				7'b1101111 : next_PC = pc +     // JAL
															{{11{instr[31]}}, 
			                                    instr[31],
                         							instr[19:12],
															instr[20],
															instr[30:21],
															{1{1'b0}}};
				7'b1100111 : next_PC = pc + 32'h00000004; // JALR             
				7'b1100011 : next_PC = pc + { {19{instr[31]}},   // BRANCH 
															 instr[31],   // branch is taken by 
															 instr[7],    // default
															 instr[30:25], 
															 instr[11:8], 
															 {1{1'b0}}  };
			endcase
		end
	 end

endmodule
