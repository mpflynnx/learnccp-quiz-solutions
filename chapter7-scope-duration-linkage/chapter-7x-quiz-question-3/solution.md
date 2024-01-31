```c
#include <iostream>

int accumulate(int x)
{
    static int sum{ 0 }; // initialize sum to 0 at start of program
    sum += x;
    return sum;
}

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}
```

### Shortcomings of the accumulate() function 
- There is no way to reset the accumulation without restarting the program.
- There is no way to have multiple accumulators running.

Both of these shortcomings can be addressed using functors [21.10 -- Overloading the parenthesis operator](https://www.learncpp.com/cpp-tutorial/overloading-the-parenthesis-operator/) instead of a static local variable.