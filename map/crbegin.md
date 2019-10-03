# crbegin

**Description :** The function returns a constant reverse iterator referring to the last element in the map container. This crbegin() will point to that element that will come last according to the container’s sorting criterion. This function does not accept any parameter.

**Example** :

```cpp
// C++ program to Demonstrate map::crbegin() function 
#include <iostream>
#include <map>
using namespace std; 
  
int main() { 

    // initialize container 
    std::map<int, int> mp; 
  
    // insert elements in random order 
    mp.insert({ 1, 10 }); 
    mp.insert({ 3, 20 }); 
    mp.insert({ 2, 30 }); 
    mp.insert({ 4, 40 }); 
    mp.insert({ 6, 50 }); 
    mp.insert({ 5, 60 }); 
  
    // first store and then print the element return by crbegin()
    auto it = mp.crbegin();
        std::cout << it->first 
             << '\t' << it->second << '\n'; 
    
    return 0; 
} 
```

**[Run Code](https://rextester.com/YTVN17025)**
