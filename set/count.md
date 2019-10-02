# count

**Description :**
This method returns 0 if the set doesn't have the element or 1 if it does.

**Example :**

```cpp
//Run Code To Demonstrate use of set.count()
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1,2,3,4,-5};

    if (mySet.count(1) != 0) {
    	std::cout << "1 is present on set" <<std::endl;
    } else {
    	std::cout << "1 is not present on set" <<std::endl;
    }

    if (mySet.count(5) != 0) {
    	std::cout << "5 is present on set" <<std::endl;
    } else {
    	std::cout << "5 is not present on set" <<std::endl;
    }

    return 0;
}

```

**[Run Code](https://ideone.com/uhRBlh)**
