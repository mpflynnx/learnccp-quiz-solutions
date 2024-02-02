#include <iostream>
#include <cstdint> // for fixed-width integers


int sumTo(int value)
{
    int sum{ 0 };

    for (int i{ 1 }; i <= value; ++i) // start at 1 to save one loop pass if (int i {0} ;
        sum += i;

    return sum;
}

int main()
{
    
    std::cout << sumTo(5);

    return 0;
}
