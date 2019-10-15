# rbegin

**Description :**
    This method is used to return a reverse iterator pointing to the last element in the set(i.e., its reverse beginning).

**Example :**
```cpp
//Run Code To Demonstrate use of set.rbegin()
//set::rbegin
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1,2,3,4,-5};
    std::set<int>::reverse_iterator rit;
    rit=mySet.rbegin(); //Returns 4 as the last element stored in Set
    std::cout << *(rit) << "\n";

    return 0;
}
```

**[Run Code](https://ideone.com/5tgcty)**