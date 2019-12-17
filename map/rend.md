# rend

**Description :** It returns a reverse iterator pointing to the theoretical element right before the first element in the map container. Reverse Iterators are used to traverse a containter in reverse order, and incremementing it means moving towards the beginning of a map.

**Example :**

```cpp
#include <iostream> 
#include <map> 
  
int main() { 
  
    std::map<char, int> M = { 
        { 'a', 1 }, 
        { 'b', 2 }, 
        { 'c', 3 }, 
        { 'd', 4 }, 
        { 'e', 5 }, 
    }; 
  
    std::cout << "Printing the map in reverse: "<< std::endl; 
    std::map<char, int>::reverse_iterator i;
    //using rend to terminate the loop
    for (i = M.rbegin(); i != M.rend(); ++i) {
        std::cout << i->first 
             << " " << i->second 
             << std::endl; 
    }
    return 0; 
} 
```

**[Run Code](https://rextester.com/XAO1116)**
