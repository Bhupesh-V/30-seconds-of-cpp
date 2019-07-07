# end

**Description :** This function is used to return an iterator pointing to past the last element of the map container. 

**Example** :

```cpp
// Demonstrates end()
#include <iostream> 
#include <map> 
using namespace std; 
  
int main() { 
    // declaration of map container 
    map<char, int> mymap; 
    mymap['a'] = 1; 
    mymap['b'] = 2; 
    mymap['c'] = 3; 
  
    // using end() to print map 
    for (auto it = mymap.begin(); it != mymap.end(); ++it) 
        cout << it->first << " = "
             << it->second << '\n'; 
    return 0; 
} 
```
**[Run Code](https://rextester.com/AUMIKR77967)**
