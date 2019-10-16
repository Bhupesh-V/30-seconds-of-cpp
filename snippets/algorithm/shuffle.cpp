/*
    Author : Shashank T D
    Date : Date format 16/10/2019
    Time : Time format 12:00
    Description : Shuffles the elements of a given vector using time seed obtained from the chrono library.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <chrono>

int main() {
    std::vector<int> shuffleme {0,1,2,3,4,5,6,7,8,9};
    // get a time based seed
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    // shuffle the vector with the seed obtained
    std::shuffle(shuffleme.begin(), shuffleme.end(), std::default_random_engine(seed));

    std::cout << "Shuffled elements are : ";
    // iterate through the vector and print the elements
    for(auto element : shuffleme) {
        std::cout << element << " ";
    }

    return 0;
}