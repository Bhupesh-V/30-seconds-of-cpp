# remove_copy

**Description** : Copies elements from the range `[first, last)`, to another range beginning at `d_first`, omitting the elements that matches a value.

**Example**:
```cpp
    std::vector<int> origin {3, 5, 3, 1, 2, 3};
    std::vector<int> destination;

    // Copy elements to destination that are not 3
    std::remove_copy(origin.begin(), //first
                     origin.end(),   //last
                     std::back_inserter(destination), //d_first 
                     3);
    
    // origin is still {3, 5, 3, 1, 2, 3}
    for (auto value : origin) { 
        std::cout << value << " "; 
    }
    std::cout << std::endl;

    // destination is {5, 1, 2}
    for (auto value : destination) { 
        std::cout << value << " "; 
    }
    std::cout << std::endl;
```
**[See Sample code](../snippets/algorithm/remove_copy.cpp)**
**[Run Code](https://rextester.com/OTU69518)**