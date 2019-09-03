 /*
    Author : Thamara Andrade
    Date : Date format 02/09/2019
    Time : Time format 23:00
    Description : Compares two values, returning the greatest.
*/

#include <iostream>
#include <algorithm>

int main() {
    int a = 7, b = 3;
    auto greatest = std::max(a, b);
    // prints 7
    std::cout << greatest << " "; 
}