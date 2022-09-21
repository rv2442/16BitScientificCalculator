# 16BitScientificCalculator
### 16 Bit Scientific Calculator Using Xilinx ISE 14.7(Verilog) on Spartan 6 FPGA Dev Board

## Intro
1. A calculator's function is to do accurate calculations in a timely manner. It is obvious that, to the greatest extent feasible, a calculator should free the user from the need to do mental calculations and rely on paper.  
2. Scientific calculators are extensively employed in circumstances where quick access to certain mathematical functions is required, particularly those that were previously looked up in mathematical tables, such as trigonometric functions and logarithms.  
3. They're also employed in astronomy, physics, and chemistry to calculate extremely large or extremely small values.  
4. For scientific computations a simple modern day calculator cannot be used, here is when a Scientific Calculator comes into picture. We are designing a scientific calculator using Verilog HDL.

  
  
  
  
### Transition Diagram

![image](https://user-images.githubusercontent.com/104908001/166716590-e2b01545-8fda-4b9d-8aae-32023eed76c0.png)
  
  
  
### 16 Bit Scientific Calculator
  
  

#### Cosine:
>Cosine was Calculated for angle 40(in degrees)    
>'a' is the 16 bit output in decimal (upto 4 digits)   
>'select' 01101 is select mode for Cosine  
   
![image](https://user-images.githubusercontent.com/69571769/166725008-f7654abc-0186-4f9e-8499-3ed66d6fc199.png)
  
  
#### Division:  
>Division of 10000 by 3000 is performed which shows output 3.3333  
>'a' is the integer output of divison's Quotient  
>'b' is the decimal output of the division's Quotient    
>'select' 00011 is select mode for division  
  
![image](https://user-images.githubusercontent.com/69571769/166725507-47ea4564-41a0-470d-acf9-8e8eff0e4635.png)
  
  
#### Natural Logarithm:
>Natural Log of 5 is performed and shows output 1.60  
>Output names are self explanatory  
  
![image](https://user-images.githubusercontent.com/69571769/166728826-5a36c904-2f8a-413e-ac17-62217a0b9f84.png)

  
  
  
  
  
### 4 Bit Arithmetic Calculator  
  
    

#### Addition:

>Addition of 2 4 bit numbers 12(1100) and 15(1111) is giving output 27(0001 1011)  
  
![image](https://user-images.githubusercontent.com/69571769/166722325-a7092651-7e66-41bc-a343-25213bffcd9a.png)
  
   
  
#### Division
>Floating point division of 2 4 bit numbers upto 2 decimals, 5(0101) and 3(0011) gives output 1.66 (5/3)   
> LSB is 1(0000 0001)  
> 4 Leds on Breadboard towards left are 6(0110)  
> 4 Leds on Breadboard towards right are 6(0110)  
  
![image](https://user-images.githubusercontent.com/69571769/166723925-f8591fe0-6d5f-4f11-8819-be8480fa3283.png)
  
    
     
_______________________________________________________________________________________________________________________________________________________________________
### Demo
[![image](https://user-images.githubusercontent.com/69571769/191523698-07e51732-4c54-440a-acb7-02a3d0ff271f.png)](https://drive.google.com/drive/folders/1H0rM2BKYQ41OzuZrpYqHJkrT7U8Uv7cr)
