# end

**Description :**
    This method returns an iterator pointing to past the last element in the set.

**Example :**
```cpp
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1,2,3,4,-5};

    for(auto it = mySet.begin(); it != mySet.end(); ++it){
        std::cout << *it << std::endl;
    }
    return 0;
}

```

**[Run Code](https://ideone.com/7XK2b7)**