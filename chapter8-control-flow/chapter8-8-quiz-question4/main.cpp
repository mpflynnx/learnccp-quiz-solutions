#include <iostream>

int main()
{
    // outer loops between 5 and 1
    int outer{ 1 };
    while (outer <= 5)
    {
        // For each iteration of the outer loop, the code in the body of the loop executes once

        // inner loops between 5 and outer
        // prints white space
        int inner{ 5 - outer};
        while (inner >= 1)
        {
            std::cout << ' ' << ' ';
            --inner;

        }

        // prints between outer and 1
        int innerinner{ outer };
        while (innerinner >= 1)
        {
            std::cout << innerinner << ' ';
            --innerinner;

        }

        // print a newline at the end of each row
        std::cout << '\n';
        ++outer;
    }

    return 0;
}
