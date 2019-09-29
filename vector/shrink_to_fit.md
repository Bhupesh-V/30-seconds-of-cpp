# shrink_to_fit

**Description** : Reduces the capacity of the container to fit its size.

**Example**:
```cpp
    //create a vector of 5 elements
    std::vector<int> myvec{10, 20, 30, 40, 50};

    //adding a sixth element, vector's capacity will increase for future insertions
    myvec.push_back(60);

    //output the inital capacity
    std::cout << "Initial capacity is: " << myvec.capacity();

    //output the shrunk capacity
    myvec.shrink_to_fit();

    std::cout << "Shrunk capacity is: " << myvec.capacity();
```

**[See Sample Code](../snippets/vector/shrink_to_fit.cpp)**
**[Run Code](https://rextester.com/PQZOBU11154)**
