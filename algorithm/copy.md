# copy

**Description** : Copies the elements in the range, defined by `[first, last)`, to another range beginning at passed argument.

**Example**:
```cpp
    std::vector<int> origin {1, 2, 3};
    std::vector<int> destination;

    // Will copy from origin [begin, end), to destination
    std::copy(origin.begin(), origin.end(), std::back_inserter(destination));
    
    // destination is now {1, 2, 3}
    for (auto value : destination) { 
        std::cout << value << " "; 
    }
```
**[See Sample code](snippets/vector/copy.cpp)**
**[Run Code](https://rextester.com/DPG88459)**