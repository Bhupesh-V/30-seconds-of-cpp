# copy_backward

**Description** : Copies elements from range defined by `[first, last)`, to another range ending at passed iterator. 
Elements are copied in reverse order (last element is copied first), but the relative order is kept.

**Example**:
```cpp
    std::vector<int> origin {1, 2, 3};
    // destination size is required to be at least the number of values to be copied
    std::vector<int> destination(origin.size());

    // Copy origin to destination, starting from the last element
    std::copy_backward(origin.begin(), origin.end(), destination.end());
    
    // destination is now {1, 2, 3}
    for (auto value : destination) {  
        std::cout << value << " "; 
    }
```
**[See Sample code](snippets/vector/copy_backward.cpp)**
**[Run Code](https://rextester.com/INZK42877)**