# Swap

**Description :** The map::swap() function exchanges the content of two maps of same type, although the size may differ.
Syntax: std::swap(first_map, second_map);

**Example**:

```cpp
// Demonstrates swap()
#include<iostream>
#include<map>

int main(){
    std::map<int, char> map1, map2;
    map1[1] = 'a';
    map1[2] = 'b';
    map1[3] = 'c';
    map1[4] = 'd';

    map2[5] = 'x';
    map2[6] = 'y';
    map2[7] = 'z';

    // swap elements of map
    map1.swap(map2);

    std::cout << "after swapping"<<std::endl;

    // print the elements of the map
    std::cout << "map1 contains: ";
    for (std::map<int, char>::iterator i = map1.begin(); i != map1.end(); i++){
        std::cout << i->first << " => " << i->second << ", ";
    }
    std::cout << std::endl;

    std::cout << "map2 contains: ";
    for (std::map<int, char>::iterator i = map2.begin(); i != map2.end(); i++){
        std::cout << i->first << " => " << i->second << ", ";
    }
    std::cout << std::endl;
    return 0;
}
```
**[Run Code](https://rextester.com/HYD95166)**
