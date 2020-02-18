# contains

**Description :**
    This method is used to know if a value exists in a set. If the given value is an element of set, the method returns true, otherwise it returns false.

**Example :**
```cpp
//Run code to demonstrate use of set.contains()
#include <iostream>
#include <set>

int main() {

    // Create a set with different integer values
    std::set<int> mySet = {1, 2, 3, 4, -5};

    // Check if the set contains the value 1
    if (mySet.contains(1)) {
        std::cout << "1 exists in mySet" << std::endl;
    } else {
        std::cout << "1 does not exist in mySet" << std::endl;
    }

    // Check if the set contains the value 12
    if (mySet.contains(12)) {
        std::cout << "12 exists in mySet" << std::endl;
    } else {
        std::cout << "12 does not exist in mySet" << std::endl;
    }

    return 0;
}

```

**[Run Code](https://coliru.stacked-crooked.com/a/367f7b4450afe750)**
