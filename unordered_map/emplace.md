# emplace

**Description :** The unordered_map::emplace() is a builtin function in C++ STL which inserts the key and its element in the unordered_map container. Returns a pair of an iterator and a bool that represents if the insertion took place or not. If the element already exists in the container it returns an iterator pointing to the already inserted element, and if the element does not exist it returns an iterator to the newly added container.

**Example** :

```cpp
#include <iostream>
#include <unordered_map>

int main() {
  
    // initialize unordered_map container
    std::unordered_map<int, int> map;
  
    // insert elements in random order
    map.emplace(2, 30);
    map.emplace(1, 40);
    map.emplace(2, 20);
    map.emplace(1, 50);
    map.emplace(4, 50);
  
    // prints the elements
    for (auto it = map.begin(); it != map.end(); ++it) {
        std::cout << it->first << "=>" << it->second << "\n";
    }
}
```
**[Run Code](https://rextester.com/QZFN72584)**
