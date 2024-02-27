#include <iostream>
#include <string>
#include <algorithm> // for std::sort

std::size_t getLength();
void getNames(std::string* array, std::size_t length);
void display(const std::string* array, size_t size);

int main()
{

    std::size_t length{ getLength()};

    // Allocate an array to hold the names
    std::string* array{ new std::string[length] {} };

    getNames(array, length);

    std::sort(array, array + length);
    display(array, length);

    delete[] array; // use array delete to deallocate array
    return 0;
}

std::size_t getLength()
{
    std::cout << "How many names would you like to enter? ";
    std::size_t length{};
    std::cin >> length;

    return length;
}

void getNames(std::string* array, std::size_t length) {
    for (size_t i{ 0 }; i < length; ++i) {
        std::cout << "Enter name #" << (i + 1) << ": ";
        std::getline(std::cin >> std::ws, array[i]); // read a full line of text into name
    }
}

void display(const std::string* array, size_t size) {
    std::cout << "\nHere is your sorted list :\n";
    for (size_t i{ 0 }; i < size; ++i)
        std::cout << "Name #" << (i + 1) << ": " << array[i] << '\n';
    std::cout << '\n';
}
