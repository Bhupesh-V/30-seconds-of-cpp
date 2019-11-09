# insert

**Description :**
    This method is used to find a element in std::set.

**Example :**
```cpp
//Run Code To Demonstrate use of set.size()
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1,2,3,4,-5};

    if(mySet.find(1) != mySet.end())
        cout<< "1 found";
    else
        cout<< "Not found";

    return 0;
}

```
