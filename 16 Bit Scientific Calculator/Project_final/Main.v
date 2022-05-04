`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
 // Company: 
// Engineer: 
// 
// Create Date:    15:22:35 04/29/2022 
// Design Name: 
// Module Name:    Main 
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
module Main(input[15:0] inp1, inp2, input[4:0] select, output[15:0] a, b);
  reg [15:0] add_inp1, add_inp2, sub_inp1, sub_inp2, mult_inp1, mult_inp2, div_inp1, div_inp2, mod_inp1, mod_inp2, and_inp1, and_inp2, or_inp1, or_inp2, not_inp1, nand_inp1, nand_inp2, nor_inp1, nor_inp2, exor_inp1, exor_inp2, exnor_inp1, exnor_inp2, sin_inp1, cos_inp1, tan_inp1, cot_inp1, sec_inp1, cosec_inp1, log_inp1;
  wire [15:0] add_out1, sub_out1, mult_out1, div_out1, div_out2, mod_out1, and_out1, or_out1, not_out1, nand_out1, nor_out1, exor_out1, exnor_out1,  sin_out1, cos_out1, tan_out1, cot_out1, sec_out1, cosec_out1, log_out1, log_out2;
  reg [15:0] out1, out2, abcd;
  reg clear;
  
//ARITHMETIC MODULE
Add Add(.a(add_inp1), .b(add_inp2), .sum(add_out1));
Subtract Subtract(.a(sub_inp1), .b(sub_inp2), .sum(sub_out1));
Multiply Multiply(.a(mult_inp1),.b(mult_inp2), .mult(mult_out1));
Divide Divide(.a(div_inp1), .b(div_inp2), .Q(div_out1), .deci(div_out2));
Modulus Modulus(.x(mod_inp1), .y(mod_inp2), .out(mod_out1));
//LOGICAL MODULE
And And(.x(and_inp1), .y(and_inp2), .out(and_out1));
Or Or(.x(or_inp1), .y(or_inp2), .out(or_out1));
Not Not(.x(not_inp1), .out(not_out1));
Nand Nand(.x(nand_inp1), .y(nand_inp2), .out(nand_out1));
Nor Nor(.x(nor_inp1), .y(nor_inp2), .out(nor_out1));
ExOr ExOr(.x(exor_inp1), .y(exor_inp2), .out(exor_out1));
ExNor ExNor(.x(exnor_inp1), .y(exnor_inp2), .out(exnor_out1));
//TRIGONOMETRY MODULE
Sin Sin(.inp1(sin_inp1), .sin(sin_out1));
Cos Cos(.inp1(cos_inp1), .cos(cos_out1));
Tan Tan(.inp1(tan_inp1), .tan(tan_out1));
Cot Cot(.inp1(cot_inp1), .cot(cot_out1));
Sec Sec(.inp1(sec_inp1), .sec(sec_out1));
 Cosec Cosec(.inp1(cosec_inp1), .cosec(cosec_out1));
// LOGARITHMIC MODULE
Log Log(.inp1(log_inp1), .log_e(log_out1), .log_e_deci(log_out2)); 


always @* begin
  case(select)
  		5'b00000: begin 
          add_inp1 = inp1;
          add_inp2 = inp2;
          out1 = add_out1;
			 clear = 0;
        end
  		5'b00001: begin 
          sub_inp1 = inp1;
          sub_inp2 = inp2;
          out1 = sub_out1;
			 clear = 0;
        end
  		5'b00010: begin 
          mult_inp1 = inp1;
          mult_inp2 = inp2;
          out1 = mult_out1;
			 clear = 0;
        end
  		5'b00011: begin 
          div_inp1 = inp1;
          div_inp2 = inp2;
          out1 = div_out1;
          out2 = div_out2;
			 clear = 0;
        end
  		5'b00100: begin 
          mod_inp1 = inp1;
          mod_inp2 = inp2;
          out1 = mod_out1;
			 clear = 0;
        end
  		5'b00101: begin 
          and_inp1 = inp1;
          and_inp2 = inp2;
          out1 = and_out1;
			 clear = 0;
        end
  		5'b00110: begin 
          or_inp1 = inp1;
          or_inp2 = inp2;
          out1 = or_out1;
			 clear = 0;
        end 
  		5'b00111: begin 
          not_inp1 = inp1;
          out1 = not_out1;
			 clear = 0;
        end
  		5'b01000: begin 
          nand_inp1 = inp1;
          nand_inp2 = inp2;
          out1 = nand_out1;
			 clear = 0;
        end 
  		5'b01001: begin 
          nor_inp1 = inp1;
          nor_inp2 = inp2;
          out1 = nor_out1;
			 clear = 0;
        end
  		5'b01010: begin 
          exor_inp1 = inp1;
          exor_inp2 = inp2;
          out1 = exor_out1;
			 clear = 0;
        end 
  		5'b01011: begin 
          exnor_inp1 = inp1;
          exnor_inp2 = inp2;
          out1 = exnor_out1;
			 clear = 0;
        end
  		5'b01100: begin 
          sin_inp1 = inp1;
          out1 = sin_out1;
			 clear = 0;
        end 
  		5'b01101: begin 
          cos_inp1 = inp1;
          out1 = cos_out1;
			 clear = 0;
        end
  		5'b01110: begin 
          tan_inp1 = inp1;
          out1 = tan_out1;
			 clear = 0;
        end 
  		5'b01111: begin 
          cot_inp1 = inp1;
          out1 = cot_out1;
			 clear = 0;
        end
  		5'b10000: begin 
          sec_inp1 = inp1;
          out1 = sec_out1;
			 clear = 0;
        end 
  		5'b10001: begin 
          cosec_inp1 = inp1;
          out1 = cosec_out1;
			 clear = 0;
        end
        5'b10010 : begin
          log_inp1 = inp1;
          out1 = log_out1;
          out2 = log_out2;
			 clear = 0;
        end
		  5'b10011 : begin
				clear = 1;
			end
  		default :  abcd = 0;
	endcase 
end
assign a = out1;
assign b = out2;   
endmodule 