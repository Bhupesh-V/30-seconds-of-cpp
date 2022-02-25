# rend

**Description :**
    This method prints each element in a set of numbers in reverse order until the end is encountered.

**Example :**
```cpp

#include<iostream>
#include<set>

int main() { 
    // Create a set object holding integers
    std::set<int> s{ 14, 12, 15, 11, 10 };
  
    std::set<int>::reverse_iterator rit; 
  
    // prints all elements in reverse order 
    for (rit = s.rbegin(); rit != s.rend(); rit++) { 
        std::cout << *rit << " "; 
    }
    
    return 0; 
} 

```

**[See Sample code](../snippets/set/rend.cpp)**
**[Run Code](https://ideone.com/2v9llt)**