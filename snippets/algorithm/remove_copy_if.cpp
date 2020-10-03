 /*
    Author : Thamara Andrade
    Date : Date format 09/09/2019
    Time : Time format 23:00
    Description : Copies elements from a range to another removing the ones that satisfies a criteria.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    auto isOdd = [](int i) {
        return ((i%2) == 1);
    };

    std::vector<int> origin {1, 2, 3, 4, 5};
    std::vector<int> destination;

    // Copy elements to destination that return false for isOdd
    std::remove_copy_if(origin.begin(), //first
                        origin.end(),   //last
                        std::back_inserter(destination), //d_first 
                        isOdd);
    
    // origin is still {1, 2, 3, 4, 5}
    for (auto value : origin) { 
        std::cout << value << " "; 
    }
    std::cout << std::endl;

    // destination is {2, 4}
    for (auto value : destination) { 
        std::cout << value << " "; 
    }
    std::cout << std::endl;
}