# upper_bound

**Description :**
    This method returns an iterator pointing to the first element in the set which is strictly greater to the passed parameter 'x'.

    If the set has no element greater than 'x', an iterator to the end of the set is returned.

**Example :**
```cpp
//Run Code To Demonstrate use of set.upper_bound(x)
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> mySet {1, 4, 2, 5, 10, -2};

    std::cout << "The upper_bound of 2 is: " << *(mySet.upper_bound(2)) << std::endl;

    std::cout << "The upper_bound of -3 is: " << *(mySet.lower_bound(-2)) << std::endl;
	
	if(mySet.upper_bound(10) == mySet.end()){
		std::cout << "Since mySet doesn't have elements greater than 10 the end iterator is returned" << std::endl;
	}
    return 0;
}
```

**[Run Code](https://ideone.com/8xN2no)**
