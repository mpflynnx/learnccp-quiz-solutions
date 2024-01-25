#include <iostream>

// Unsigned Decimal to binary
// Using method 2:
// Consider the decimal number 148 again.What’s the largest power of 2 that’s smaller than 148 ? 128, so we’ll start there.
//
// Is 148 >= 128 ? Yes, so the 128 bit must be 1. 148 - 128 = 20, which means we need to find bits worth 20 more.
// Is 20 >= 64 ? No, so the 64 bit must be 0.
// Is 20 >= 32 ? No, so the 32 bit must be 0.
// Is 20 >= 16 ? Yes, so the 16 bit must be 1. 20 - 16 = 4, which means we need to find bits worth 4 more.
//
// Is 4 >= 8 ? No, so the 8 bit must be 0.
// Is 4 >= 4 ? Yes, so the 4 bit must be 1. 4 - 4 = 0, which means all the rest of the bits must be 0.
//
// 148 = (1 * 128) + (0 * 64) + (0 * 32) + (1 * 16) + (0 * 8) + (1 * 4) + (0 * 2) + (0 * 1) = 1001 0100
//


constexpr int func(const int num, const int power)
{
    if (num >= power)
    {
        std::cout << '1';
        return (num - power);
    }

    std::cout << '0';
    return num;
}

int main()
{

    std::cout << "Input a number between 0 and 255: ";
    int num{};
    std::cin >> num;
  
    num = func(num, 128);
    num = func(num, 64);
    num = func(num, 32);
    num = func(num, 16);

    std::cout << ' ';

    num = func(num, 8);
    num = func(num, 4);
    num = func(num, 2);
    num = func(num, 1);

    std::cout << '\n';

    return 0;
}
