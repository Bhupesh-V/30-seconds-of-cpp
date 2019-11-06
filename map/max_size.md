# max_size

**Description :** It returns an integer value which is equal to the maximum number of elements map container can hold. It accepts no parameters.

**Example** :

```cpp
// C++ program to Demonstrate map::max_size() function 
#include <iostream>
#include <map>
using namespace std; 
  
int main() { 

    // initialize container 
    std::map<int, int> mp;
  
    // print the maximum size of map
    std::cout << "The max size of map is " << mp.max_size() ;
    
    return 0; 
} 
```

**[Run Code](https://rextester.com/ZPP8806)**
