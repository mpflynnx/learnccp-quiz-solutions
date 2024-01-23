#include <iostream>
#include <string_view>

constexpr std::string_view getQuantityPhrase(int x)
{
    if (x < 0)
        return "negative";
    else
        switch (x)
        {
        case 0:
            return "no";
        case 1:
            return "a single";
        case 2:
            return "a couple of";
        case 3:
            return "a few";
        default:
            return "many";
        }

}

constexpr std::string_view getApplesPluralized(int x)
{
    return (x == 1 ? "apple" : "apples");
}

int main()
{
    constexpr int maryApples{ 2 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
