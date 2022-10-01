# swap

**Description :** The unordered_map::swap() function is used to swap the content of two unordered_map containers

**Example** :

```cpp
#include <iostream>
#include <unordered_map>

int main () {
    //declaration of unordered_map containers
    std::unordered_map<int, char> first = {{1,'a'}, {2,'b'}, {3,'c'}};
    std::unordered_map<int, char> second  = {{4,'d'}, {5,'f'}};
    
    //swap the content of the containers
    first.swap(second);

    //print contents of first unordered_map
    std::cout << "first: ";
    for (auto& x: first) {
        std::cout << x.first << " (" << x.second << "), ";
    }
    std::cout << std::endl;
    
    //print contents of second unordered_map
    std::cout << "second: ";
    for (auto& x: second) {
        std::cout << x.first << " (" << x.second << "), ";
    }
    std::cout << std::endl;

    return 0;
}
```
**[Run Code](https://rextester.com/RFNE99436)**
