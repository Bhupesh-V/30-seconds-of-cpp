# emplace()

**Description**
- Constructs and inserts an element in-place with the given arguments, if element with key K already exists. Returns a pair of iterator to element, and bool of if the emplace occurred.

**Example**:

```cpp
// Demonstrates emplace()

#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>

int main(){

    // declares an empty map. O(1)
    std::unordered_map<std::string, uint32_t> my_map;

    // emplace an entry (unlike with insert, does not use brackets)
    auto blue_emplace = my_map.emplace("Blue", 65280);
    auto green_emplace = my_map.emplace("Green", 16711680);
    auto red_emplace = my_map.emplace("Red", 4278190080);

    // Check to see if the "Blue" emplace was successful
    
    bool blue_emplace_bool = blue_emplace.second;

    std::cout << "Blue emplace successful? " << 
    blue_emplace_bool << std::endl;

    if(blue_emplace_bool){


        // Get the element at key "Blue"
        std::cout << "Element at key \"Blue\": " <<
        my_map.at("Blue") << std::endl;
    }

    // Try to emplace en element for an already-existing key
    green_emplace = my_map.emplace("Green", 20);
    auto green_emplace_iterator = green_emplace.first;
    bool green_emplace_bool = green_emplace.second;

    std::cout << "Green emplace successful? " <<
    green_emplace_bool << std::endl;

}

```
**[Run Code](https://rextester.com/IPDA36426)**