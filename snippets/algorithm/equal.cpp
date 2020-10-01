/*
    Author: Michael Guzman
    Date: 10/16/2019
    Time: 19:43
    Description: Compares the elements of two vectors in the given range.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 {3, 5, 3, 1, 2, 3};
    std::vector<int> v2 {1, 2 ,3, 4, 5, 6};
    std::vector<int> v3 {3, 5, 3, 1, 2, 3};

    // Compare two equal vectors
    if(std::equal(v1.begin(),v1.end(),v3.begin())){
        std::cout << "Vectors are equal!\n";
    }
    else {
        std::cout << "Vectors are not equal!\n";
    }

    // Compare two unequal vectors
        if(std::equal(v1.begin(),v1.end(),v2.begin())){
        std::cout << "Vectors are equal!\n";
    }
    else {
        std::cout << "Vectors are not equal!\n";
    }
}