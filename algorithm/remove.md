# remove

**Description** : Removes elementes from range `[first, last)` that matches a value and returns a new past-the-end iterator for the new end of range.

**Example**:
```cpp
    std::vector<int> v {3, 5, 3, 1, 2, 3};

    // removes all elements that are 3
    auto newEndIt = std::remove(v.begin(), v.end(), 3);
    
    // Erase elements from [newEndIt, v.end()]
    v.erase(newEndIt, v.end());

    // v is now {5, 1, 2}
    for (auto value : v) { 
        std::cout << value << " "; 
    }
```
**[See Sample code](../snippets/algorithm/remove.cpp)**
**[Run Code](https://rextester.com/WCZY78870)**