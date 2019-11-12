/*
    Author : Liel Fridman
    Date : 25/10/2019
    Time : 16:13
    Description : create a simple map and test for two keys: 1 and 2.
*/

#include <iostream>
#include <map>

int main() {
    /* Should print:
    2 found.
    1 not found. */
    std::map<int, int> example = {{2, 3}, {4, 5}};

    if (example.contains(2)) {
        std::cout << "2 found." << std::endl;
    } else {
        std::cout << "2 not found." << std::endl;
    }

    if (example.contains(1)) {
        std::cout << "1 found." << std::endl;
    } else {
        std::cout << "1 not found." << std::endl;
    }

    return 0;
}