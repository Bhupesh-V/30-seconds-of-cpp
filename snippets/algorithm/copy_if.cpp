 /*
    Author : Thamara Andrade
    Date : Date format 02/09/2019
    Time : Time format 02:00
    Description : Copies the elements in one range to another range if it matches a condition.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    auto isOdd = [](int i) {
        return ((i%2) == 1);
    };

    std::vector<int> origin {1, 2, 3};
    std::vector<int> destination;

    // Will copy from origin [begin, end), to destination
    std::copy_if(origin.begin(), origin.end(), std::back_inserter(destination), isOdd);
    
    // destination is now {1, 3}
    for (auto value : destination) { 
        std::cout << value << " "; 
    }
}