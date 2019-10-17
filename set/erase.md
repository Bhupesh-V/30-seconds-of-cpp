# erase

**Description :**
Removes specified elements from a set.
Can be used in three ways:

1. Removing an element from the set by its value.
2. Removing an element from the set by its iterator.
3. Removing a range of elements [first, last) using first and last's iterators.

**Example :**
```cpp
#include <iostream>
#include <set>

std::set<int> mySet {1, 2, 3, 4, 5, 6, 7, 8, 9};

void printSet(){
	for(int x: mySet)
		std::cout << x << " ";
	std::cout << std::endl;
}

int main() {
	std::cout << "Erasing element 4 by its value:" << std::endl;
	mySet.erase(4);
	printSet();
	
	std::cout << "Erasing element 7 by its iterator:" << std::endl;
	mySet.erase(mySet.find(7));
	printSet();
	
	std::cout << "Erasing elements in range [2, 8) with their iterators:" << std::endl;
	mySet.erase(mySet.find(2), mySet.find(8));
	printSet();
	
	return 0;
}
```

**[Run Code](https://ideone.com/Nzt9Yc)**
