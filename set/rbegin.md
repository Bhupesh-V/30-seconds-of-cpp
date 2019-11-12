# rbegin

**Description :**
    This method returns an iterator pointing to the last element in the set.

**Example :**
```cpp

#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
  
    int arr[] = { 14, 12, 15, 11, 10 }; 
  
    // initializes the set from an array 
    set<int> s(arr, arr + 5); 
  
    set<int>::reverse_iterator rit; 
  
    // prints all elements in reverse order 
    std::cout << *(s.rbegin()) <<std::endl; 
  
    return 0; 
} 

```

**[Run Code](https://ideone.com/z0iUbJ)**