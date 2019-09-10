# replace_copy

**Description** : Copies elements from the range `[first, last)`, to another range beginning at `d_first`, replacing the elements that matches `old_value` by a `new_value`.

**Example**:
```cpp
    std::vector<int> origin {3, 5, 3, 1, 2, 3};
    std::vector<int> destination;

    // Copy elements to destination replacing elements that are 3 by 0
    std::replace_copy(origin.begin(),                  //first
                      origin.end(),                    //last
                      std::back_inserter(destination), //d_first 
                      3,                               //old_value
                      0                                //new_value
                      );
    
    // origin is still {3, 5, 3, 1, 2, 3}
    for (auto value : origin) { 
        std::cout << value << " "; 
    }
    std::cout << std::endl;

    // destination is {0, 5, 0, 1, 2, 0}
    for (auto value : destination) { 
        std::cout << value << " "; 
    }
    std::cout << std::endl;
```
**[See Sample code](../snippets/algorithm/replace_copy.cpp)**
**[Run Code](https://rextester.com/VQNU37190)**