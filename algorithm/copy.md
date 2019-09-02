# copy

**Description** : Copies the elements in the range, defined by [first, last), to another range beginning at d_first (passed as argument).

**Example**:
```cpp
    std::vector<int> origin {1, 2, 3};
    std::vector<int> destination;
    
    std::copy(origin.begin(), original.end(), std::back_inserter(destination);
    // destination is now {1, 2, 3}
    for (auto value : destination) { 
        cout << value << " "; 
    } 
```
**[Run Code](https://rextester.com/DPG88459)**