# merge

**Description** : Combines elements from sorted ranges `[first1, last1)` and `[first2, last2)`, to  a new range starting at passed argument.

**Example**:
```cpp
    std::vector<int> v1 {8, 2, 0, 4};
    std::vector<int> v2 {7, 3, 5};
    // the destination needs to fit all merged values
    std::vector<int> destination(v1.size() + v2.size());

    // merge requires sorted ranges
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());

    std::merge(v1.begin(), v1.end(), // first range 
               v2.begin(), v2.end(), // second range
               destination.begin());

    // destination is now {0, 2, 3, 4, 5, 7, 8}
    for (auto value : destination) { 
        std::cout << value << " "; 
    }
```
**[See Sample code](../snippets/algorithm/merge.cpp)**
**[Run Code](https://rextester.com/TPXUS57604)**