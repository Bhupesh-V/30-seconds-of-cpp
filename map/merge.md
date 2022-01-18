# merge

**Description** : This fuction is used to exctract each element in source and insert it into **this* using the comparison object of **this*. If there is an element in **this* with key equivalent to the key of an element from source, then that element is not extracted from source. No elements are copied or moved, only the internal pointers of the container nodes are repointed. All pointers and references to the transferred elements remain valid, but now refer into *this, not into source.

**Example**:
```cpp
    // declaration of 2 maps that we want to merge
    std::map<int, std::string> mapA {{1, "apple"}, {5, "pear"}, {10, "banana"}};
    std::map<int, std::string> mapB {{2, "carrot"}, {4, "broccoli"}, {5, "potato"}, {8, "spinach"}};
    
    // declaration of an empty map  
    std::map<int, std::string> mapC;
    
    // merging mapA into the empty mapC
    mapC.merge(mapA);
    
    // mapA is now empty
    std::cout << "mapA.size(): " << mapA.size() << '\n';
    
    // merging mapB into mapC
    mapC.merge(mapB);
    
    // mapB is not empty because there was already an element with key '5' in mapC
    std::cout << "mapB.size(): " << mapB.size() << '\n';
    std::cout << "mapB.at(5): " << mapB.at(5) << '\n';
    
    // printing the final map
    for(auto const &kv: mapC){
    std::cout << kv.first << ", " << kv.second << '\n';
    }
```
**[Run Code](https://wandbox.org/permlink/zgCncad7KFQCrleM)**