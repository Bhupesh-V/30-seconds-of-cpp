# contains

**Description :**  This method is available since C++20 and checks if there is an element with a specific key in the map container. Returns true if an element is found, otherwise returns false.
  
**Example** :

```cpp
// C++ code to demonstrate working of map.contains()
#include <iostream>
#include <map>

int main(){
    // create 'example' map where 1 and 2 are keys, while a and b are values
    std::map<int,char> example = {{1,'a'},{2,'b'}};
    int key = 2;

    // contains() will return true if the key was found, false if not
    if(example.contains(key)){
        std::cout << "Found key " << key << " with value " << example[key] << '\n';
    }
    else{
        std::cout << "Key " << key << " not found in map\n";
    }

    return 0;
}
```
**[Run Code](https://rextester.com/IYJR76647)**