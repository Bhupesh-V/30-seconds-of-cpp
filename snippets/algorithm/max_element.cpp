 /*
    Author : Thamara Andrade
    Date : Date format 02/09/2019
    Time : Time format 23:00
    Description : Retrieve the greatest value from a range.
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec = {3, -1, 2, 10, 4};

    auto greatestIt = std::max_element(vec.begin(), vec.end()); 
    // prints 10
    std::cout << "The greatest element is " << *greatestIt << '\n';
}