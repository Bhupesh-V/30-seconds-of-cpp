#include <iostream>
#include <algorithm>

int main()
{
    // setting range higher and lower bounds
    int range_high = 170, range_low = 50;

    // setting first number as less than lower bound
    int a = 20;

    //setting second number as greater than upper bound
    int b = 200;

    //setting third number in between the range
    int c = 120;

    //now clamping a, b and c

    a = std::clamp(a, range_low, range_high);

    b = std::clamp(b, range_low, range_high);

    c = std::clamp(c, range_low, range_high);

    //printing results after clamping operation

    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}
