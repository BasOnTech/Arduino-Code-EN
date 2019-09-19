/*
 * Bas on Tech - Binary counting
 * This course is part of the courses on https://arduino-tutorials.net
 *  
 * (c) Copyright 2018-2019 - Bas van Dijk / Bas on Tech
 * This code and course is copyrighted. It is not allowed to use these courses commerically
 * without explicit written approval
 * 
 * YouTube:    https://www.youtube.com/c/BasOnTech
 * Facebook:   https://www.facebook.com/BasOnTechChannel
 * Instagram:  https://www.instagram.com/BasOnTech
 * Twitter:    https://twitter.com/BasOnTech
 * 
 * ---------------------------------------------------------------------------
 * 
 *
 * DECIMAL (10) COUNTING
 * 
 * 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ... 0 0 1 1 1
 * 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 ... 9 9 0 0 0
 * 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 ... 8 9 0 1 2
 * 
 * Octal (8)
 * Hexadecimal (16) 0 1 2 3 4 5 6 7 8 9 A B C D E F
 * 
 * BINARY (2) COUNTING
 * 
 * 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 
 * 0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1  
 * 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 
 * 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 
 *  
 * Bi = Two
 * Two possibilities: 1 / 0, true / false, on / off
 * 
 * 2^0 = 1             = 1
 * 2^1 = 2             = 2 
 * 2^2 = 2 * 2         = 4
 * 2^3 = 2 * 2 * 2     = 8
 * 2^4 = 2 * 2 * 2 * 2 = 16
 * ...
 * 2^8  = 2^8  = 256
 * 2^16 = 2^16 = 65.565
 * 2^32 = 2^32 = 4.294.967.295
 * 
 * 0  0000
 * 1  0001
 * 2  0010
 * 3  0011
 * 4  0100
 * 5  0101
 * 6  0110
 * 7  0111
 * 8  1000
 * 
 * 
 * BINARY TO DECIMAL
 * 
 * 10110101
 * 
 * from right to left:
 * 2^0 = 1 =   1 
 * 2^1 = 0 =   0
 * 2^2 = 1 =   4
 * 2^3 = 0 =   0
 * 2^4 = 1 =  16
 * 2^5 = 1 =  32
 * 2^6 = 0 =   0 
 * 2^7 = 1 = 128
 * -------------
 *           181
 * 
 */


void setup() {
}

void loop() {
}
