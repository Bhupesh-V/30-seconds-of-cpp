# begin

**Description :** This function is used to return an iterator pointing to the first element of the map container. begin() function returns a bidirectional iterator to the first element of the container.

**Example** :

```cpp
// Demonstrates begin() 
#include <iostream> 
#include <map> 
  
int main() { 
    // declaration of map container 
    std::map<char, int> mymap; 
    mymap['a'] = 1; 
    mymap['b'] = 2; 
    mymap['c'] = 3; 
  
    // using begin() to print map 
    for (auto it = mymap.begin(); it != mymap.end(); ++it) 
        std::cout << it->first << " = "
             << it->second << '\n'; 
    return 0; 
} 
```
**[Run Code](https://rextester.com/AUMIKR77967)**
