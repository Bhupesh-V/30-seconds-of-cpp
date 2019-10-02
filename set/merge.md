# clear

**Description :**
    This method is used to merge sort two containers into a single container.

**Example :**
```cpp
//Run Code To Demonstrate use of set.merge()
#include<iostream>
#include<set>
#include<algorithm>

int main(){
    std::set<int> myset1 {1,2,3,4,5};
    std::set<int> myset2 {5,6,7,8,9};

    std::set<int> myset3;

    std::merge(myset1.begin(), myset1.end(), myset2.begin(),myset2.end(),std::inserter(myset3,myset3.begin()));

    for(auto x: myset3)
    {
        std::cout<< x << ' ';
    }
    return 0;
}
```

