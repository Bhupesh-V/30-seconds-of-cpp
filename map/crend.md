# crend

**Description :** The function returns a constant reverse iterator pointing to the theoretical element before the first element in the map. This crend() will point to the element theoretically before the first element according to the container’s sorting criterion. This function does not accept any parameter.

**Example** :

```cpp
// C++ program to Demonstrate map::crend() function 
#include <iostream>
#include <map>
using namespace std; 
  
int main() { 

    // initialize container 
    std::map<int, int> mp; 
  
    // insert elements in random order 
    mp.insert({ 1, 10 }); 
    mp.insert({ 3, 20 }); 
    mp.insert({ 2, 30 }); 
    mp.insert({ 4, 40 }); 
    mp.insert({ 6, 50 }); 
    mp.insert({ 5, 60 }); 
  
    // print the list in reverse order using itr iterator till itr != mp.crend()
    std::cout << "\nThe map in reverse order is : \n"; 
    std::cout << "KEY\tELEMENT\n"; 
    for (auto itr = mp.crbegin(); itr != mp.crend(); ++itr) { 
        std::cout << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    
    return 0; 
} 
```

**[Run Code](https://rextester.com/FDPVP92421)**
