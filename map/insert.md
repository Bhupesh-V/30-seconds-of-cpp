# insert

**Description :** The function map.insert() is used to insert a particular key-value pair in the map container.
Syntax: mymap.insert({"key","value"});

**Example** :

```cpp
// Demonstrates begin() 
#include <iostream> 
#include <map> 
using namespace std; 
  
int main() { 
    // declaration of map container and inserting elements
    std::map<char, int> mymap; 
    mymap.insert({'a',1});
    mymap.insert({'b',2});
    mymap.insert({'c',3});

    // printing the contents of the map
    for (auto key2Value : mymap) {
        std::cout << key2Value.first << " = " << key2Value.second << '\n';  
    }
    return 0; 
} 
```
**[Run Code](https://rextester.com/SSANI89056)**
