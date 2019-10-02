# clear

**Description :**
    This method is used to count the number of time an element appears in the set. It can return only 1 or 0 since all the elements in the set are unique

**Example :**
```cpp
//Run Code To Demonstrate use of set.count()
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> myset {1,2,3,4,5};
    
    std::cout<< myset.count(1) <<endl;
    std::cout<< myset.count(6);
    return 0;
}

```

