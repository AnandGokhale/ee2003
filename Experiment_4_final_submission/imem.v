module imem(
    input [31:0] iaddr,
    output [31:0] idata
);
    reg [31:0] imem[0:31];
    initial begin $readmemh("imem2_ini.mem",imem); end
	 
    assign idata = imem[iaddr[31:2]];

	 
endmodule
