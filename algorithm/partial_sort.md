# partial_sort

**Description :** This function is used to sort not the entire container, but only a sub-part of it.

**Example**:
```cpp
#include <iostream> 
#include <vector> 
#include <algorithm> 

int main() { 
    std::vector<int> v = { 1, 3, 1, 10, 3, 3, 7, 7, 8 }, i; 
  
    std::vector<int>::iterator ip; 
  
    // Using std::partial_sort just in 4 first numbers
    std::partial_sort(v.begin(), v.begin() + 4, v.end()); 
  
    // Displaying the vector after applying 
    // std::partial_sort 
    for (ip = v.begin(); ip != v.end(); ++ip) { 
        std::cout << *ip << " "; 
    } 
    std::cout<< "\n";
  
    return 0; 
} 
```

**[See Sample code](../snippets/algorithm/partial_sort.cpp)**
**[Run Code](https://rextester.com/JUYW11539)**
