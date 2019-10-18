# begin

**Description :**
    This method is used to return an iterator to the first element of the set. The return type is a bidirectional iterator to the first element of the set. 

**Example :**
```cpp
//Run Code To Demonstrate use of set.empty()
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
