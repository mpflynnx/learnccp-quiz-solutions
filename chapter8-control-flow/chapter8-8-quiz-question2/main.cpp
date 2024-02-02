#include <iostream>

// Write a program that prints out the letters a through z along with their ASCII codes. Use a loop
// variable of type char.


// https://www.ascii-code.com/
// lowercase 'a' int value is 97 dec.

// chars
// https://www.learncpp.com/cpp-tutorial/chars/

// static_cast<int>(letter) usage source below:
// https://www.learncpp.com/cpp-tutorial/introduction-to-type-conversion-and-static_cast/)

int main()
{

    char letter{ 97 }; // 'a' dec value is 97.

    while (letter <= 'z') {
        std::cout << letter << " has value " << static_cast<int>(letter) << '\n'; // print value of variable ch as an int
        ++letter; // increment letter
    }

    return 0;
}

