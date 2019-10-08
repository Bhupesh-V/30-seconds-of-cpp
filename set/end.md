# end

**Description** : 
- Returns an iterator pointing to the next of the last element of set.
				
**Example**:
```cpp
	// Creat a set of 5 elements
	std::set<int> mySet{1, 2, 3, 4, 5};

	// Display the set contents using iterator
	for (auto itr = mySet.begin(); itr != mySet.end(); ++itr) {
		std::cout << *(itr) << " ";
	}
```
**[Run Code](https://rextester.com/ITSECO5626)**
