 /*
    Author : Thamara Andrade
    Date : Date format 02/09/2019
    Time : Time format 23:00
    Description : Retrieve min and max of values or from a list.
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int a = 7, b = 3;
    
    // returns pair <3, 7>
    auto minMax1 = std::minmax(a, b);
    std::cout << "Min is " << minMax1.first <<
                 " Max is " << minMax1.second << std::endl;

    // returns pair <-1, 10>
    auto minMax2 = std::minmax({-1, 3, 10, 0});
    std::cout << "Min is " << minMax2.first <<
                 " Max is " << minMax2.second << std::endl;
}