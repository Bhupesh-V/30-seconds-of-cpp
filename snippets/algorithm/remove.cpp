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
    std::vector<int> v {3, 5, 3, 1, 2, 3};

    // remove all elements that are 3
    auto newEndIt = std::remove(v.begin(), v.end(), 3);
    
    // Erase elements from [newEndIt, v.end()]
    v.erase(newEndIt, v.end());

    // v is now {5, 1, 2}
    for (auto value : v) { 
        std::cout << value << " "; 
    }
}