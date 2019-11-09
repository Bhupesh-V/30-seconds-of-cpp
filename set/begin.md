# begin

**Description :**
    This method returns an iterator pointing to the first element in the set.

**Example :**
```cpp
//Run Code To Demonstrate use of set.begin()
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1,2,3,4,-5};

    std::cout << *(mySet.begin()) <<std::endl;
    return 0;
}

```

**[Run Code](https://ideone.com/MJWTsP)**
