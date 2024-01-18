#include <iostream>

// Gets a double from the user.
double getDouble()
{
    double d{};
    std::cout << "Enter a double value: ";
    std::cin >> d;
    return d;
}

char getOperator()
{
    std::cout << "Enter +, -, *, or /: ";
    char c{};
    std::cin >> c;
    return c;
}

// Calculates result
void printResult(double num1, char c, double num2)
{
    switch (c)
    {
    case '+':
        std::cout << '\n' << num1 << " + " << num2 << " is " << num1 + num2 << '\n';
        break;
    case '-':
        std::cout << '\n' << num1 << " - " << num2 << " is " << num1 - num2 << '\n';
        break;
    case '/':
        std::cout << '\n' << num1 << " / " << num2 << " is " << num1 / num2 << '\n';
        break;
    case '*':
        std::cout << '\n' << num1 << " * " << num2 << " is " << num1 * num2 << '\n';
        break;
    }

}


int main()
{
    double num1{ getDouble() };
    double num2{ getDouble() };
    char c{ getOperator() };
    printResult(num1, c, num2);
    return 0;
}
