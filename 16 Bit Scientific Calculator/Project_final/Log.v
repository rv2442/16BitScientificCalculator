`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:40:07 03/23/2022 
// Design Name: 
// Module Name:    Log 
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
// Code your design here
// 2[(x-1)/(x+1) + ((x-1)/(x+1))^3/3 + ((x-1)/(x+1))^5/5 + ...]

module Log(input[15:0] inp1, clk, output[15:0] log_e, log_e_deci);
  
 
  wire [63:0] iter_1,iter_1_deci,iter_2,iter_2_deci, iter_3, iter_3_deci, iter_4, iter_4_deci, iter_5, iter_5_deci, iter_6, iter_6_deci ,last_calc_int, last_calc_deci;
   reg [63:0] value_int , value_deci;
  wire [63:0] calc_1,calc_2,calc_3,calc_4,calc_5,calc_6,calc_7,calc_8,calc_9,calc_10,calc_11;
  wire [127:0] calc2_1,calc2_2,calc2_3,calc2_4,calc2_5,calc2_6,calc2_7,calc2_8,calc2_9,calc2_10,calc2_11,calc2_deno;
  wire [255:0] calc3_1,calc3_2,calc3_3,calc3_4,calc3_5,calc3_6,calc3_7,calc3_8,calc3_9,calc3_10,calc3_11,calc3_deno;
  wire [255:0] calc4_1,calc4_2,calc4_3,calc4_4,calc4_5,calc4_6,calc4_7,calc4_8,calc4_9,calc4_10,calc4_11,calc4_deno;
  wire [255:0] calc5_1,calc5_2,calc5_3,calc5_4,calc5_5,calc5_6,calc5_7,calc5_8,calc5_9,calc5_10,calc5_11,calc5_deno;
  wire [511:0] calc6_1,calc6_2,calc6_3,calc6_4,calc6_5,calc6_6,calc6_7,calc6_8,calc6_9,calc6_10,calc6_11,calc6_deno;
  wire [1023:0] calc7_1,calc7_2,calc7_3,calc7_4,calc7_5,calc7_6,calc7_7,calc7_8,calc7_9,calc7_10,calc7_11,calc7_deno;
  assign calc_1 =  (inp1-1)/(inp1+1);
  assign calc_2 = (inp1-1)%(inp1+1);
  assign calc_3 = (calc_2*10)/(inp1+1);
  assign calc_4 = (calc_2*10)%(inp1+1);
  assign calc_5 = (calc_4*10)/(inp1+1);
  assign calc_6 = (calc_4*10)%(inp1+1);
  assign calc_7 = (calc_6*10)/(inp1+1);
  assign calc_8 = (calc_6*10)%(inp1+1);
  assign calc_9 = (calc_8*10)/(inp1+1);
  assign calc_10 = (calc_8*10)%(inp1+1);
  assign calc_11 = (calc_10*10)/(inp1+1);
  assign iter_1_deci = 10000*calc_3 + 1000*calc_5+ 100*calc_7 + 10*calc_9 + calc_11;
  assign iter_1 = calc_1;
  
  
  assign calc2_deno =(((inp1+1)**3)*3);
  assign calc2_1 =  ((inp1-1)**3)/calc2_deno;
  assign calc2_2 = ((inp1-1)**3)%calc2_deno;
  assign calc2_3 = (calc2_2*10)/calc2_deno;
  assign calc2_4 = (calc2_2*10)%calc2_deno;
  assign calc2_5 = (calc2_4*10)/calc2_deno;
  assign calc2_6 = (calc2_4*10)%calc2_deno;
  assign calc2_7 = (calc2_6*10)/calc2_deno;
  assign calc2_8 = (calc2_6*10)%calc2_deno;
  assign calc2_9 = (calc2_8*10)/calc2_deno;
  assign calc2_10 = (calc2_8*10)%calc2_deno;
  assign calc2_11 = (calc2_10*10)/calc2_deno;
  assign iter_2_deci = 10000*calc2_3 + 1000*calc2_5+ 100*calc2_7 + 10*calc2_9 + calc2_11;
  assign iter_2 = calc2_1;
  
  
  assign calc3_deno =(((inp1+1)**5)*5);
  assign calc3_1 =  ((inp1-1)**5)/calc3_deno;
  assign calc3_2 = ((inp1-1)**5)%calc3_deno;
  assign calc3_3 = (calc3_2*10)/calc3_deno;
  assign calc3_4 = (calc3_2*10)%calc3_deno;
  assign calc3_5 = (calc3_4*10)/calc3_deno;
  assign calc3_6 = (calc3_4*10)%calc3_deno;
  assign calc3_7 = (calc3_6*10)/calc3_deno;
  assign calc3_8 = (calc3_6*10)%calc3_deno;
  assign calc3_9 = (calc3_8*10)/calc3_deno;
  assign calc3_10 = (calc3_8*10)%calc3_deno;
  assign calc3_11 = (calc3_10*10)/calc3_deno;
  assign iter_3_deci = 10000*calc3_3 + 1000*calc3_5+ 100*calc3_7 + 10*calc3_9 + calc3_11;
  assign iter_3 = calc3_1;
  
  
  assign calc4_deno =(((inp1+1)**7)*7);
  assign calc4_1 =  ((inp1-1)**7)/calc4_deno;
  assign calc4_2 = ((inp1-1)**7)%calc4_deno;
  assign calc4_3 = (calc4_2*10)/calc4_deno;
  assign calc4_4 = (calc4_2*10)%calc4_deno;
  assign calc4_5 = (calc4_4*10)/calc4_deno;
  assign calc4_6 = (calc4_4*10)%calc4_deno;
  assign calc4_7 = (calc4_6*10)/calc4_deno;
  assign calc4_8 = (calc4_6*10)%calc4_deno;
  assign calc4_9 = (calc4_8*10)/calc4_deno;
  assign calc4_10 = (calc4_8*10)%calc4_deno;
  assign calc4_11 = (calc4_10*10)/calc4_deno;
  assign iter_4_deci = 10000*calc4_3 + 1000*calc4_5+ 100*calc4_7 + 10*calc4_9 + calc4_11;
  assign iter_4 = calc4_1;
  
  
  assign calc5_deno =(((inp1+1)**9)*9);
  assign calc5_1 =  ((inp1-1)**9)/calc5_deno;
  assign calc5_2 = ((inp1-1)**9)%calc5_deno;
  assign calc5_3 = (calc5_2*10)/calc5_deno;
  assign calc5_4 = (calc5_2*10)%calc5_deno;
  assign calc5_5 = (calc5_4*10)/calc5_deno;
  assign calc5_6 = (calc5_4*10)%calc5_deno;
  assign calc5_7 = (calc5_6*10)/calc5_deno;
  assign calc5_8 = (calc5_6*10)%calc5_deno;
  assign calc5_9 = (calc5_8*10)/calc5_deno;
  assign calc5_10 = (calc5_8*10)%calc5_deno;
  assign calc5_11 = (calc5_10*10)/calc5_deno;
  assign iter_5_deci = 10000*calc5_3 + 1000*calc5_5+ 100*calc5_7 + 10*calc5_9 + calc5_11;
  assign iter_5 = calc5_1;
  

  assign calc6_deno =(((inp1+1)**11)*11);
  assign calc6_1 =  ((inp1-1)**11)/calc6_deno;
  assign calc6_2 = ((inp1-1)**11)%calc6_deno;
  assign calc6_3 = (calc6_2*10)/calc6_deno;
  assign calc6_4 = (calc6_2*10)%calc6_deno;
  assign calc6_5 = (calc6_4*10)/calc6_deno;
  assign calc6_6 = (calc6_4*10)%calc6_deno;
  assign calc6_7 = (calc6_6*10)/calc6_deno;
  assign calc6_8 = (calc6_6*10)%calc6_deno;
  assign calc6_9 = (calc6_8*10)/calc6_deno;
  assign calc6_10 = (calc6_8*10)%calc6_deno;
  assign calc6_11 = (calc5_10*10)/calc6_deno;
  assign iter_6_deci = 10000*calc6_3 + 1000*calc6_5+ 100*calc6_7 + 10*calc6_9 + calc6_11;
  assign iter_6 = calc6_1;

  
  assign last_calc_int = 2*(iter_1 + iter_2 + iter_3 + iter_4 + iter_5 + iter_6 );
  assign last_calc_deci = 2*(iter_1_deci + iter_2_deci + iter_3_deci + iter_4_deci + iter_5_deci + iter_6_deci);
  assign log_e = last_calc_int + last_calc_deci/100000;
  assign log_e_deci = last_calc_deci % 100000;
endmodule 
