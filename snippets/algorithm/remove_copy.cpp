 /*
    Author : Thamara Andrade
    Date : Date format 09/09/2019
    Time : Time format 23:00
    Description : Removes elements from vector that satisfies a criteria.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> origin {3, 5, 3, 1, 2, 3};
    std::vector<int> destination;

    // Copy elements to destination that are not 3
    std::remove_copy(origin.begin(), //first
                     origin.end(),   //last
                     std::back_inserter(destination), //d_first 
                     3);
    
    // origin is still {3, 5, 3, 1, 2, 3}
    for (auto value : origin) { 
        std::cout << value << " "; 
    }
    std::cout << std::endl;

    // destination is {5, 1, 2}
    for (auto value : destination) { 
        std::cout << value << " "; 
    }
    std::cout << std::endl;
}