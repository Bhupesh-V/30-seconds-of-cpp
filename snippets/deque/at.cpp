/*
    Author : Karina Murawko-Wisniewska
    Date : Date format 07/12/2022
    Time : Time format 11:37
    Description : std::deque::at() returns a refernce to the element at position
                  passed as  paramter
*/

#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> sampleDeque{"Alice", "Bob", "John"};
    int position{1};

    // Print element in position 1 (positions are numbered from 0)
    std::cout << "Element in position " << position << ": "
              << sampleDeque.at(position) << ".\n";

    // output: Element in position 1: Bob.

    return 0;
}
