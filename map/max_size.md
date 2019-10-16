# max_size

**Description :** This function returns the maximum number of values a map container can hold. 
**Example** :

```cpp
// Demonstrates max_size() 
#include <iostream> 
#include <map> 
  
int main() { 
    // declaration of map container 
    std::map<char, int> mymap; 
  
    // using max_size to maximum size of map container 
    std::cout << mymap.max_size() << std::endl;
    return 0; 
} 
```
