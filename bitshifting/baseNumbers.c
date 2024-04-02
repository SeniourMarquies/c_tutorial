/*This is how you convert any base number into decimal!*/
//Each	digit	gets	multiplied by B sqr n	
// where: B is the base and n is the position of the digit
// Example: Given the number 659 in base 7
//Number in decimal : 6x7sqr2 + 5x7sqr1 + 9x7sqr0 = 
// 6x49 + 5x7 + 9x1 = 
// 294 + 35 + 9 = 
// 329 + 9 = 338

// converting binary to octal and hexadecimal (or any base that is a power of 2)
//Note the following:
// Binary is      1 bit
// Octal is       3 bit
// Hexadecimal is 4 bit
// Use the "group the bits" technique
// - Always start from the least significant digit
// - Group every 3 bits together for bin > oct  :: Octal 8 base
// - group every 4 bits together for bin > hex  :: Hex   16 base

// Take the example : 10100110 = 128 + 32 + 4 + 2 = 160 + 6 + 166
// ...to octal:  
//  10 | 100 | 110    = 246 in octal
//   2    4    6

//..to hexadecimal: 
// 1010 | 0110        = A6 in hex
//  10     6

// Algorithm for converting number in base 10 to other bases
// while(the quotient is not zero)
// 1. Divide the decimal number by the new base
// 2. Make the remainder the next digit to the left in the answer
// 3. Replace the original decimal number with the quotient 
// 4. Repeat until your quotient is zero
// Example: what is 98 (base 10) in base 8?
// 98/8 = 12 Remainder 2 ----------------------------------- 2
// 12/8 = 1  Remainder 4 -------------------------- 4
// 1/8  = 0  Remainder 1 ----------------- 1
// it is 142 in base 8

// In detailed explanation
/*
Start with the decimal number 98.
Divide 98 by 8.
The remainder is 2, so the rightmost digit in base 8 will be 2.
Replace 98 with the quotient, which is 12.
Repeat the process with 12.
Divide 12 by 8.
The remainder is 4, so the next digit in base 8 will be 4.
Replace 12 with the quotient, which is 1.
Repeat the process with 1.
Divide 1 by 8.
The remainder is 1, so the next digit in base 8 will be 1.
Replace 1 with the quotient, which is 0.

Since the quotient is now zero, we stop. The base 8 representation of 98 is obtained by reading the remainders from bottom to top, 
which gives us 142. So, 98 in base 10 is equal to 142 in base 8.
*/

// Exercise : Convert 54 (base 10) into binary and hex...




//











