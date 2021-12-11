# is_heap_until

**Description :** This function returns the upper bound of the largest range (beginning at `first`) which is a _max heap_. That is, the last iterator `it` for which the range [`first`, `it`) is a _max heap_.

**Example :**

```cpp
#include <iostream>
#include <algorithm>
#include <vector>
 
int main()
{
    // Initialize vector with arbitrary values
    std::vector<int> vec { 13, 8, 17, 7, 2, 25, 20 };
 
    // Obtain a max heap by rearranging values
    std::make_heap(vec.begin(), vec.end());
 
    // Modify heap
    vec.push_back(3);
    // Mess up heap
    vec.push_back(19);
 
    // Obtain iterator to last element of heap starting at index 0
    auto heap_end = std::is_heap_until(vec.begin(), vec.end());
 
    // Print all values of vec
    std::cout << "All values of vec: ";
    for (auto i : vec) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
 
    // Print the largest max heap (starting from the very first item)
    std::cout << "Largest max heap:  ";
    for (auto i = vec.begin(); i != heap_end; ++i) {
        std::cout << *i << ' ';
    }
    std::cout << '\n';
}
```

**[Run Code](https://rextester.com/AZLE57032)**
