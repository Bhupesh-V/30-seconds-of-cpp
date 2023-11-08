# sort_heap

**Description** : Is a function that sorts a heap within the range specified by start and end.

**Example**:

```cpp
#include <iostream>     
#include <algorithm>   
#include <vector>       

int main() 
{ 
    std::vector<int> v = {8, 6, 2, 1, 5, 10};  
   
    // make_heap transform a vector to a heap
    std::make_heap(v.begin(), v.end()); 
   
    std::cout << "Heap:   "; 
    for (const auto &i : v) { 
     std::cout << i << ' '; 
    }    
   
    std::sort_heap(v.begin(), v.end()); 
   
    std::cout <<std::endl<< "Now sorted:   "; 
    for (const auto &i : v) {                                                    
        std::cout << i << ' '; 
    }    
    std::cout << std::endl; 
} 
```

**[See Sample code](../snippets/algorithm/sort_heap.cpp)**
**[Run Code](https://rextester.com/MUIV54258)**
