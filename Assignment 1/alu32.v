`include "parameters.v"

module ALU32 (
    in1, in2, op, out
);
    input [`width-1:0] in1, in2;
    input [`OPWIDTH-1:0] op;
    output reg [`width-1:0] out;

    always @(in1 or in2 or op) begin
      case (op)
			6'b110000	:	out <= in1+in2;
			6'b110100	:	out <= ($signed(in1) < $signed(in2));
			6'b110101	:	out <= in1<in2;
			6'b111001	:	out <= in1^in2;
			6'b111010	:	out <= in1|in2;
			6'b111011	:	out <= in1&in2;
			6'b111100	:	out <= in1<<in2[4:0];
			6'b111110	:	out <= in1>>in2[4:0];
			6'b111111	:	out <= $signed(in1)>>>in2[4:0];
			6'b100000	:	out <= in1+in2;
			6'b100001	:	out <= in1-in2;
			6'b101100	:	out <= in1<<in2[4:0];	//SLL
			6'b100100	:	out <= ($signed(in1) < $signed(in2));	//SLT
			6'b100101	:	out <= in1<in2;//SLTU
			6'b101001	:	out <= in1^in2;
			6'b101110	:	out <= in1>>in2[4:0];//SRL
			6'b101111	:	out <= $signed(in1)>>>in2[4:0];//SRA
			6'b101010	:	out <= in1|in2;
			6'b101011	:	out <= in1&in2;
			default : out <= 9; 
		endcase
	 end
	 

endmodule

