# copy_n

**Description** : Copies n elements starting in the ranged passed, to another range beginning at passed argument.

**Example**:
```cpp
    std::vector<int> origin {1, 2, 3};
    std::vector<int> destination;

    // Will copy 2 values starting at origin.begin, to destination
    std::copy_n(origin.begin(), 2, std::back_inserter(destination));
    
    // destination is now {1, 2}
    for (auto value : destination) { 
        std::cout << value << " "; 
    }
```
**[See Sample code](../snippets/algorithm/copy_n.cpp)**
**[Run Code](https://rextester.com/GXR34835)**