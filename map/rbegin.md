# rbegin

**Description :** It returns a reverse iterator which points to the last element of the map. The reverse iterator iterates in reverse order and incrementing it means moving towards beginning of map.

**Example** :

```cpp
// C++ Program to illustrate map::rbegin() method 
#include <iostream> 
#include <map> 
  
int main() { 
  
    std::map<char, int> mp = { 
        { 'a', 1 }, 
        { 'b', 2 }, 
        { 'c', 3 }, 
        { 'd', 4 }, 
        { 'e', 5 }, 
    }; 
  
    std::cout << "Map contains following elements in reverse order"<< std::endl; 
    //rbegin 
    for (auto i = mp.rbegin(); i != mp.rend(); ++i) 
        std::cout << i->first 
             << " = " << i->second 
             << std::endl; 
  
    return 0; 
} 
```

**[Run Code](https://rextester.com/EFAJ1452)**
