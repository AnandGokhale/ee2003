`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:39:41 08/16/2019 
// Design Name: 
// Module Name:    top 
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
module top(
	input clk
    );

	 wire [31:0] inreg1,inreg2,instr,out;
	 //Input-output ports controlled by VIO and ILA
	 
	 wire [35:0] ILA_CONTROL, VIO_CONTROL;
	 //Control wires used by ICON to control VIO and ILA
	 wire [5:0] op;
	 
	 DummyDecoder Dec1(
    .instr(instr),
    .op(op)
	 );
	 
	 ALU32 alu1(
    .in1(inreg1), 
	 .in2(inreg2), 
	 .op(op), 
	 .out(out)
	 );
	 
	 icon InstanceC (
    .CONTROL0(ILA_CONTROL), // INOUT BUS [35:0]
    .CONTROL1(VIO_CONTROL) // INOUT BUS [35:0]
	 );
	 
	 vio0 InstanceB (
		 .CONTROL(VIO_CONTROL), // INOUT BUS [35:0]
		 .CLK(clk), // IN
		 .ASYNC_OUT({inreg1,inreg2,instr}), // OUT BUS [95:0]
		 .SYNC_IN({out}) // IN BUS [31:0]
	 );

	ila0 InstanceA (
    .CONTROL(ILA_CONTROL), // INOUT BUS [35:0]
    .CLK(clk), // IN
    .TRIG0(inreg1), // IN BUS [31:0]
    .TRIG1(inreg2), // IN BUS [31:0]
    .TRIG2(instr) // IN BUS [31:0]
	);





endmodule
