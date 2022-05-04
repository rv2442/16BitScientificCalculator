`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:36:38 05/02/2022 
// Design Name: 
// Module Name:    Main_Demo 
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
module ADD_DEMO(input[3:0] inp1 ,inp2, output[4:0] out1);
  
 assign out1 = inp1 + inp2;
  
endmodule


module SUB_DEMO(input[3:0] inp1 ,inp2, output[3:0] out1);
  
 assign out1 = inp1 - inp2;
  
endmodule


module MULT_DEMO(input[3:0] inp1 ,inp2, output[7:0] out1);
  
 assign out1 = inp1 * inp2;
  
endmodule


module DIV_DEMO(input[3:0] inp1 ,inp2, output[3:0] out1, out2_1, out2_2);
  
  assign out1 = inp1/inp2 ;
  assign out2_1 =  (((inp1%inp2)*10)/inp2) ;
  assign out2_2 =  ((((inp1%inp2)*10)%inp2)*10)/inp2 ;
  
endmodule

module Main_Demo(input[3:0] f_inp1 ,f_inp2, sel, output[7:0] f_out1, output[3:0] f_out2_1 , f_out2_2);
  
  wire [7:0] add_out1, sub_out1, mult_out1, div_out1;
  wire [3:0] div_out2_1, div_out2_2;
  reg [3:0] add_inp1, add_inp2, sub_inp1, sub_inp2, mult_inp1, mult_inp2, div_inp1 , div_inp2;
  reg [7:0] out1; 
  reg [3:0] out2_1, out2_2;
  reg a;
  
  ADD_DEMO ADD_DEMO(.inp1(add_inp1), .inp2(add_inp2), .out1(add_out1[4:0]));
  SUB_DEMO SUB_DEMO(.inp1(sub_inp1), .inp2(sub_inp2), .out1(sub_out1[3:0]));
  MULT_DEMO MULT_DEMO(.inp1(mult_inp1), .inp2(mult_inp2), .out1(mult_out1[7:0]));
  DIV_DEMO DIV_DEMO(.inp1(div_inp1), .inp2(div_inp2), .out1(div_out1[3:0]), .out2_1(div_out2_1), .out2_2(div_out2_2));
  
    always @* begin
      case (sel)
  
    1: begin
      add_inp1 = f_inp1;
      add_inp2 = f_inp2;
      out1[4:0] = add_out1[4:0];
      out1[7:5] = 0;
      out2_1 = 0;
      out2_2 = 0;
    end
    2: begin
      sub_inp1 = f_inp1;
      sub_inp2 = f_inp2;
      out1[3:0] = sub_out1[3:0];
      out1[7:4] = 0;
      out2_1 = 0;
      out2_2 = 0;
    end
    3: begin
      mult_inp1 = f_inp1;
      mult_inp2 = f_inp2;
      out1 = mult_out1;
      out2_1 = 0;
      out2_2 = 0;
    end
    4: begin
      div_inp1 = f_inp1;
      div_inp2 = f_inp2;
      out1[3:0] = div_out1[3:0];
      out1[7:4] = 0;
      out2_1 = div_out2_1;
      out2_2 = div_out2_2;
    end
    5: begin 
      out1 = 0;
      out2_1 = 0;
      out2_2 = 0;
      add_inp1 = 0;
      add_inp2 = 0;
      sub_inp1 = 0;
      sub_inp2 = 0;
      mult_inp1 = 0;
      mult_inp2 = 0;
      div_inp1 = 0;
      div_inp2 = 0;
    end
    default: a = 0;
  endcase
  end
  
  assign f_out1 = out1;
  assign f_out2_1 = out2_1;
  assign f_out2_2 = out2_2;

endmodule
