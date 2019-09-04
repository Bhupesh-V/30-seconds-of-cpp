 /*
    Author : Thamara Andrade
    Date : Date format 02/09/2019
    Time : Time format 23:00
    Description : Retrieve the smallest value from a range.
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec = {3, -1, 2, 10, 4};

    auto smallestIt = std::min_element(vec.begin(), vec.end()); 
    // prints -1
    std::cout << "The smallest element is " << *smallestIt << '\n';
}