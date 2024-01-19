#include <iostream>

double ballHeight(double height, double seconds)
{
    double newHeight{};
    double gravity{ 9.8 };
    newHeight = height - (0.5 * gravity * (seconds * seconds));
    return newHeight;
}

int main()
{
    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;
    int seconds{0};

    double newHeight = { ballHeight(height, seconds) };

    while (newHeight > 0)
    {
        std::cout << "At " << seconds << " seconds, the ball is at height : " << newHeight << " meters\n";
        seconds++;
        newHeight = ballHeight(height, static_cast<double>(seconds)); 
        // static_cast not needed above, but left
        // the ballHeight() is expecting a double value for seconds, and we pass in an integer argument. 
        // The compiler will notice the mismatch and implicitly convert the integer to a double.
    }
    std::cout << "At " << seconds << " seconds, the ball is ";
    std::cout << "on the ground.\n";

    return 0;
}
