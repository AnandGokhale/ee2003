`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:16:19 10/04/2019 
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
module SingleCycleCPU (
	input 				clk,
	input 				reset,
	output	reg [31:0]	iaddr, // instruction address
	input 	[31:0] 	instr, // return from IMEM
	output   [31:0] 	daddr, // data address
	input 	[31:0] 	rdata, // read data from DMEM
	output   [31:0] 	wdata, // data to write to DMEM
	output 	[3:0]		we, // control signal for writing - can select individual bytes
	output	reg [31:0]	PC,
	output	[31:0]	x31
);
	wire 	[3:0]  	regwe;
	wire	[1:0]		RFSrc;
	wire 	[31:0] 	imm,rv1,rv2,rout;
	wire 				sign,Branch,MemRead,ALUSrc,B;
	reg 	[31:0]	RFin,ALUIn;
	reg 	[4:0]		raddr1,raddr2,raddrd;
	
	Decoder D (
		.instr(instr),
		.PC(PC),
		.Branch(Branch), 
		.MemRead(MemRead), 
		.RFSrc(RFSrc), 
		.we(we), 
		.ALUSrc(ALUSrc), 
		.RegWrite(regwe), 
		.imm(imm), 
		.sign(sign)
	);

	Regfile R (
		.clk(clk),
		.rs1(instr[19:15]), 
		.rs2(instr[24:20]), 
		.rd(instr[11:7]), 
		.we(regwe),
		.sign(sign),
		.indata(RFin), 
		.rv1(rv1), 
		.rv2(rv2),
		.x31(x31)
	);
	
	ALU A (
	.r1(rv1),
	.r2(ALUIn),
	.Op({instr[30],instr[14:12],instr[6:4]}),
	.rout(rout),
	.B(B)
    );
	 
	always@(ALUSrc or rv2 or imm)
	begin
	 	case(ALUSrc)
			1'b0:ALUIn = rv2; 
			1'b1:ALUIn = imm;
		endcase
	end
	/*
	always@(instr)
	begin
		daddr = rout;
	end*/
	
	assign daddr = rout;
	assign wdata = rv2;
	//assign x31 = rv1;
	//PC Updates
	always @(*)
	begin
		case(RFSrc)
			2'b00:RFin = imm;
			2'b01:RFin = PC;
			2'b10:RFin = rdata;
			2'b11:RFin = rout;
		endcase
	end
	always @(posedge clk)
	begin
		//daddr = rout;
		
		//$display("%h %h %h",rv1,ALUIn,rout,rv2);
		if(reset == 1)
			PC = 0;
		else if(Branch&B)
		begin
			PC = iaddr + imm;
			iaddr = PC;
			PC = PC + 4;
		end
		else if(instr[6:2] == 5'b11011)
		begin
			//$display("%d %d %d",PC,$signed(imm),iaddr);
			PC = iaddr + imm;
			iaddr = PC;
			PC = PC + 4;
			//$display("%d %d %d",PC,$signed(imm),iaddr);
		end
		else if(instr[6:2] == 5'b11001)
		begin
			$display("JALR %d %d %d %d",PC,$signed(rv1),$signed(imm),iaddr);
			
			iaddr = (rv1 + imm)&({32'hfffffffe});
			PC = iaddr + 4;
			//$display("%d %d %d",PC,$signed(imm + rv1),iaddr);
		end
		else
		begin
			iaddr = PC;
			PC = PC + 4;
		end
	end

endmodule
