# copy_if

**Description** : Copies the elements in the range, defined by `[first, last)`, to another range beginning at passed argument, if the value satisfy specific criteria.

**Example**:
```cpp
    auto isOdd = [](int i) {
        return ((i%2) == 1);
    };

    std::vector<int> origin {1, 2, 3};
    std::vector<int> destination;

    // Will copy from origin [begin, end), to destination
    std::copy_if(origin.begin(), origin.end(), std::back_inserter(destination), isOdd);
    
    // destination is now {1, 3}
    for (auto value : destination) { 
        std::cout << value << " "; 
    }
```
**[See Sample code](snippets/algorithm/copy_if.cpp)**
**[Run Code](https://rextester.com/OMC23438)**