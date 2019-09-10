# replace_if

**Description** : Replaces all elements satisfying condition with a `new_value` in the range `[first, last)`.

**Example**:
```cpp
    auto isOdd = [](int i) {
        return ((i%2) == 1);
    };

    std::vector<int> origin {1, 2, 3, 4, 5};

    // replaces values for which isOdd returns true by 0
    std::replace(origin.begin(), //first
                 origin.end(),   //last
                 isOdd,          //condition 
                 0               //new_value 
                 );
    
    // origin is now {0, 2, 0, 4, 0}
    for (auto value : origin) { 
        std::cout << value << " "; 
    }
```
**[See Sample code](../snippets/algorithm/replace_if.cpp)**
**[Run Code](https://rextester.com/AWLX69783)**