# is_heap

**Description :** The C++ function `std::is_heap` returns `true` if the elements in the range `[first, last)` form a _max heap_, such as is constructed by _make_heap_, and `false` otherwise.
```cpp
template <class RandomAccessIterator>
bool is_heap (RandomAccessIterator first, RandomAccessIterator last);
```
**Example :**

```cpp
#include <algorithm>
#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int> v { 8, 6, 7, 5, 3, 0, 9 };
 
    std::cout << "Intial value for v: ";
    for (auto i : v) std::cout << i << ' ';
    std::cout << '\n';
 
    if (!std::is_heap(v.begin(), v.end())) {
        std::cout << "Creating heap:\n";
        std::make_heap(v.begin(), v.end());
    }
 
    std::cout << "After call to make_heap, v: ";
    for (auto i : v) std::cout << i << ' ';
    std::cout << '\n';
}
```

**[Run Code](https://rextester.com/CWLO88991)**
