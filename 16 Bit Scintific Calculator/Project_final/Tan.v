`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:01:03 04/28/2022 
// Design Name: 
// Module Name:    Tan 
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
module Tan(input[15:0] inp1, output[15:0] tan);

  wire [15:0] tan_cal;
  wire [15:0] sin_cal;
  wire [15:0] cos_cal;
  Sin Sin(.inp1(inp1), .sin(sin_cal));
  Cos Cos(.inp1(inp1), .cos(cos_cal));
  assign tan_cal = (sin_cal*10000)/cos_cal;
  assign tan = tan_cal;

endmodule
