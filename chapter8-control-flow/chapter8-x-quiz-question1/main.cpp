#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen{ myConstants::gravity * seconds * seconds / 2 };
    double heightNow{ initialHeight - distanceFallen };

    // Check whether we've gone under the ground
    // If so, set the height to ground-level
    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}

void calculateAndPrintHeight(double initialHeight, int time)
{

    double heightNow{};

    do {
        heightNow = (calculateHeight(initialHeight, time));
        std::cout << "At " << time << " seconds, the ball is at height: " << heightNow << '\n';
        ++time;

    } while (heightNow > 0.0);
}

int main()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight{};
    std::cin >> initialHeight;

    calculateAndPrintHeight(initialHeight, 0);

    return 0;
}
