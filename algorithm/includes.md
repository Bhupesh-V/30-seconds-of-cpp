# includes

**Description** : Test whether sorted range `[first1, last1)` contains (includes) all elements from another sorted range `[first2, last2)`.

**Example**:
```cpp
    std::vector<int> v1 {8, 2, 0, 4};
    std::vector<int> v2 {2, 0};
    std::vector<int> v3 {1, 0};

    // includes requires sorted ranges
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());
    std::sort(v3.begin(), v3.end());

    auto v1ContainsV2 = std::includes(v1.begin(), v1.end(),  // first range 
                                      v2.begin(), v2.end()); // second range
    // prints 1/true
    std::cout << " v1 contains v2? " << v1ContainsV2 << std::endl;

    auto v1ContainsV3 = std::includes(v1.begin(), v1.end(),  // first range 
                                      v3.begin(), v3.end()); // second range
    // prints 0/false
    std::cout << " v1 contains v3? " << v1ContainsV3 << std::endl;
   
```
**[See Sample code](../snippets/algorithm/includes.cpp)**
**[Run Code](https://rextester.com/MMPQ67900)**