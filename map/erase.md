# erase

**Description :** It is used to erase element from the container. The function accepts one mandatory parameter key which specifies the key to be erased in the map container.

**Example** :

```cpp
// C++ program to Demonstrate map::erase() function 
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
  
    // prints the elements 
    std::cout << "The map before using erase() is : \n" ; 
    std::cout << "KEY\tELEMENT\n"; 
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) { 
        cout << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    
    mp.erase(4);
    
    // prints the elements 
    std::cout << "\nThe map after applying erase() is : \n"; 
    std::cout << "KEY\tELEMENT\n"; 
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) { 
        cout << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    
    return 0; 
} 
```

**[Run Code](https://rextester.com/PZRP3593)**
