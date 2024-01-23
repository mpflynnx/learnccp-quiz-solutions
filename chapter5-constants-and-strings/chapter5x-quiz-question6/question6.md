## Question #6

Complete the following program:

```c
#include <iostream>

// Write the function getQuantityPhrase() here

// Write the function getApplesPluralized() here

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
```

Sample output:

```bash
Mary has a few apples.
How many apples do you have? 1
You have a single apple.
```

getQuantityPhrase() should take a single int parameter representing the quantity of something and return the following descriptor:

- < 0 = “negative”
- 0 = “no”
- 1 = “a single”
- 2 = “a couple of”
- 3 = “a few”
- \> 3 = “many”

getApplesPlural() should take a single int parameter parameter representing the quantity of apples and return the following:

- 1 = “apple”
- otherwise = “apples”

This function should use the conditional operator.

Both functions should make proper use of constexpr.

Hint: It’s okay to return a C-style string literal from a function as a std::string_view.