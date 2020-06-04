# replace_copy_if

**Description** : Copies elements from the range `[first, last)`, to another range beginning at `d_first`, replacing the elements which satisfy specific criteria by a `new_value`.

**Example**:
```cpp
    auto isOdd = [](int i) {
        return ((i%2) == 1);
    };

    std::vector<int> origin {1, 2, 3, 4, 5};
    std::vector<int> destination;

    // Copy elements to destination replacing elements that return true for isOdd by 0
    std::replace_copy_if(origin.begin(), origin.end(), std::back_inserter(destination), isOdd, 0);                           
    
    // origin is still {1, 2, 3, 4, 5}
    for (auto value : origin) { 
        std::cout << value << " "; 
    }
    std::cout << std::endl;

    // destination is {0, 2, 0, 4, 0}
    for (auto value : destination) { 
        std::cout << value << " "; 
    }
    std::cout << std::endl;
```
**[See Sample code](../snippets/algorithm/replace_copy_if.cpp)**
**[Run Code](https://rextester.com/ZAAX85552)**
