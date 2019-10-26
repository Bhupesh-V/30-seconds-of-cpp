# data

**Description**:  
 Returns a direct pointer to the memory array used internally by the vector to store its elements.

**Example**:
```cpp
    //creating a vector of 5 elements
    std::vector<int> vec{10, 20, 30, 40, 50};

    //setting the pointer to first element
    int* pos = vec.data(); 
  
    // printing the vector using pointer created above
    cout << "Vector Elements: "; 
    for (int i = 0; i < vec.size(); ++i) 
        cout << *pos++ << " ";
```

**[See Sample Code](../snippets/vector/data.cpp)**
**[Run Code](https://rextester.com/YKPIC14518)**
