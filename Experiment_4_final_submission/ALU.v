`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:49:03 10/19/2019 
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
    input [31:0] num1,
    input [31:0] num2,
	 input [31:0] pc,
    input [10:0] ALU_op,
    output reg[31:0] out,
	 output reg[0:0] branch
    );

	always@(*)begin
		branch = 1'b0;
		case(ALU_op[6:0])
			7'b0110111, 7'b0010111 : out = num2; // LUI AUIPC
			7'b1101111, 7'b1100111 : out = pc + 32'h00000004; // JAL JALR
			7'b0010011, 7'b0110011 :begin // ALU ALUI
												case(ALU_op[9:7])
													3'b000 : begin
																	if(ALU_op[10]&ALU_op[5] == 1)begin
																		out = num1 - num2;
																	end
																	else begin
																		out = num1 + num2;
																	end
																end
													3'b010 : begin
																	if($signed(num1)<$signed(num2))begin
																		out = 1;
																	end
																	else begin
																		out = 0;
																	end
																end 
													3'b011 : begin
																	if(num1<num2)begin
																		out = 1;
																	end
																	else begin
																		out = 0;
																	end
																end
													3'b100 : out = num1^num2;
													3'b110 : out = num1|num2;
													3'b111 : out = num1&num2;
													3'b001 : out = num1<<num2[4:0];
													3'b101 : begin
																	if(ALU_op[10] == 0)begin
																		out = num1>>num2[4:0];
																	end
																	else begin
																		out = $signed(num1)>>>num2[4:0];
																	end
																end
												endcase
											end
			7'b0000011, 7'b0100011 : out = num1 + num2; // LOAD STORE
			7'b1100011 : case(ALU_op[9:7]) // BRANCH
								3'b000:begin
											if(num1 == num2)begin
												branch = 1'b1;
											end
										 end
								3'b001:begin
											if(num1 != num2)begin
												branch = 1'b1;
											end
										 end
								3'b100:begin
											if($signed(num1) < $signed(num2))begin
												branch = 1'b1;
											end
										 end
								3'b101:begin
											if($signed(num1) >= $signed(num2))begin
												branch = 1'b1;
											end
										 end
								3'b110:begin
											if(num1 < num2)begin
												branch = 1'b1;
											end
										 end
								3'b111:begin
											if(num1 >= num2)begin
												branch = 1'b1;
											end
										 end
							endcase
		endcase
	end

endmodule
