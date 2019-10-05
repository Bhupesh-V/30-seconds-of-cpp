# count

**Description :**
    This method returns 1 or 0 as the set container contains unique elements only. Therefore, count can be 1 or 0 only.

**Example :**
```cpp
//Run Code To Demonstrate use of set.count()
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1,2,3,4,-5};

    std::cout << mySet.count(4) <<std::endl;
    // Prints 1
    
    std::cout << mySet.count(6) <<std::endl;
    // Prints 0
    return 0;
}

```

**[Run Code](https://ideone.com/BhTXrg)**
