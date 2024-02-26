#include <iostream>

void sort2(int int1, int int2);

int main()
{
    int x{ 7 };
    int y{ 5 };

    // testing begin
    int* ptrA{ &x};
    int* ptrB{ &y};

    std::cout << ptrA << '\n';
    std::cout << ptrB << '\n';
    // testing end

    std::cout << x << ' ' << y << '\n'; // should print 7 5

    sort2(x, y); // make sure sort works when values need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    //sort2(x, y); // make sure sort works when values don't need to be swapped
    //std::cout << x << ' ' << y << '\n'; // should print 5 7

    return 0;
}

void sort2(int int1, int int2) {
    int temp{};
    int* int1_ptr{ &int1 };
    int* int2_ptr{ &int2 };
    temp = *int1_ptr;
    *int1_ptr = *int2_ptr;
    *int2_ptr = temp;
}