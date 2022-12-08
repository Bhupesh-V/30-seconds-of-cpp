/*
    Author : Karina Murawko-Wisniewska
    Date : Date format 07/12/2022
    Time : Time format 11:37
    Description : std::deque::push_back() push element at the end of the deque
*/

#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> sampleDeque{"Alice"};

    // push 2 elements at the end of sampleDeque
    sampleDeque.push_back("Bob");
    sampleDeque.push_back("John");

    // Print elements in sampleDeque
    std::cout << "Elements in sampleDeque: ";
    for (auto element : sampleDeque) {
        std::cout << element << ", ";
    }
    std::cout << "\n";

    // output: Elements in sampleDeque: Alice, Bob, John,

    return 0;
}
