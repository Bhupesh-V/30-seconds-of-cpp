# crbegin

**Description :**
	Get a const_reverse_iterator pointing at the last element of the container. This is useful 
	when wanting a read-only iterator to iterate a container in reverse order.

**Example :**
```cpp
//Run Code To Demonstrate use of set.size()
#include<iostream>
#include<set>

int main() {
	// Create a set object holding integers
	std::set<int> mySet{ 3, 1, 5, 2, 4 };

	// Get a const_reverse_iterator pointing to the last element
	std::set<int>::reverse_iterator r_it = mySet.crbegin();

	// Iterate through the const_reverse_iterator
	for (; r_it != mySet.crend(); ++r_it){
		std::cout << *r_it << std::endl;
	}

	return 0;
}

```

**[See Sample code](../snippets/set/crbegin.cpp)**
**[Run Code](https://ideone.com/ccq58H)**