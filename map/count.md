# count

**Description :** The map::count() is a function which returns 1 if the element with key K is present in the map container. It returns 0 if the element with key K is not present in the container.
Syntax: map_name.count(key k);

**Example** :

```cpp
// Demonstrates count() 
#include <iostream>
#include <map> 
  
int main() { 
    // declaration of map container
    std::map<char, int> mymap; 
    mymap['a'] = 1; 
    mymap['b'] = 2; 
    mymap['c'] = 3; 

    // using count() function
    std::cout<<mymap.count('a')<<endl;
    std::cout<<mymap.count('b')<<endl;
    std::cout<<mymap.count('d')<<endl;

    return 0; 
} 
```
**[Run Code](https://rextester.com/GONQYE7843)**
