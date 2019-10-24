# swap

**Description** :
- Computes the differences between the second and the first of each adjacent pair of elements of the range [first, last) and writes them to the range beginning at d_first + 1. An unmodified copy of *first is written to *d_first

**Example**
```cpp
	#include <numeric>
#include <vector>
#include <array>
#include <iostream>
#include <functional>
#include <iterator>
 
int main()
{
    // Default implementation - the difference b/w two adjacent items
 
    std::vector v {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    std::adjacent_difference(v.begin(), v.end(), v.begin());
 
    for (auto n : v)
        std::cout << n << ' ';
 
    std::cout << '\n';
 
    // Fibonacci 
 
    std::array<int, 10> a {1};
 
    adjacent_difference(begin(a), std::prev(end(a)), std::next(begin(a)), std::plus<> {});
 
    copy(begin(a), end(a), std::ostream_iterator<int> {std::cout, " "});
}

```
**[See Sample code](../snippets/algorithm/adjacent_difference.cpp)**
**[Run Code](https://coliru.stacked-crooked.com/view?id=5b2288a93b77b464)**
