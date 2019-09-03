# minmax_element

**Description** : Compares values in a range defined by `[first, last)` returning a pair of [smallest, greatest]. 

**Example**:
```cpp
    std::vector<int> vec = {3, -1, 2, 10, 4};

    auto minMaxPair = std::minmax_element(vec.begin(), vec.end()); 
    // returns pair <-1, 10>
    std::cout << "Min is " << *minMaxPair.first <<
                 " Max is " << *minMaxPair.second << std::endl;

```
**[See Sample code](snippets/vector/minmax_element.cpp)**
**[Run Code](https://rextester.com/NSPL12489)**