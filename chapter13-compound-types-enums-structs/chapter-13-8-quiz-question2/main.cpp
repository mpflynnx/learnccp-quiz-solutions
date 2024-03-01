#include <iostream>

// Create a struct to hold a fraction.
struct Fraction
{
    int numerator{};
    int denominator{};
};

// Write a function to read in a Fraction from the user

Fraction getFraction() {

    Fraction temp{};
    std::cout << "Enter a value for the numerator: ";
    std::cin >> temp.numerator;
    std::cout << "Enter a value for the denominator: ";
    std::cin >> temp.denominator;
    // temp is a local variable, it will go out of scope at the end of the function
    // If we were to return temp as reference, we’d return a dangling reference 
    // back to the caller.
    return temp;
}

//Write another function to multiply two Fractions together
Fraction multipleFraction(const Fraction& fract1, const Fraction& fract2) {
    Fraction temp{};
    temp.numerator = fract1.numerator * fract2.numerator;
    temp.denominator = fract1.denominator * fract2.denominator;

    return temp;
}

// Write another function that prints a fraction
void printFraction(const Fraction& fract) {

    std::cout << "Your fractions multiplied together: " << fract.numerator << '/' << fract.denominator << '\n';
}

int main()
{
    Fraction fract1{ getFraction() };
    Fraction fract2{ getFraction() };
    Fraction result{ multipleFraction(fract1, fract2) };
    printFraction(result);

    return 0;
}
