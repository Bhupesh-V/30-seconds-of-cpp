# min_element

**Description** : Returns an iterator to the smallest element in a range defined by `[first, last)`.

**Example**:
```cpp
    std::vector<int> vec = {3, -1, 2, 10, 4};

    auto smallestIt = std::min_element(vec.begin(), vec.end()); 
    // prints -1
    std::cout << "The smallest element is " << *smallestIt << '\n';

```
**[See Sample code](snippets/algorithm/min_element.cpp)**
**[Run Code](https://rextester.com/ZVBA46979)**