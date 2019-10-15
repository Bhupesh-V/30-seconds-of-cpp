# rend

**Description :**
    This method is used to return a reverse iterator pointing to the theoretical element right before the first element in the set container (which is considered its reverse end).

**Example :**
```cpp
//Run Code To Demonstrate use of set.rend()
//set::rbegin
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1,2,3,4,-5};
    std::set<int>::reverse_iterator rit;
    for (rit=mySet.rbegin(); rit != mySet.rend(); ++rit)
    std::cout << ' ' << *rit;
    //In the above loop, mySet.rend() is used as a terminating condition
    return 0;
}
```

**[Run Code](https://ideone.com/ISSl8K)**