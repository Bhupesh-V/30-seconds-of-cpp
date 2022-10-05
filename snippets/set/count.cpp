/*
    Author : Angelina Shibu
    Date : 05/10/2022
    Time : 14:20
    Description : Method used to know whether a value exists in a set. Returns '1' if value exists, else returns '0'.
*/

#include <iostream>
#include <set>

int main() {

    // Create a set object holding integers
    std::set <int> S {1, 2, 5, 6, -3};

    // Checking for values in the set
    if(S.count(1) > 0) {
        std::cout << "1 is an element of the set \n";
    }
    else {
        std::cout << "1 is not an element of the set \n";
    }
    if(S.count(3) > 0) {
        std::cout << "3 is an element of the set \n";
    }
    else {
        std::cout << "3 is not an element of the set \n";
    }

    return 0;
}