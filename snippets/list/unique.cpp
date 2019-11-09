/*
    Author : Shashank T D
    Date   : 16/10/2019
    Time   : 14:30
    Description :  This program demonstrates the usage of unique function for a list
*/

#include <iostream>
#include <cmath>
#include <list>

// removes the second element if consecutive element difference is less than 2
bool differenceOfTwo(int first, int second) {
    return (std::fabs(first - second) < 2);
}

int main() {
    std::list<int> duplicates {0,1,1,2,3,4,4,5,5,5,5,7,8,8,9};
    // Unique function removes the consecutive duplicate elements in a list
    duplicates.unique();

    // Printing the unique elements
    std::cout << "Unique Elements are : " ;
    for(auto element: duplicates) {
        std::cout << element << " ";
    }

    // Computing and Printing the elements which differ by 2 or more
    std::cout << "\n";
    std::cout << "Printing elements which differ by 2 or more : ";
    duplicates.unique(differenceOfTwo);
    
    for(auto element: duplicates) {
        std::cout << element << " ";
    }
    return 0;
}