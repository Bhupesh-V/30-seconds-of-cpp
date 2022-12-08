/*
    Author : Karina Murawko-Wisniewska
    Date : Date format 07/12/2022
    Time : Time format 11:45
    Description : std::deque::empty() returns true if container is empty
*/

#include <deque>
#include <iostream>

int main() {
    std::deque<std::string> sampleDeque{"Alice", "Bob", "John"};

    // Check if sampleDeque is empty
    if (sampleDeque.empty()) {
        std::cout << "sampleDeque is empty.\n";
    } else {
        std::cout << "sampleDeque is not empty.\n";
    }

    // output: sampleDeque is not empty.

    return 0;
}
