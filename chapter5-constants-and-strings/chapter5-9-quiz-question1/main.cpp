#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name); // read a full line of text into name

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    int length{ static_cast<int>(name.length()) }; // C++17
    //int length{ std::ssize(name) }; // C++20

    std::cout << "Your age + length of name is: " << length + age << '\n';

    return 0;
}
