# capacity

**Description** : returns the size of the storage space currently allocated for the vector, expressed in terms of elements.

**Example**:
```cpp
    // Initialize vector
    std::vector<int> vector1;

    // Assign some vaues in the vector:
    for (int i=0; i<100; i++) 
        vector1.push_back(i);

    // Function to get the capacity of the vector
    std::cout << "Capacity: " << (int) vector1.capacity() << '\n';

```
**[See Sample code](../snippets/vector/capacity.cpp)**
**[Run Code](https://rextester.com/FOMU97082)**