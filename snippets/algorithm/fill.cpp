#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr(8);

    // A vector once declared has all its values initialised to 0;
    std::cout << "Initial values:" << std::endl;
    for (auto x : arr) {
        std::cout << x << " ";
    }

    // Fill the value 6 in the range [arr.begin(), arr.end())
    std::fill(arr.begin(), arr.end(), 6);

    std::cout << std::endl << "After filling 6 in the entire vector:" << std::endl;
    for (auto x : arr) {
        std::cout << x << " ";
    }

    // Fill the value 5 in the first 4 elements
    std::fill(arr.begin(), arr.begin() + 4, 5);

    std::cout << std::endl << "After modifying the first 4 elements:" << std::endl;
    for (auto x : arr) {
        std::cout << x << " ";
    }

    // Fill the value 3 in the first 2 elements using fill_n()
    std::fill_n(arr.begin(), 2, 3);

    std::cout << std::endl << "After modifying the first 2 elements using fill_n():" << std::endl;
    for (auto x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}