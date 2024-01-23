#include <iostream>
#include <string> // For std::string and std::getline

std::string getName(int x)
{
    std::cout << "Enter the name of person #" << x << ": ";
    std::string person{};
    std::getline(std::cin >> std::ws, person); // read a full line of text into name
    return person;
}

int getAge(std::string name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age{};
    std::cin >> age;
    return age;
}

int main()
{
    std::string person1 (getName(1));

    int person1Age{ getAge(person1)};

    person1.append(" (age " + std::to_string(person1Age));

    std::string person2(getName(2));

    int person2Age{ getAge(person2) };

    person2.append(" (age " + std::to_string(person2Age));

    std::string oldest{};
    std::string youngest{};

    if (person1Age > person2Age)
    {
        oldest = person1;
        youngest = person2;
    }
    else
    {
        oldest = person2;
        youngest = person1;
    }
    
    std::cout << oldest 
          << ") is older than " 
          << youngest 
          << ").\n";

    return 0;
}
