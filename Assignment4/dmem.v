module dmem(
    input clk,
    input [31:0] daddr,
    input [31:0] dwdata,
    input [3:0] we,
    output [31:0] drdata
);
    reg [7:0] m[0:127];
    initial $readmemh("dmem_ini.mem",m);

    wire [31:0] add0,add1,add2,add3;
	 
	 assign add0 = (daddr & 32'hfffffffc) + 32'h00000000;
	 assign add1 = (daddr & 32'hfffffffc) + 32'h00000001;
	 assign add2 = (daddr & 32'hfffffffc) + 32'h00000002;
	 assign add3 = (daddr & 32'hfffffffc) + 32'h00000003;
	 
	 assign drdata = {m[daddr+3],m[daddr+2],m[daddr+1],m[daddr]};
	 
    always @(posedge clk) begin
        if (we[0]==1)
            m[daddr]= dwdata[7:0];
        if (we[1]==1)
            m[daddr+1]= dwdata[15:8];
        if (we[2]==1)
            m[daddr+2]= dwdata[23:16];
        if (we[3]==1)
            m[daddr+3]= dwdata[31:24];
			
			$display("DMEM :Time %d %h %h %h",$time,{m[3],m[2],m[1],m[0]},{m[7],m[6],m[5],m[4]},{m[11],m[10],m[9],m[8]});
    end 
	 
	 

	 
endmodule
