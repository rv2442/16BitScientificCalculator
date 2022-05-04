`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:16:35 04/28/2022 
// Design Name: 
// Module Name:    Cot 
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
module Cot(input[15:0] inp1, output[15:0] cot);
	
  wire [31:0] cot_cal;
  wire [15:0] sin_cal;
  wire [15:0] cos_cal;
  Sin Sin(.inp1(inp1), .sin(sin_cal));
  Cos Cos(.inp1(inp1), .cos(cos_cal));
//  Tan Tan(.inp1(inp1), .tan(tan_cal));
  assign cot_cal = (cos_cal*10000)/sin_cal;
//  assign cot_cal = 10000/tan_cal;
  assign cot = cot_cal;


endmodule
