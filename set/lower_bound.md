# empty

**Description :**
    This method returns an iterator pointing to the first element in the container which is greater or equal to the passed parameter 'x'.

**Example :**
```cpp
//Run Code To Demonstrate use of set.lower_bound(x)
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1,2,4,-5,6};

    std::cout << "The lower_bound of 4 is: " << *(mySet.lower_bound(4)) << std::endl;

    std::cout << "The lower_bound of 5 is: " << *(mySet.lower_bound(5)) << std::endl;

    return 0;
}

```

**[Run Code](https://ideone.com/pIWrf3)**