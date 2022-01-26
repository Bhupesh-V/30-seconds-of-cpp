
# at

**Description :**   at() function is used to return a reference to the value of the element with key _k_. If the position is not present in the map, it throws exception of type _out_of_range_
  
**Example** :

```cpp
#include <iostream>
#include <unordered_map>

//demonstrates at() of unordered_map
int main()
{
    // initializes unordered_map
    std::unordered_map<std::string,int> unorderedmap;
    unorderedmap["John"] = 15;
    unorderedmap["Amy"] = 20;
    unorderedmap["Reginald"] = 67;
    
    // uses at() to alter values using the keys within the unordered_map
    unorderedmap.at("John") = 16;
    unorderedmap.at("Amy") += 3;
    unorderedmap.at("Reginald") = unorderedmap.at("Amy") + 60;
    
    //prints out the unordered_map by iterating through it using range based loop
    for(auto& it : unorderedmap){
        std::cout << it.first << ": " << it.second << std::endl;
    }

    return 0;
}
```
**[Run Code](https://rextester.com/FBML77364)**
