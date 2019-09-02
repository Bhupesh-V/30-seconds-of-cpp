 /*
    Author : Thamara Andrade
    Date : Date format 02/09/2019
    Time : Time format 02:00
    Description : Copies n elements starting at a position to another range.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> origin {1, 2, 3};
    std::vector<int> destination;

    // Will copy 2 values starting at origin.begin, to destination
    std::copy_n(origin.begin(), 2, std::back_inserter(destination));
    
    // destination is now {1, 2}
    for (auto value : destination) { 
        std::cout << value << " "; 
    }
}