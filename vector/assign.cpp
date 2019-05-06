/*
    Author : Charles Emerson
    Date : 05/05/2019
    Time : 16:16
    Description : Showcase std::vector::assign to overwrite a vector.
*/

#include <iostream>
#include <vector>

void print(const std::vector<int> numbers){
    std::cout << "{ ";

    for (auto num : numbers){
        std::cout << num << " ";
    }

    std::cout << "}" << std::endl;
}

int main(){
    std::vector<int> example;
    print(example);

    // Overwrite to larger vector with 5 copies of 42
    example.assign(5, 42);
    print(example);

    // From another vector, assign using the range [ third, end )
    std::vector<int> sequence = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    example.assign(sequence.begin() + 2, sequence.end());
    print(example);

    // From the same vector, assign using the range [ first, third )
    example.assign(example.begin(), example.begin() + 2);
    print(example);

    // Overwrite to smaller vector with 3 copies of 0
    example.assign(3, 0);
    print(example);
}
