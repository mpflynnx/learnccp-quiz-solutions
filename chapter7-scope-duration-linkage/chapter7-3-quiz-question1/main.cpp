#include <iostream>
#include <utility> // for using std::swap

int main()
{
    std::cout << "Enter an integer: ";
    int smaller{};
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    int larger{};
    std::cin >> larger;

    if (larger < smaller) {
        std::cout << "Swapping the values\n";
        //int temp{};
        //temp = larger;
        //larger = smaller;
        //smaller = temp;

        std::swap(larger, smaller); // Alternative to above

    } // temp variable dies here


    std::cout << "The smaller value is " << smaller << '\n';

    std::cout << "The larger value is " << larger << '\n';

    return 0;
} // smaller and larger variables die here

