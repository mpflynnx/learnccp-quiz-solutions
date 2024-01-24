## Question 3

A bitwise rotation is like a bitwise shift, except that any bits shifted off one end are added back to the other end. For example 0b1001 << 1 would be 0b0010, but a left rotate by 1 would result in 0b0011 instead. Implement a function that does a left rotate on a std::bitset<4>. Don’t use the test and set functions (use bitwise operators).

The code should execute and print the following:
```bash
0010
0011
```