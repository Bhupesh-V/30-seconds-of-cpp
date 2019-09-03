# max_element

**Description** : Returns an iterator to the greatest element in a range defined by `[first, last)`.

**Example**:
```cpp
    std::vector<int> vec = {3, -1, 2, 10, 4};

    auto greatestIt = std::max_element(vec.begin(), vec.end()); 
    // prints 10
    std::cout << "The greatest element is " << *greatestIt << '\n';

```
**[See Sample code](snippets/vector/max_element.cpp)**
**[Run Code](https://rextester.com/MYCU8700)**