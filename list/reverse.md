# reverse

**Description** : This function is used to reverse the order of elements in the list.
**Syntax :** listname.reverse()

**Example**:
```cpp
// Demonstrates reverse() function
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // Creating a list 
    list<int> l; 
  
    // Adding elements to the list 
    l.push_back(1); 
    l.push_back(2); 
    l.push_back(3); 
  
    // Initial list: 
    cout << "Initial List: "; 
    for (auto i = l.begin(); i != l.end(); i++) 
        cout << *i << " "; 
  
    // Reversing the list 
    l.reverse(); 
  
    // List after reversing the order of elements 
    cout << "\nAfter reversing: "; 
    for (auto i = l.begin(); i != l.end(); i++) 
        cout << *i << " "; 
  
    return 0; 
} 

```
**[Run Code](https://rextester.com/BLE99775)**

