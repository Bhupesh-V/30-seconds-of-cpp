# emplace

**Description**: Places an element in the vector at the specified position

**Example**:
```cpp
    //creating a vector of 5 elements
    std::vector<int> vector1{10, 20, 30, 40, 50};

    //function to add an element at the beginning and the end
    vector1.emplace(vector1.begin(), -10);
    vector1.emplace(vector1.end(), 60);
```

**[See Sample Code](../snippets/vector/emplace.cpp)**
**[Run Code](https://rextester.com/CDL77568)**
