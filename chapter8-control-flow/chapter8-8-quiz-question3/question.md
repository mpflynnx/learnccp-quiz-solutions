## Question #3

Invert the nested loops example below so it prints the following:

```bash
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
```

**Example**
```c
#include <iostream>

int main()
{
    // outer loops between 1 and 5
    int outer{ 1 };
    while (outer <= 5)
    {
        // For each iteration of the outer loop, the code in the body of the loop executes once

        // inner loops between 1 and outer
        int inner{ 1 };
        while (inner <= outer)
        {
            std::cout << inner << ' ';
            ++inner;
        }

        // print a newline at the end of each row
        std::cout << '\n';
        ++outer;
    }

    return 0;
}
```
**Output**
```bash
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```