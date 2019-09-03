 /*
    Author : Thamara Andrade
    Date : Date format 02/09/2019
    Time : Time format 23:00
    Description : Retrieve smallest element that greater than given value.
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec = {3, -1, 2, 5, 10, 6, 7, 4};
    // upper_bound requires a sorted input {-1, 2, 3, 4, 5, 6, 7, 10}
    std::sort(vec.begin(), vec.end());

    auto upperBoundIt = std::upper_bound(vec.begin(), vec.end(), 5); 
    // prints 6 (first value element that is greater than 5 is 6)
    std::cout << "The lower bound element is " << *upperBoundIt << '\n';
}