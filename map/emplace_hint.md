# emplace_hint

**Description :** The function accepts three mandatory parameters i.e position, key, element in similar order. 'key' specifies the value to be inserted in the map container. 'element' specifies the element to the key which is to be inserted in the map container. 'position' specifies the position from where the search operation for the ordering is to be started, hence making the insertion faster.

**Example** :

```cpp
// C++ program to Demonstrate map::emplace_hint() function 
#include <iostream>
#include <map>
using namespace std; 
  
int main() { 

    // initialize container 
    std::map<int, int> mp; 
  
    // insert elements in random order 
    mp.emplace_hint(mp.begin(), 2, 30); // faster 
    mp.emplace_hint(mp.begin(), 1, 40); // faster 
    mp.emplace_hint(mp.begin(), 3, 60); // slower 
  
    // print the elements of map 
    std::cout << "\nThe map is : \n"; 
    std::cout << "KEY\tELEMENT\n"; 
    for (auto itr = mp.begin(); itr != mp.end(); itr++){ 
        std::cout << itr->first << "\t" << itr->second << endl; 
    }
    return 0; 
} 
```

**[Run Code](https://rextester.com/PAKW84753)**
