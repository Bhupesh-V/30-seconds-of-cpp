# minmax

**Description** : Compares values returning a pair of [smallest, greatest]. Can be used for values or containers.

**Example**:
```cpp
    int a = 7, b = 3;
    
    // returns pair <3, 7>
    auto minMax1 = std::minmax(a, b);
    std::cout << "Min is " << minMax1.first <<
                 " Max is " << minMax1.second << std::endl;

    // returns pair <-1, 10>
    auto minMax2 = std::minmax({-1, 3, 10, 0});
    std::cout << "Min is " << minMax2.first <<
                 " Max is " << minMax2.second << std::endl;

```
**[See Sample code](../snippets/algorithm/minmax.cpp)**
**[Run Code](https://rextester.com/AYBQP34022)**