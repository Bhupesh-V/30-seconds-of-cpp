 /*
    Author : Thamara Andrade
    Date : Date format 02/09/2019
    Time : Time format 23:00
    Description : Retrieve the smallest and greatest value from a range.
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec = {3, -1, 2, 10, 4};

    auto minMaxPair = std::minmax_element(vec.begin(), vec.end()); 
    // returns pair <-1, 10>
    std::cout << "Min is " << *minMaxPair.first <<
                 " Max is " << *minMaxPair.second << std::endl;
}