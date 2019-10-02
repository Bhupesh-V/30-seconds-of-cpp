# insert

**Description** : Showcase std::vector::insert to insert numbers into a vector.

**Example**:
```cpp
    //setup example vector
    std::vector<int> example = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    print(example);
    
    //insert with 2 inputs.
    example.insert(example.begin() + insertPosition, number);
    print(example);
    
    //reset example vector
    example = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    print(example);
    
    //insert with 3 inputs.
    example.insert(example.begin() + insertPosition, repeats, number);
    print(example);
```

**[See Sample Code](../snippets/vector/insert.cpp)**<br />
**[Run Code](https://rextester.com/FPCD28596)**