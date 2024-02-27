#include <iostream>

void sort2(int& int1, int& int2);

int main()
{
    int x{ 7 };
    int y{ 5 };

    std::cout << "address of first argument :" << &x << '\n';
    std::cout << "address of second argument :" << &y << '\n';

    std::cout << x << ' ' << y << '\n'; // should print 7 5

    sort2(x, y); // make sure sort works when values need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    sort2(x, y); // make sure sort works when values don't need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    return 0;
}

// https://www.learncpp.com/cpp-tutorial/pass-by-lvalue-reference/
// https://www.learncpp.com/cpp-tutorial/pass-by-address/

/*
* When we pass arguments x and y by reference using &, the reference parameters int1, int2 are bound 
to the actual argument. This avoids making a copy of the argument. If our 
reference parameter was const, we are not allowed to change refs. 
But ref were non-const, any changes we made to refs would change x and y.

The caller is providing the actual objects (x, (y) to be passed as an argument to the function call.
*/

void sort2(int& int1, int& int2) {
    //The function parameters int1 and int2 are references that binds to x and y

    std::cout << "address of first argument :" << &int1 << " value: " << int1 << '\n';
    std::cout << "address of second argument :" << &int2 << " value: " << int2 << '\n';

    if (int1 <= int2) // check if sort needed
        return;

    // change the value via the reference
    int temp{}; 
    temp = int1;
    int1 = int2;
    int2 = temp;

}