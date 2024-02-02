## Question #2

A prime number is a natural number greater than 1 that is evenly divisible (with no remainder) only by 1 and itself. Complete the following program by writing the isPrime() function using a for-loop. When successful, the program will print “Success!”.

```c
#include <cassert>
#include <iostream>

bool isPrime(int x)
{
    // write this function using a for loop
}

int main()
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}
```

## More details

A **composite number** is a positive integer that has more than two factors. In other words, it is a number that can be divided by at least one other number besides 1 and itself ⁴. A **prime number**, on the other hand, is a positive integer that has exactly two factors: 1 and itself ⁴.

"A non-prime number (a composite number) must have at least one divisor less than or equal to its square root" 

Consider the composite number 15. Its factors are 1, 3, 5, and 15. The square root of 15 is approximately 3.87. Notice that 3 is less than or equal to the square root of 15. Therefore, 15 satisfies the statement ¹. Now, consider the composite number 21. Its factors are 1, 3, 7, and 21. The square root of 21 is approximately 4.58. Notice that 3 and 7 are less than or equal to the square root of 21. Therefore, 21 also satisfies the statement ¹.

In general, for any composite number `n`, there exists at least one divisor `d` such that `d <= sqrt(n)` ¹. This is because if `n` is not prime, then it can be factored into two smaller factors `a` and `b`, where `a` and `b` are both less than or equal to the square root of `n`. Therefore, `a` and `b` are both divisors of `n`, and at least one of them is less than or equal to the square root of `n` ¹..

Source: Conversation with Bing, 02/02/2024
(1) What is a composite number? | DoodleLearning. https://doodlelearning.com/maths/skills/numbers/composite-numbers.
(2) Composite Numbers - Definition, List, Properties and Examples - BYJU'S. https://byjus.com/maths/composite-numbers/.
(3) What are Composite Numbers? Definition, List, Examples, Facts - SplashLearn. https://www.splashlearn.com/math-vocabulary/algebra/composite-number.
(4) What are Composite Numbers? Definition, Meaning, List, Examples - Cuemath. https://www.cuemath.com/numbers/composite-numbers/.
(5) What are Composite Numbers? | Composite Number Definition - Twinkl. https://www.twinkl.co.uk/teaching-wiki/composite-numbers.
(6) en.wikipedia.org. https://en.wikipedia.org/wiki/Composite_number.


## Factors

To find the factors of a number, you need to determine all the numbers that divide the given number without leaving a remainder. For example, the factors of 12 are 1, 2, 3, 4, 6, and 12 ⁴. Here are some methods to find the factors of a number:

1. **Listing method**: List all the numbers that divide the given number without leaving a remainder. For example, to find the factors of 24, you can list 1, 2, 3, 4, 6, 8, 12, and 24 ⁴.

2. **Prime factorization method**: Express the given number as a product of prime numbers and then find all the possible combinations of the prime factors. For example, to find the factors of 60, you can express it as 2 x 2 x 3 x 5 and then find all the possible combinations of these prime factors, which are 1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, and 60 ⁷.

3. **Division method**: Divide the given number by all the numbers from 1 to the square root of the given number. If the quotient is a whole number, then the divisor and quotient are factors of the given number. For example, to find the factors of 36, you can divide it by 1, 2, 3, 4, 5, and 6. The quotients that are whole numbers are 1, 2, 3, 4, and 6. Therefore, the factors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, and 36 ⁴.

I hope this helps!

Source: Conversation with Bing, 02/02/2024
(1) How to find the factors of a number - BBC Bitesize. https://www.bbc.co.uk/bitesize/topics/z6j2tfr/articles/zrghsrd.
(2) What is a factor? - BBC Bitesize. https://www.bbc.co.uk/bitesize/topics/zyprcmn/articles/zmvt2v4.
(3) How to find Multiples and Factors #3. https://www.youtube.com/watch?v=PrSf78pnTyE.
(4) Prime Numbers, Highest Common Factors (HCF), and Lowest Common Multiples (LCM). https://www.dailymotion.com/video/x8nm8cb.
(5) What is a Factor? | What is a Factor of a Number? - Twinkl. https://www.twinkl.co.uk/teaching-wiki/factor.
(6) How to Find All The Factors of a Number Quickly and Easily. https://sciencing.com/factors-number-quickly-easily-5192972.html.
(7) Shortcut to Find Number of Factors of a Number | Sum of Factors of a Number. https://www.allmathtricks.com/factors-number/.
(8) What are multiples and factors? - BBC Bitesize. https://www.bbc.co.uk/bitesize/topics/zfq7hyc/articles/zp6wfcw.
(9) Understanding factors, factor pairs and multiples in Maths. https://www.bbc.co.uk/bitesize/topics/z6j2tfr/articles/zv9sv9q.