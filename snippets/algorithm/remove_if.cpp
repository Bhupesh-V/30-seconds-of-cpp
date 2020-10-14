 /*
    Author : Thamara Andrade
    Date : Date format 09/09/2019
    Time : Time format 23:00
    Description : Removes elements from vector that satisfies a criteria.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    auto isOdd = [](int i) {
        return ((i%2) == 1);
    };

    std::vector<int> v {1, 2, 3, 4, 5};

    // Remove all elements that returns true for isOdd
    auto newEndIt = std::remove_if(v.begin(), v.end(), isOdd);
    
    // Erase elements from [newEndIt, v.end()]
    v.erase(newEndIt, v.end());

    // v is now {2, 4}
    for (auto value : v) { 
        std::cout << value << " "; 
    }
}