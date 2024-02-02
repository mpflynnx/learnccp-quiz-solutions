#include <cassert>
#include <iostream>
#include  <cmath>

bool isPrime(int x)
{

    // A prime number is a natural number greater than 1
    if (x <= 1) {
        return false;
    }
    if (x == 2) {
        std::cout << "\nYes, 2 is the only even prime number!" << '\n';
        return true; // 2 is the only even prime number
    }
    if (x % 2 == 0) { // all other even number are composite numbers
        std::cout << '\n' << x << " is not a prime number!" << '\n';
        return false;
    }

    std::cout << "\nCalculating " << x << " is a prime number....\n";
    for (int i{ 3 }; i <= std::sqrt(x); i +=2) {
        std::cout << "i: " << i << '\n';
        std::cout << "sqrt of " << x << " = " << std::sqrt(x) << '\n';
        int factors{ x / i };
        std::cout << "factors of " << x << " = " << x << " / " << i << " = " << factors << '\n';
        int divisor{ x % i };
        std::cout << "divisor of " << x << " = " << x << " % " << i << " = " << divisor << '\n';
        
        if (divisor == 0) {
            std::cout << "No, " << x << " is not a prime number.\n";
            return false;
        }
        
    }

    std::cout << x << ", is a prime number!" << '\n';

    return true;
}

int main()
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));



    std::cout << "Success!\n";

    return 0;
}