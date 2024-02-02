## Question #5

Modify the FizzBuzz program you wrote in the previous quiz to add the rule that numbers divisible by seven should be replaced with “pop”. Run the program for 150 iterations.

In this version, using an if/else chain to explicitly cover every possible combination of words will result in a function that is too long. Optimize your function so only 4 if-statements are used: one for each of the non-compound words (“fizz”, “buzz”, “pop”), and one for the case where a number is printed.

Hint: Use a boolean variable to keep track of whether a number has matched one of the conditions.

```bash
4
buzz
fizz
pop
8
```

```bash
19
buzz
fizzpop
22
```

```bash
104
fizzbuzzpop
106
```