# set_intersection

**Description** : Constructs a sorted range beginning in the location passed by result with the intersection of the two sorted ranges `[first1, last1)` and `[first2, last2)`.

**Example**:
```cpp
    std::vector<int> v1 {3, 1, 5};
    std::vector<int> v2 {1, 0};

    // the destination needs to fit all merged values, we'll prune the extra elements later
    std::vector<int> destination(v1.size() + v2.size());

    // set_union requires sorted ranges
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());

    // returns iterator to the end of the constructed range
    auto it = std::set_intersection(v1.begin(), v1.end(),  // first range 
                                    v2.begin(), v2.end(),  // second range
                                    destination.begin());

    // prune extra values
    destination.resize(it - destination.begin()); 

    // destination is now {1}
    for (auto value : destination) { 
        std::cout << value << " "; 
    }
   
```
**[See Sample code](snippets/algorithm/set_intersecton.cpp)**
**[Run Code](https://rextester.com/LEHJ94279)**