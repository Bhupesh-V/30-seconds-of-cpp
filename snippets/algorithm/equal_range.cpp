 /*
    Author : Thamara Andrade
    Date : Date format 02/09/2019
    Time : Time format 23:00
    Description : Retrieve smallest element that is not smaller than given value.
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 1, 6, 1};
    // equal_range requires a sorted input {1, 1, 1, 2, 3, 6}
    std::sort(vec.begin(), vec.end());

    // returns pair of iterators for positions 0 and 2:
    // {1, 1, 1, 2, 3, 6}
    //  ^        ^
    auto equalRangeIt = std::equal_range(vec.begin(), vec.end(), 1); 
    for (auto it = equalRangeIt.first; it != equalRangeIt.second; ++it) {
        std::cout << " Position: " << (it - vec.begin()) << " = " << *it << std::endl;
    }
}