# size

**Description :**
    This method returns an iterator pointing to the element in the container which is equivalent to k passed in the parameter. In case k is not present in the set container, the function returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum value in the container, then the iterator returned points to the last element in the set container.

**Example :**
```cpp
//Run Code To Demonstrate use of set.lower_bound()
#include<iostream>
#include<set>

using namespace std;

int main(){
    // Create a set object holding integers
    set<int> mySet {1,3,2,5,-5};

    auto it = mySet.lower_bound(3);
    cout << "\nThe lower bound of key 3 is ";
    cout << (*it) << endl;

    auto it = mySet.lower_bound(4);
    cout << "\nThe lower bound of key 4 is ";
    cout << (*it) << endl;
    return 0;
}

```
