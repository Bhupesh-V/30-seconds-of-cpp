# capacity

**Description** : capacity() function is a built-in function which returns the size of the storage space currently allocated for the vector, expressed in terms of elements.

**Example**:
```cpp
    std::vector<int> v; 

	// inserts elements 
	for (int i = 0; i < 100; i++) { 
		v.push_back(i * 10); 
	} 

	std::cout << "The size of vector is " << v.size() << std::endl; 
	std::cout << "The maximum capacity is " << v.capacity() << std::endl; 
```
**[Run Code](https://rextester.com/DBXG13125)**
