# key_comp

**Description :** Returns a function object that is used to compare keys. It can be used to determine whether two keys are a match or if the key should fall before or after the comparison value.

**Example** : 
```cpp
// C++ program to demonstrate the map::key_comp() function
#include <iostream>
#include <map>

int main() {
    // Initialize the map container
    // This example uses a char for the key and an integer for the value
    std::map<char, int> mymap;

    // Add elements to the map
    mymap['a'] = 1;
    mymap['b'] = 2;
    mymap['j'] = 10;
    mymap['c'] = 3;
    mymap['d'] = 4;
    mymap['e'] = 5;

    // Create the comparison function and set the key_comp value
    auto comp_func = mymap.key_comp();
    int comp_value = 100;

    for (auto it : mymap) {
        bool before = comp_func(it.first, comp_value);
        bool after = comp_func(comp_value, it.first);

        std::cout << "(" << it.first << ", " << it.second << ") ";
        if (!before && !after) {
            std::cout << " is equivalent to key " << comp_value << std::endl;
        }
        else if (before) {
            std::cout << " is before key " << comp_value << std::endl;
        }
        else {
            std::cout << " is after key " << comp_value << std::endl;
        }
    }
}
```
**[Run Code](https://rextester.com/KMBR48778)**
