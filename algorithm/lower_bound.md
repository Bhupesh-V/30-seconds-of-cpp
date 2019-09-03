# lower_bound

**Description** : Returns an iterator pointing to the first element in the range `[first, last)` which does not compare less than value passed.

**Example**:
```cpp
    std::vector<int> vec = {3, -1, 2, 5, 10, 6, 7, 4};
    // lower_bound requires a sorted input {-1, 2, 3, 4, 5, 6, 7, 10}
    std::sort(vec.begin(), vec.end());

    auto lowerBoundIt = std::lower_bound(vec.begin(), vec.end(), 5); 
    // prints 5 (first value element that is not smaller than 5 is 5)
    std::cout << "The lower bound element is " << *lowerBoundIt << '\n';

```
**[See Sample code](snippets/vector/lower_bound.cpp)**
**[Run Code](https://rextester.com/KFK22059)**