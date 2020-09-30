# count

**Description :**
    This method is used to know if value exits in a set. It returns `1` if the value is a element of set, otherwise `0`. It is mostly used in conditional statements.

**Example :**
```cpp
//Run Code To Demonstrate use of set.count()
#include<iostream>
#include<set>

int main() {
    // Create a set object holding integers
    std::set<int> mySet {1,2,3,4,-5};
    
    if (mySet.count(1) != 0) {
        std::cout << "1 : is not an element of myset" << std::endl;   
    }
    else {
        std::cout << "1 : is a element of mySet" << std::endl;
    }
    if (mySet.count(12) != 0) {
        std::cout << "12 : is not an element of myset" << std::endl;   
    }
    else {
        std::cout << "12 : is a element of mySet" << std::endl;
    }

    return 0;
}

```

**[Run Code](https://ideone.com/1F5j3h)**
