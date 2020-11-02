# rbegin

**Description :**
    This method returns an iterator pointing to the last element in the set.

**Example :**
```cpp

#include<iostream>
#include<set>

int main() {
    // Create a set object holding integers
    std::set<int> s{ 14, 12, 15, 11, 10 };
  
    std::set<int>::reverse_iterator rit = s.rbegin(); 
  
    // prints all elements in reverse order
    for (; rit != s.rend(); ++rit) {
    	std::cout << *rit <<std::endl; 
    }
    
    return 0; 
} 

```

**[See Sample code](../snippets/set/rbegin.cpp)**
**[Run Code](https://ideone.com/EhQVkb)**