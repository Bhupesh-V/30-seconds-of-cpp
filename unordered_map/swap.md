# swap

**Description :** This function is used to swap content of two unordered map.

**Example** :

```cpp
// Demonstrates swap() 
#include <iostream>
#include <unordered_map>

int main(){
    //declares an empty map. O(1)
    std::unordered_map<char, int> first; 
    
    //inserting in to unordered_map with O(1) time on average
    first.insert({'a', 1});
    first.insert({'b', 2});
    first.insert({'c', 3});

    //declares an empty map. O(1)
    std::unordered_map<char, int> second; 
    
    //inserting in to unordered_map with O(1) time on average
    second.insert({'d', 4});
    second.insert({'e', 5});
    second.insert({'f', 6});
  
    //print elements of first unordered_map before swaping
    std::cout << "Before swaping of first unordered_map \n";
    for (auto it = first.begin(); it != first.end(); ++it){ 
        std::cout << it->first << " = "<< it->second << '\n'; 
    }

    //print elements of second unordered_map before swaping
    std::cout << "Before swaping of second unordered_map \n";
    for (auto it = second.begin(); it != second.end(); ++it){ 
        std::cout << it->first << " = "<< it->second << '\n'; 
    }

    //swaping content of first and second unordered_map
    first.swap(second);

    //print elements of first unordered_map after swaping
    std::cout << "After swaping of first unordered_map \n";
    for (auto it = first.begin(); it != first.end(); ++it){ 
        std::cout << it->first << " = "<< it->second << '\n'; 
    }

    //print elements of second unordered_map after swaping
    std::cout << "After swaping of second unordered_map \n";
    for (auto it = second.begin(); it != second.end(); ++it){ 
        std::cout << it->first << " = "<< it->second << '\n'; 
    }

    return 0;
}

```
**[Run Code](https://rextester.com/UYILP62327)**
