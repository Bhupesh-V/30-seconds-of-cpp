# none_of

**Description :** This function operates on whole range of array elements and checks for a given property on every element and returns true when no element in range satisfies specified property, else returns false.

**Example** :

```cpp
#include <vector> 
#include <algorithm> 
#include <iostream> 


int main() {
    
    std::vector<int> v{1, 3, 5, 7};
	
    if(std::none_of(v.begin(), v.end(), [](int i){ return i % 2 == 0; })) { 
        std::cout << "No number is  even\n"; 
    }
    else {
        std::cout << "A number is even\n";
    }
} 
```
**[Run Code](https://rextester.com/KCAUPV41408)**
