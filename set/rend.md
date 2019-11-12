# rend

**Description :**
    This method returns size of the set of numbers until the end is encountered.

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
    for (rit = s.rbegin(); rit != s.rend(); rit++) 
        cout << *rit << " "; 
  
    return 0; 
} 

```

**[Run Code](https://ideone.com/z0iUbJ)**