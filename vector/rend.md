# rend

**Description** : 
- Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (which is considered its reverse end).
- Reverse iterators iterate backwards: increasing them moves them towards the beginning of the container.

**Example**:
```cpp
	// Iterate backwards over myVector using reverse iterators
	for (auto it = myVector.rbegin(); it != myVector.rend(); it++) {
		std::cout << *it << " ";
	}
```
**[See Sample code](../snippets/vector/rend.cpp)**
**[Run Code](https://rextester.com/XGWC54800)**
