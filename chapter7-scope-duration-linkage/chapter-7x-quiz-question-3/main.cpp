#include <iostream>

int accumulate(int value) {

    // source: https://www.learncpp.com/cpp-tutorial/static-local-variables/
    static int s_value{ 0 }; // static duration via static keyword.  This initializer is only executed once.
    
    s_value += value;
    
    return s_value;
}

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}

