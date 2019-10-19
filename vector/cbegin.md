# cebgin

**Description** : The function returns an iterator which is used to iterate container.

Notes:

1. The iterator points to the beginning of the vector.
2. Iterator cannot modify the contents of the vector.

**Example**:
```cpp
// Demonstrates cbegin() 
#include <iostream>
#include <vector>

int main(){
    //declares an empty vector
    std::vector<int> vec;
    
    //inserting elements in vector
    vec.push_back(101);
    vec.push_back(12);
    vec.push_back(999);
  
    //Displaying elements of  vector
    std::cout << "Content of the vector \n";
    for (auto it = vec.cbegin(); it != vec.end(); ++it){ 
        std::cout << *it << '\n'; 
    }
    return 0;
}

```
**[Run Code](https://rextester.com/XRFTW94461)**

