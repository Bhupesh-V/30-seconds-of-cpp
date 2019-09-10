 /*
    Author : Thamara Andrade
    Date : Date format 09/09/2019
    Time : Time format 23:00
    Description : Copies elements from a range to another replacing the ones that satisfies a criteria.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> origin {3, 5, 3, 1, 2, 3};
    std::vector<int> destination;

    // Copy elements to destination replacing elements that are 3 by 0
    std::replace_copy(origin.begin(),                  //first
                      origin.end(),                    //last
                      std::back_inserter(destination), //d_first 
                      3,                               //old_value
                      0                                //new_value
                      );
    
    // origin is still {3, 5, 3, 1, 2, 3}
    for (auto value : origin) { 
        std::cout << value << " "; 
    }
    std::cout << std::endl;

    // destination is {0, 5, 0, 1, 2, 0}
    for (auto value : destination) { 
        std::cout << value << " "; 
    }
    std::cout << std::endl;
}