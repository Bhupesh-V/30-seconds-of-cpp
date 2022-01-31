
# At
**Description :** This function returns the value at a certain key of an unordered map

**Example :**

```cpp
//Demonstrates at() function on unordered maps
#include <iostream>
#include <unordered_map>

int main() {
    //the time complexity for declaring an unordered map on average ~O(1)
    std::unordered_map<std::string, std::string> flowers;
    //here we create an unordered map "flowers" which maps flower names to their colors
    
    //the time complexity for insertion on average ~O(1)
    flowers.insert({"Rose", "red"});
    flowers.insert({"Lily", "white"});
    flowers.insert({"Sunflower", "yellow"});

    std::cout << "The color of a rose is " << flowers.at("Rose") << std::endl;
    std::cout << "The color of a lily is " << flowers.at("Lily") << std::endl;
    
    //the at() function can be used to change the value at an existing key
    flowers.at("Rose") = "pink";
    std::cout << "The new color of a rose is " << flowers.at("Rose") << std::endl;
    
    //if at() is attempted on a nonexistent key, an out_of_range exception is thrown
    try {
        std::cout << flowers.at("Hibiscus");
    }
    catch (std::out_of_range& e) {
        std::cout << "The hibiscus flower does not exist in the flowers map";
    }
    return 0;
}
```
[**Run Code**](https://rextester.com/WDNQ21511)
