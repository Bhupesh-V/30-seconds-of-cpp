//
// Created by Charles Wang on 2019-10-21.
//


#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    for (int i = 0; i < 27; i += 3) {
        vec.push_back(i);
    }


    int *vecptr = vec.data();
    *vecptr = -10;
    ++vecptr;
    vecptr[3] = -50;

    std::cout << "sample vector contains: ";
    for (uint32_t i = 0; i < vec.size(); ++i) {
        std::cout << " " << vec[i];
    }
    std::cout << std::endl;
    return 0;
}