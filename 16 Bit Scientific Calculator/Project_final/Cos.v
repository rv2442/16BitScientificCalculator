`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:57:07 04/28/2022 
// Design Name: 
// Module Name:    Cos 
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
module Cos(input[15:0] inp1, output[15:0] cos);
  wire [15:0] x;
  wire [31:0] z;
  wire [63:0] y;
  wire [31:0] i;
  wire [31:0] j;
  wire [127:0] calc;
  assign x[15:0]= inp1[15:0]*10000*(22)/(7*180);

  //cos(x)
  assign z = x**2/2/10000;
  assign y = x**4/24/10000000;
  assign i = y/100000;
  assign calc = x**6/720/10000000;
  assign j = calc/100000;
  assign cos = 10000 - z +i;
  // 1 - x^2/2! + x^4/4! - x^6/6! + ....


endmodule
