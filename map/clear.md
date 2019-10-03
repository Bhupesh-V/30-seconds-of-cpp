# clear

**Description :** It removes all the elements from the map container and changes it’s size to 0. It accepts no parameters.

**Example** :

```cpp
// C++ program to Demonstrate map::clear() function 
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
  
    // print the total number of elements in map
    std::cout<< "Map size initially : "; 
    std::cout << mp.size() << endl;
    
    mp.clear();
    
    //print the size of map after using clear() STL
    std::cout<< "Map size finally after using clear() : "; 
    std::cout << mp.size() << endl;
    
    return 0; 
} 
```

**[Run Code](https://rextester.com/YFADJ46350)**
