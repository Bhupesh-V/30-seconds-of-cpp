# emplace

**Description :** It inserts the key and its element in the map container and increases the container size by one. If the same key is emplaced more than once, the map stores the first element only as the map is a container which does not store multiple keys of the same value. The function does not return anything and accepts two parameters i.e. key and element.

**Example** :

```cpp
// C++ program to Demonstrate map::emplace() function 
#include <iostream>
#include <map>
using namespace std; 
  
int main() { 

    // initialize container 
    std::map<int, int> mp; 
  
    // insert elements in random order 
    mp.emplace(1, 20); 
    mp.emplace(1, 30); 
    mp.emplace(2, 40); 
    mp.emplace(2, 50); 
    mp.emplace(3, 60); 
  
    // print the elements of map 
    std::cout << "\nThe map is : \n"; 
    std::cout << "KEY\tELEMENT\n"; 
    for (auto itr = mp.begin(); itr != mp.end(); itr++){ 
        std::cout << itr->first << "\t" << itr->second << endl; 
    }
    return 0; 
} 
```

**[Run Code](https://rextester.com/BFKLQ90982)**
