# equal_range

**Description :**  equal_range() is a lookup function of the unordered_map class that returns a range of all elements matching the key in the unordered_map container. Since keys must be unique in an unordered map, the range will include at most one element. Multiple elements may be included in the range if an unordered_multimap is used instead.

**Example** : 
```cpp
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
```
**[Run Code](https://rextester.com/MUL32187)**