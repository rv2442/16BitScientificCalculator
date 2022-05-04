`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:52:18 04/28/2022 
// Design Name: 
// Module Name:    Sin 
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
module Sin(input[15:0] inp1, output[15:0] sin);
  wire [15:0] x;
  wire [31:0] z1;
  wire [47:0] y1;
  wire [47:0] y2;
  assign x[15:0]= inp1[15:0]*10000*(22)/(7*180);
  //sin(X)
  assign z1[15:0] = (x**3)/6/1000000;
  assign y1[47:0] = (x**5)/120/100000;
  assign y2[47:0] = y1/100000;
  assign sin[15:0] = x - z1 + y2;
  // x- x^3/3! + x^5/5! - .......
  // x- x^3/3! + x^5/5! - .......


endmodule
