#clear

description:
clear() function is used to remove all the elements from the map container and thus leaving it’s size 0.

**example**
```
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    
    map<int, string> map1, map2; 
      
    // Inserting values 
    map1[1] = "India"; 
    map1[2] = "Nepal"; 
    map1[3] = "Sri Lanka"; 
    map1[4] = "Myanmar"; 
      
    // Print the size of map 
    cout<< "Map size before running function: \n"; 
    cout << "map1 size = " << map1.size() << endl; 
    cout << "map2 size = " << map2.size() << endl;; 
      
    // Deleting the map elements 
    map1.clear(); 
    map2.clear(); 
      
    // Print the size of map 
    cout<< "Map size after running function: \n"; 
    cout << "map1 size = " << map1.size() << endl; 
    cout << "map2 size = " << map2.size(); 
    return 0; 
} 
```
**output**
```
Map size before running function: 
map1 size = 4
map2 size = 0
Map size after running function: 
map1 size = 0
map2 size = 0
```
