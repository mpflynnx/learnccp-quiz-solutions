#include <iostream>
#include <cmath>

double ballHeight(double height, double seconds)
{
    double newHeight{};
    double gravity{ 9.8 };
    newHeight = height - (0.5 * gravity * pow(seconds, 2.0));
    return newHeight;
}

int main()
{
    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;
    //double seconds{};

    
    if (ballHeight(100.0, 1.0) > 0)
        std::cout << "At 1 seconds, the ball is at height: " << ballHeight(100.0, 1.0) << " meters\n";
        std::cout << "At 2 seconds, the ball is at height: " << ballHeight(100.0, 2.0) << " meters\n";
        std::cout << "At 3 seconds, the ball is at height: " << ballHeight(100.0, 3.0) << " meters\n";
        std::cout << "At 4 seconds, the ball is at height: " << ballHeight(100.0, 4.0) << " meters\n";
        std::cout << "At 5 seconds, the ball is at height: " << ballHeight(100.0, 5.0) << " meters\n";
 /*   else
        std::cout << "At 1 seconds, the ball is ";
        std::cout << "on the ground.";*/

    return 0;
}

