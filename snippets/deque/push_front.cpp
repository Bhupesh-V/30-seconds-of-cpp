/*
    Author : Karina Murawko-Wisniewska
    Date : Date format 07/12/2022
    Time : Time format 12:17
    Description : std::deque::push_front() push element at the beginning of the
   deque
*/

#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> sampleDeque{"John"};

    // push 2 elements at the beginning of sampleDeque
    sampleDeque.push_front("Bob");
    sampleDeque.push_front("Alice");

    // Print elements in sampleDeque
    std::cout << "Elements in sampleDeque: ";
    for (auto element : sampleDeque) {
        std::cout << element << ", ";
    }
    std::cout << "\n";

    // output: Elements in sampleDeque: Alice, Bob, John,

    return 0;
}
