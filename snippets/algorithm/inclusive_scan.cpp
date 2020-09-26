/*
    Author : Claudio Montanari
    Date : 26/06/1995
    Time : 15:30
    Description : Computes inclusive prefix binary operation on a range (sum by default).
*/

#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>

int main() {
    std::vector<int> v{ 1, 2, 3, 4, 3, 10 };
    
    std::cout << "Content of v: ";
    for (auto i : v) {
        std::cout << i << " ";
    }

    // Compute prefix index sum of all the values in v    
    std::cout << "\n\nPrefix index sum of v: ";
    std::inclusive_scan(v.begin(), 
                        v.end(),
                        std::ostream_iterator<int>(std::cout, " "));

    // Compute prefix index sum of all the values in v with an initial value of 5    
    std::cout << "\n\nPrefix index sum of v (with initial value 5): ";
    std::inclusive_scan(v.begin(),
                        v.end(),
                        std::ostream_iterator<int>(std::cout, " "),
                        std::plus<>{},
                        5);
    
    // Compute prefix index sum of the first 3 values in v    
    std::cout << "\n\nPrefix index sum for first 3 elements of v: ";
    std::inclusive_scan(v.begin(),
                        v.begin() + 3,
                        std::ostream_iterator<int>(std::cout, " "));
    
    // Compute prefix index product of all the values in v    
    std::cout << "\n\nPrefix index product of v: ";
    std::inclusive_scan(v.begin(), 
                        v.end(),
                        std::ostream_iterator<int>(std::cout, " "),
                        std::multiplies<>{},
                        1);
    
    std::cout << std::endl;
}

