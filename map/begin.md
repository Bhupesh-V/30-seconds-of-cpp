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
    std::map<char,int>::iterator it = mymap.begin(); //this is the verbose way of declaring an iterator to the map
                                                     //alternately you could use auto it = mymap.begin();
    for (it; it != mymap.end(); ++it) 
        std::cout << it->first << " = "
             << it->second << '\n'; 
    return 0; 
} 
```
**[Run Code](https://rextester.com/SNK66848)**
