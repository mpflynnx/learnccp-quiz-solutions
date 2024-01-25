## Question 6

Write a program that asks the user to input a number between 0 and 255. Print this number as an 8-bit binary number (of the form #### ####). Don’t use any bitwise operators. Don’t use std::bitset.

Hint: Use method 2. Assume the largest power of 2 is 128.

Hint: Write a function to test whether your input number is greater than some power of 2. If so, print ‘1’ and return your number minus the power of 2.

Reminder: std::uint8_t is usually treated as a char, not an int. This may cause unexpected behavior when used with input or output.