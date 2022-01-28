# emplace_hint
**Description :**  The function accepts three mandatory parameters i.e position, key, element in similar order. Where 'key' specifies the key to be inserted in the unordered_map container. 'element' specifies the element to the key which is to be inserted in the map container. 'position' specifies the position from where the search operation for the ordering is to be started, hence making the insertion faster. The function does not return anything. It works similarly to unordered_map emplace() function but if the user provides position accurately than it works faster then it

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
    mp.emplace_hint(mp.begin(), 1, 15); 
    mp.emplace_hint(mp.begin(), 1, 25); 
    mp.emplace_hint(mp.begin(), 2, 35); 
    mp.emplace_hint(mp.begin(), 2, 45); 
    mp.emplace_hint(mp.begin(), 3, 55); 
  
    // print the elements of map 
    std::cout << "\nThe unordered map is : \n"; 
    std::cout << "KEY\tELEMENT\n"; 
    for (auto itr = mp.begin(); itr != mp.end(); itr++){ 
        std::cout << itr->first << "\t" << itr->second << endl; 
    }
    return 0; 
} 
```
**[Run Code](https://rextester.com/UPBKI16919)**
