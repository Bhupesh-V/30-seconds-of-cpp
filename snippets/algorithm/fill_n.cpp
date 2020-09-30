/*
   Author : Klajdi Bodurri
   Date : 08/01/2020
   Time : 14:00
   Description : Show an example of fill_n
*/

#include <iostream>
#include <vector>
#include <algorithm>

void print_vector(const std::vector<int> &v) {
    // iterate through v and print its elements
    for(auto &elem:v) {
        std::cout << elem << " ";
    }
    std::cout<<std::endl;
}

int main() {
    std::vector<int> v = {1,1,1,1,1,1,1,1};

    std::cout << "Before fill_n: ";
    print_vector(v);

    // set the first half of v's elements to zero
    std::fill_n(v.begin(), v.size()/2, 0);

    std::cout << "After  fill_n: ";
    print_vector(v);
    return 0;
}
