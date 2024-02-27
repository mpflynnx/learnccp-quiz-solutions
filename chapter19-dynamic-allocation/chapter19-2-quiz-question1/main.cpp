#include <iostream>
#include <string>
#include <algorithm> // for std::sort

void display(const std::string* array, size_t size);

int main()
{
    std::cout << "How many names would you like to enter? ";


    std::size_t length{};
    std::cin >> length;

    std::string* array{ new std::string[length] {} };

    for (size_t i{0}; i < length; ++i) {
        std::cout << "Enter name #" << (i + 1) << ": ";
        std::string name{};
        std::getline(std::cin >> std::ws, name); // read a full line of text into name
        array[i] = name;
    }

    std::sort(array, array + length);
    display(array, length);

    delete[] array; // use array delete to deallocate array
    return 0;
}

void display(const std::string* array, size_t size) {
    std::cout << "\nHere is your sorted list :\n";
    for (size_t i{ 0 }; i < size; ++i)
        std::cout << "Name #" << (i + 1) << ": " << array[i] << '\n';
    std::cout << '\n';
}