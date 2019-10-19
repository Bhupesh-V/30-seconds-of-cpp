# crbegin

**Description** : The function returns an iterator which is used to iterate container.

Notes:

1. The iterator points to the last element of the vector.
2. Iterator cannot modify the contents of the vector.

**Example**:
```cpp
// Demonstrates crbegin() 
#include <iostream>
#include <vector>

int main(){
    //declares an empty vector
    std::vector<int> vec;
    //inserting elements in vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
  
    //Displaying elements of  vector
    std::cout << "Content of the vector \n";
    for (auto rit = vec.crbegin(); rit != vec.crend(); ++rit){
        std::cout << *rit << '\n'; 
    }
    return 0;
}

```
**[Run Code](https://rextester.com/ZVYBN46474)**

