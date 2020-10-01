# find

**Description :** This function is used to return an constant iterator or a simple iterator which is stored in the key position, in other words, it find the value that represent the key position, if the key isn't present in the map, it return a iterator map::end.

**Example** :

```cpp
// Demonstrates find() 
#include <iostream> 
#include <map> 
  
int main() { 
    // declaration of map container 
    std::map<char, int> mymap; 
    mymap['a'] = 1; 
    mymap['b'] = 2; 
    mymap['c'] = 3; 
  
    // using find() to find the value stored in 'b' key 
    std::cout << "mymap['b'] = " << mymap.find('b')->second << '\n';
    return 0; 
} 
```
**[Run Code](https://rextester.com/WIWEO7836)**
