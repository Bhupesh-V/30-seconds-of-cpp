# emplace_hint

**Description :** 
  * Inserts the key and its element in the unordered_map with a given hint. The hint provided does not affect the position to be entered. It inserts in the same order         which is followed by the container. 
  * Only inserts unique key and avoids creating object for exisitng key.

**Example** :

```cpp
/*
    Author : parth_s
    Date : 03/10/2022
    Time : 02:12
    Description : Implementation of emplace_hint method in an unordered_map in C++
*/

#include <iostream>
#include<string>
#include<unordered_map>

int main() {
  
    // initialize unordered_map container
    std::unordered_map<int, std::string> mp;
  
    // inserting elements in random order
    mp.emplace_hint(mp.begin(), 3, "three");
    mp.emplace_hint(mp.begin(), 1, "one");
    mp.emplace_hint(mp.begin(), 2, "two");

        
    // printing the map elements 
    std::cout<<"The unordered_map elements are:"<<"\n";
    std::cout<<"key\telement"<<"\n";
    
    for(auto itr = mp.begin(); itr!=mp.end(); itr++){
        std::cout<<itr->first<<"\t";
        std::cout<<itr->second<<"\n";    
    }
    
    return 1;
}
```
**[Run Code](https://rextester.com/AULM68896)**
