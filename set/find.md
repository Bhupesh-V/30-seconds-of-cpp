# find

**Description :**
    This method is used to know if a value already exists in a set. If the value exists in the set, it returns an iterator to it, otherwise it returns an iterator to set::end.

**Example :**

```cpp
//Run Code To Demonstrate use of set.find()
#include <iostream>
#include <set>
int main() {
    // Create a set object holding integers
    std::set<int> mySet {1, 2, 3, 4, -5};
    if (mySet.find(1) != mySet.end()) {
        std::cout << "1 : is a element of mySet" << std::endl;
    } else {
        std::cout << "1 : is not an element of myset" << std::endl;
    }
    if (mySet.find(12) != mySet.end()) {
        std::cout << "12 : is a element of mySet" << std::endl;
    } else {
        std::cout << "12 : is not an element of myset" << std::endl;
    }
    return 0;
}
```

**[Run Code](https://ideone.com/BkboDS)**
