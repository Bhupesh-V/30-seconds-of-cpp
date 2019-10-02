# rbegin

**Description** : The function returns a reverse iterator pointing to the last element in the container.

**Syntax :** vectorname.rbgin()

**Example**:
```cpp
/// Demonstrates rbegin() 
#include <iostream>
#include <vector>

int main(){
    //declares an empty vector
    std::vector<int> vec;
    
    //inserting elements in vector
    vec.push_back(101);
    vec.push_back(12);
    vec.push_back(999);
    vec.push_back(143);
  
    //Displaying elements of  vector from the end
    std::cout << "Content of the vector \n";
    for (auto it = vec.rbegin(); it != vec.rend(); it++){ 
        std::cout << *it << "\n";
    }
    return 0;
}

```
**[Run Code](https://rextester.com/ZJPG53873)**

