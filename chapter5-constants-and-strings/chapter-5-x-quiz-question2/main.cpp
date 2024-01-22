/*
* Issue 1.
* There’s no reason to use std::uint8_t(Line 15).If we were to print age, it would
* likely be printed as an ASCII value.A regular int should be used to store the age,
* as the age doesn’t require a specific minimum integer width.
* We can also remove #include <cstdint>.
* 
* Issue 2.
* Characters should be placed in single quotation marks, not full quotation marks
* (Line 31, 33).

* Issue 3.
* Although the meaning of 16 is clear from the context it is used in, 16 can be seen
* as a magic number. As per best practice, a constexpr variable with the value 16
* should be defined and used instead.
*/

#include <iostream>

int main()
{
    std::cout << "How old are you?\n";


    int age{};
    std::cin >> age;

    std::cout << "Allowed to drive a car in Texas [";

    constexpr int minAge{ 16 };

    if ( age >= minAge)
        std::cout << 'x';

    else
        std::cout << ' ';

    std::cout << "]\n";

    return 0;
}
