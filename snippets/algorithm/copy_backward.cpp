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
    // destination size is required to be at least the number of values to be copied
    std::vector<int> destination(origin.size());

    // Copy origin to destination, starting from the last element
    std::copy_backward(origin.begin(), origin.end(), destination.end());
    
    // destination is now {1, 2, 3}
    for (auto value : destination) {  
        std::cout << value << " "; 
    }
}