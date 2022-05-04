`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:44:03 03/22/2022 
// Design Name: 
// Module Name:    Nor 
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
module Nor(input[15:0] x, input[15:0] y, 
output[15:0] out, output[15:0] out1
    );
assign out1[15:0] = (x[15:0] | y[15:0]);
assign out[15:0] = ~(x[15:0] | y[15:0]);
endmodule
