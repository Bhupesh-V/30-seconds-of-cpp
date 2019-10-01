# contains

**Description :**
    This method is used to check if the set conatins the given key. The return type is boolean true if contains the given key and false if not.

**Example :**
```cpp
//Run Code To Demonstrate use of set.conatins()
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1,2,3,4,-5};

    int key = 3;
    if(mySet.contains(key)){                                //checking the presence of key in set mySet
        std::cout<<" Set conatins: "<<key<<'\n';            //print key if found
    }
    else{
        std::cout<<" Set doesn't conatin: "<<key<<'\n';     //print key not found
    }

    return 0;
}

```
