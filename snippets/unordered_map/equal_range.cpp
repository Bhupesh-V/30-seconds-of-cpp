// C++ program to demonstrate the unordered_map::equal_range function
#include <iostream>
#include <unordered_map>

int main() {
    // Initialize the empty unordered_map
    // This example uses a char for the key and an integer for the value
    std::unordered_map<char, int> mymap;

    // Add elements to the map
    mymap['a'] = 1;
    mymap['b'] = 2;
    mymap['j'] = 10;
    mymap['c'] = 3;
    mymap['d'] = 4;

    // Set the search key and create range
    auto search_key = 'j';
    auto range = mymap.equal_range(search_key);

    // Iterate through the range to print the key/value pair
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << "Key = " << it->first << ", Value = " << it->second << std::endl;
    }
}