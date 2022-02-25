# emplace
**Description :**  It inserts the key and its element in the unordered_map container and increases the container size by one. If the same key is emplaced more than once, the map stores the first element only as the map is a container which does not store multiple keys of the same value. The function accepts two parameters i.e. key and element and It returns a pair of an iterator and a bool. If the element already exists in unordered_map, it returns an iterator that pointing to the already inserted element in map and if the element does not exist than it returns an iterator to newly added container and The bool represents whether the insertion took place or not.

**Example** :

```cpp 
// C++ program to Demonstrate unordered_map::emplace() function 
#include <iostream>
#include <unordered_map>
using namespace std; 
  
int main() { 

    // initialize container 
    std::unordered_map<int, int> mp; 
  
    // insert elements in random order 
    mp.emplace(1, 15); 
    mp.emplace(1, 25); 
    mp.emplace(2, 35); 
    mp.emplace(2, 45); 
    mp.emplace(3, 55); 
  
    // print the elements of map 
    std::cout << "\nThe unordered map is : \n"; 
    std::cout << "KEY\tELEMENT\n"; 
    for (auto itr = mp.begin(); itr != mp.end(); itr++){ 
        std::cout << itr->first << "\t" << itr->second << endl; 
    }
    return 0; 
} 
```
**[Run Code](https://rextester.com/QMPVM12832)**
