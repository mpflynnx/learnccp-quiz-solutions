#include <iostream>

struct Revenue
{
    int adsWatched{0};
    int userClickPercentage{0};
    double earningPerClick{0.0};
};

Revenue getRevenue()
{
    Revenue temp{};
    std::cout << "How many ads were watched today? : ";
    std::cin >> temp.adsWatched;
    std::cout << "What percentage of users clicked on an ad: ";
    std::cin >> temp.userClickPercentage;
    std::cout << "The average earnings per clicked ad: ";
    std::cin >> temp.earningPerClick;
    return temp;

}

void printRevenuePerDay(const Revenue& revenue)
{
    double percentage{ revenue.userClickPercentage / 100.0 };
    double dailyTotal{ revenue.adsWatched * percentage * revenue.earningPerClick };
    std::cout << "How many ads were watched: " << revenue.adsWatched << '\n';
    std::cout << "What percentage of users clicked on an ad: " << revenue.userClickPercentage << '\n';
    std::cout << "The average earnings per clicked ad: " << revenue.earningPerClick << '\n';
    std::cout << "Revenue: " << dailyTotal << '\n';
}

int main()
{
    Revenue day1{ getRevenue()};

    printRevenuePerDay(day1);

    return 0;
}

