`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:43:45 03/22/2022 
// Design Name: 
// Module Name:    Nand 
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
module Nand( input[15:0] x, input[15:0] y, 
output[15:0] out, output[15:0] out1
    );
assign out1[15:0] = (x[15:0] & y[15:0]);	 
assign out[15:0] = ~(x[15:0] & y[15:0]);
endmodule
