# rbegin

**Description** : 
- Returns a reverse iterator pointing to the last element in the vector (i.e., its reverse beginning).
- Reverse iterators iterate backwards: increasing them moves them towards the beginning of the container.

**Example**:
```cpp
	// Iterate backwards over myVector using reverse iterators
	for (auto it = myVector.rbegin(); it != myVector.rend(); it++) {
		std::cout << *it << " ";
	}
```
**[See Sample code](../snippets/vector/rbegin.cpp)**
**[Run Code](https://rextester.com/XGWC54800)**
