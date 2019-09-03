# upper_bound

**Description** : Returns an iterator pointing to the first element in the range `[first, last)` which is greater than passed value.

**Example**:
```cpp
    std::vector<int> vec = {3, -1, 2, 5, 10, 6, 7, 4};
    // upper_bound requires a sorted input {-1, 2, 3, 4, 5, 6, 7, 10}
    std::sort(vec.begin(), vec.end());

    auto upperBoundIt = std::upper_bound(vec.begin(), vec.end(), 5); 
    // prints 6 (first value element that is greater than 5 is 6)
    std::cout << "The lower bound element is " << *upperBoundIt << '\n';

```
**[See Sample code](snippets/vector/upper_bound.cpp)**
**[Run Code](https://rextester.com/DAN7877)**