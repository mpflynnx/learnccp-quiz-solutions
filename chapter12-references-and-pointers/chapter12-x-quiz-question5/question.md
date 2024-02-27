## Question #5

- [Compound Types: References and Pointers | 12.x — Chapter 12 summary and quiz](https://www.learncpp.com/cpp-tutorial/chapter-12-summary-and-quiz/)

Write a function named sort2 which allows the caller to pass 2 int variables as arguments. When the function returns, the first argument should hold the lesser of the two values, and the second argument should hold the greater of the two values.

The following code should run and print the values noted in the comments:

```c
#include <iostream>

int main()
{
    int x { 7 };
    int y { 5 };

    std::cout << x << ' ' << y << '\n'; // should print 7 5

    sort2(x, y); // make sure sort works when values need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    sort2(x, y); // make sure sort works when values don't need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    return 0;
}
```

https://www.learncpp.com/cpp-tutorial/pass-by-lvalue-reference/
https://www.learncpp.com/cpp-tutorial/pass-by-address/