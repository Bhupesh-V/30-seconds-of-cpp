# partial_sort

**Description** : Is an STL algorithm which rearranges elements such that the range [first, middle) contains the sorted middle - first smallest elements in the range [first, last).

The order of equal elements is not guaranteed to be preserved. The order of the remaining elements in the range [middle, last) is unspecified.

**Example**:
```cpp
#include <algorithm>
#include <vector>
#include <iostream>
 
int main()
{
    int n=3; //move 3 smallest elements to the beginning
    std::vector<int> v = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
 
    std::partial_sort(v.begin(), v.begin() + n, v.end());
    for (int a : v) {
        std::cout << a << " ";
    }
}
    
```
**[See Sample code](../snippets/algorithm/partial_sort.cpp)**
**[Run Code](https://rextester.com/GLP60885)**