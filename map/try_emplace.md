# try_emplace

**Description :** Inserts a key and its element in the map container only if the key does not already exist. If the key is already present in the map, this function does nothing. The function takes either two arguments ('key' and 'element') or three arguments ('position', 'key' and 'element'). Thus it behaves exactly like [emplace](emplace.md) in the two-argument case or like [emplace_hint](emplace_hint.md) in the three-argument case.  
This function was introduced with C++17.

**Example** :

```cpp
// C++ program to Demonstrate map::try_emplace() function 
#include <iostream>
#include <map>
using namespace std; 
  
int main() { 

    // initialize container 
    std::map<int, int> mp; 
  
    // insert elements in random order 
    mp.try_emplace(2, 20); // does insert
    mp.try_emplace(2, 30); // does not insert 
    mp.try_emplace(mp.begin(), 1, 40); // does fast insert 
    mp.try_emplace(mp.begin(), 3, 60); // does slow insert 
    mp.try_emplace(mp.begin(), 2, 50); // does not insert 
  
    // print the elements of map 
    std::cout << "\nThe map is : \n"; 
    std::cout << "KEY\tELEMENT\n"; 
    for (auto itr = mp.begin(); itr != mp.end(); itr++){ 
        std::cout << itr->first << "\t" << itr->second << endl; 
    }
    return 0; 
} 
```

**[Run Code](https://rextester.com/WBJZ63078)**
