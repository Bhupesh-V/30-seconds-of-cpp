# crend

**Description :**
	This method is used to return a const_reverse_iterator pointing to the position preceding the first element of the container. This is useful 
	when wanting a read-only iterator to iterate a container in reverse order.

**Example :**
```cpp
//Run Code To Demonstrate use of set.crend()
#include<iostream>
#include<set>

int main() {
	// Create a set object holding integers
	std::set<int> myset{ 2, 4, 3, 5, 1 };

	// Iterate through the const_reverse_iterator
    	std::cout << "myset reversed:";
	for (auto r_it = myset.crbegin(); r_it != myset.crend(); ++r_it){
		std::cout << ' ' << *r_it;
	}

	return 0;
}

```

**[Run Code](https://rextester.com/YAWBA53642)**
