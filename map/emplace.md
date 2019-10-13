# emplace

**Description :** The map::emplace() is a built-in function in C++ STL which inserts the key and its element in the map container. 
It effectively increases the container size by one. If the same key is emplaced more than once, the map stores the first element only as the map is a container which does not store multiple keys of the same value.;

**Example** :

```cpp
// Demonstrates emplace 
// map::emplace() function 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
  
    // initialize container 
    map<int, int> mp; 
  
    // insert elements in random order 
    mp.emplace(2, 30); 
    mp.emplace(1, 40); 
    mp.emplace(2, 20); 
    mp.emplace(1, 50); 
    mp.emplace(4, 50); 
  
    // prints the elements 
    cout << "\nThe map is : \n"; 
    cout << "KEY\tELEMENT\n"; 
    for (auto itr = mp.begin(); itr != mp.end(); itr++) 
        cout << itr->first << "\t" << itr->second << endl; 
  
    return 0; 
} 
```
**[Run Code](https://rextester.com/QCAF56535)**
