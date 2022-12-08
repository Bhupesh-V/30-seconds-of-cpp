/*
    Author : Karina Murawko-Wisniewska
    Date : Date format 07/12/2022
    Time : Time format 11:53
    Description : std::deque::size() returns number of elements
*/

#include <deque>
#include <iostream>

int main() {
    std::deque<std::string> sampleDeque{"Alice", "Bob", "John"};

    // Print number of elements of sampleDeque
    std::cout << "sampleDeque has " << sampleDeque.size() << " elements.\n";

    // output: sampleDeque has 3 elements.

    return 0;
}
