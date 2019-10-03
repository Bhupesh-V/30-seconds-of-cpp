# insert

**Description :** This function is used to insert elements with a particular key in the unordered_map container. This function increases container size by 1. This function does not insert duplicate entries. There are following variant of this function. All are overloaded functions..

**Example** :

```cpp
// Demonstrates insert() 
#include <iostream>
#include <unordered_map>

int main(){
    //declares an empty map. O(1)
    std::unordered_map<char, int> mymap; 
    
    // inserting in to unordered_map with O(1) time on average
    mymap.insert({'A', 1});
    mymap.insert({'b', 2});
    mymap.insert({'c', 3});
  
    //print unordered_map elements
    for (auto it = mymap.begin(); it != mymap.end(); ++it){ 
        std::cout << it->first << " = "<< it->second << '\n'; 
    }
    return 0;
}

```
**[Run Code](https://rextester.com/LATVH60012)**
