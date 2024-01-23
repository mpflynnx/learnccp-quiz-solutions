#include <iostream>
#include <string> // For std::string and std::getline
#include <string_view>

std::string getName(int x)
{
    std::cout << "Enter the name of person #" << x << ": ";
    std::string person{};
    std::getline(std::cin >> std::ws, person); // read a full line of text into name
    return person;
}

int getAge(std::string_view name) // string_view saves a new copy of name
{
    std::cout << "Enter the age of " << name << ": ";
    int age{};
    std::cin >> age;
    return age;
}

void printOlder(std::string_view name1, int name1Age, std::string_view name2, int name2Age)
{
    if (name1Age > name2Age)
        std::cout << name1 << " (age " << name1Age << ") is older than " << name2 << " (age " << name2Age << ").\n";
    else
        std::cout << name2 << " (age " << name2Age << ") is older than " << name1 << " (age " << name1Age << ").\n";
}

int main()
{
    const std::string person1 (getName(1));

    const int person1Age{ getAge(person1)};

    const std::string person2(getName(2));

    const int person2Age{ getAge(person2) };

    printOlder(person1, person1Age, person2, person2Age);

    return 0;
}
