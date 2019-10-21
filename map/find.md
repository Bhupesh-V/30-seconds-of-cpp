# find

**Description :** The map::find() is a function which returns an iterator or a constant iterator that refers to the position where the key is present in the map. If the key is not present in the map the map::find() function returns the iterator which refers to map.end().
Syntax: map_name.find(key);

**Example** :

```cpp
// Demonstrates find() 
#include <iostream>
#include <map> 
  
int main() { 
    // declaration of map container
    std::map<char, int> mymap; 
    mymap['a'] = 1; 
    mymap['b'] = 2; 
    mymap['c'] = 3; 

    // using find() function
    if(mymap.find('a')!=mymap.end())
        std::cout<<"'"<<(mymap.find('a'))->first<<"' maps to "<<(mymap.find('a'))->second<<"\n";
    else
        std::cout<<"'a' not found\n";

    if(mymap.find('d')!=mymap.end())
        std::cout<<(mymap.find('d'))->first<<" maps to "<<(mymap.find('d'))->second<<"\n";
    else
        std::cout<<"'d' not found\n";
    
    return 0; 
}  
```
**[Run Code](https://rextester.com/ZNSU2247)**
