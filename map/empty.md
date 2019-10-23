# begin

**Description :** This function returns whether the map is empty or not. It does not alter the state of the map.

**Example** :

```cpp
// Demonstrates empty() 
#include <iostream> 
#include <map> 
  
int main() { 
    // declaration of map container 
    std::map<char, int> mymap; 
    mymap['a'] = 1; 
    mymap['b'] = 2; 
    mymap['c'] = 3; 
  
    if(mymap.empty())
       std::cout<<"The map is empty\n"; 
    else
      std::cout<<"The map is not empty\n";
    return 0; 
} 
```
**[Run Code]( https://rextester.com/XUNR14023)**
