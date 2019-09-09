# lower_bound

**Description** : Returns the bounds of the subrange that includes all the elements of the range [`[first, last)` with values equivalent to passed value.

**Example**:
```cpp
    std::vector<int> vec = {1, 2, 3, 1, 6, 1};
    // equal_range requires a sorted input {1, 1, 1, 2, 3, 6}
    std::sort(vec.begin(), vec.end());

    // returns pair of iterators for positions 0 and 2:
    // {1, 1, 1, 2, 3, 6}
    //  ^        ^
    auto equalRangeIt = std::equal_range(vec.begin(), vec.end(), 1); 
    for (auto it = equalRangeIt.first; it != equalRangeIt.second; ++it) {
        std::cout << " Position: " << (it - vec.begin()) << " = " << *it << std::endl;
    }

```
**[See Sample code](../snippets/algorithm/equal_range.cpp)**
**[Run Code](https://rextester.com/ZYGGE30271)**