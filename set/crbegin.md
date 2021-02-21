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
	std::set<int> myset{ 3, 1, 5, 2, 4 };

	// Prints all elements in reverse order
	std::cout << "myset backwards: ";
	for(auto it = myset.crbegin(); it != myset.crend(); ++it){
		std::cout << *it << ' ';
	}

	std::cout << '\n';

	return 0;
}

```

**[See Sample code](../snippets/set/crbegin.cpp)**
**[Run Code](https://ideone.com/ccq58H)**