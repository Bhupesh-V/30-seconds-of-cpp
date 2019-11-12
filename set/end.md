# end

**Description :**
    This method returns an iterator pointing to the last element in the set.

**Example :**
```cpp
//Run Code To Demonstrate use of set.end()
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1,2,3,4,-5};

    std::cout << *(mySet.end()) <<std::endl;
    return 0;
}

```

**[Run Code](https://ideone.com/AC1yct)**
