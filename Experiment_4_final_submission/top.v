`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:24:54 11/05/2019 
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
	input clka 
    );

wire clk, reset;
wire [31:0] iaddr,idata,daddr,drdata,dwdata,  x31,y31,z31,n31,pc;
wire [3:0] we;
wire [35:0] CONTROL0;

Pipelined_CPU C (
    .clk(clk), 
    .reset(reset), 
    .iaddr(iaddr), 
    .idata(idata), 
    .daddr(daddr),  
    .drdata(drdata), 
    .dwdata(dwdata), 
    .we(we), 
    .x31(x31), 
    .y31(y31), 
    .z31(z31), 
    .n31(n31), 
    .pc(pc)
    );


imem I (
    .iaddr(iaddr), 
    .idata(idata)
    );

dmem D (
    .clk(clk), 
    .daddr(daddr), 
    .dwdata(dwdata), 
    .we(we), 
    .drdata(drdata)
    );
icon YourInstanceName (
    .CONTROL0(CONTROL0) // INOUT BUS [35:0]
);

vio V(
    .CONTROL(CONTROL0), // INOUT BUS [35:0]
    .ASYNC_IN({x31,iaddr}), // IN BUS [63:0]
    .ASYNC_OUT({reset,clk}) // OUT BUS [1:0]
);


endmodule
