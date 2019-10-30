#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

bool compare(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second; // sort in ascending order of second element of pair
}

int main() {
    // create a vector of 5 pairs of integers
    std::vector<std::pair<int, int>> v{
        std::make_pair(-1, 2),
        std::make_pair(-10, 3),
        std::make_pair(-13, 29),
        std::make_pair(1, 92),
        std::make_pair(0, -2),
    };

    // display the vector
    std::cout << "Vector v initially contains:" << std::endl;
    for (auto x : v) {
        std::cout << x.first << " " << x.second << std::endl;
    }

    // sort the vector in ascending order according to second element of pair
    std::sort(v.begin(), v.end(), compare);

    // display the sorted vector
    std::cout << "Vector v finally contains:" << std::endl;
    for (auto x : v) {
        std::cout << x.first << " " << x.second << std::endl;
    }

    return 0;
}