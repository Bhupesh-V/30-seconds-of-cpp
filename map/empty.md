# empty

**Description :** It is used to check if the map container is empty or not. It accepts no parameters. It return true if map is empty otherwise false.

**Example** :

```cpp
// C++ program to Demonstrate map::empty() function 
#include <iostream>
#include <map>
using namespace std; 
  
int main() { 

    // initialize container 
    std::map<int, int> mp; 
  
    // insert elements in random order 
    mp.insert({ 1, 10 }); 
    mp.insert({ 2, 20 }); 
    mp.insert({ 3, 30 }); 
    mp.insert({ 4, 40 }); 
    mp.insert({ 5, 50 }); 
    mp.insert({ 6, 60 }); 
  
    // print bool value return by empty() STL
    std::cout << " MAP IS EMPTY : " ;
    if (mp.empty()) { 
        std::cout << "True"; 
    } 
    else { 
        std::cout << "False"; 
    } 
    
    return 0; 
} 
```

**[Run Code](https://rextester.com/UBR30476)**
