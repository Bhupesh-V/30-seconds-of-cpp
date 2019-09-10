# remove_if

**Description** : Removes elementes from range `[first, last)` that satisfy a condition and returns a new past-the-end iterator for the new end of range.

**Example**:
```cpp
    auto isOdd = [](int i) {
        return ((i%2) == 1);
    };

    std::vector<int> v {1, 2, 3, 4, 5};

    // Remove all elements that returns true for isOdd
    auto newEndIt = std::remove_if(v.begin(), v.end(), isOdd);
    
    // Erase elements from [newEndIt, v.end()]
    v.erase(newEndIt, v.end());

    // v is now {2, 4}
    for (auto value : v) { 
        std::cout << value << " "; 
    }
```
**[See Sample code](../snippets/algorithm/remove_if.cpp)**
**[Run Code](https://rextester.com/OWAN21750)**