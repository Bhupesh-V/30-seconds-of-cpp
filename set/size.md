# size

**Description :**
    This method is used to return the size of set. The return type is size_t (quite similar to unsigned integer), which overflows when a bigger number is subtracted from it.

**Example :**
```cpp
//Run Code To Demonstrate use of set.size()
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1,2,3,4,-5};

    std::cout << "Size of my set is : " << mySet.size() << std::endl;

    return 0;
}

```

**[Run Code](https://ideone.com/guEojH)**