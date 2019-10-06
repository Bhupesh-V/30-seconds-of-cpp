# empty

**Description :**
    This method returns true if the set doesn't have any elements present in it.

**Example :**
```cpp
//Run Code To Demonstrate use of set.empty()
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1,2,3,4,-5};

    std::cout << mySet.empty() <<std::endl;
    return 0;
}

```

**[Run Code](https://ideone.com/BhTXrg)**