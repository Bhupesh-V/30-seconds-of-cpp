# max_size

**Description** :
- Returns the maximum number of elements that a vector can hold.

- Depends on the limitations of the system on which program is running.

**Example**:
```cpp
	//Create two vectors, one empty and one having 6 elements
	std::vector<int> vector1;
	std::vector<int> vector2{10, 30, 30, 40, 50, 60};
	
	//Display the maximum number of elements both can hold
	std::cout << "The maximum size of vector1 is: " << vector1.max_size() << std::endl;
	std::cout << "The maximum size of vector2 is: " << vector2.max_size() << std::endl;
```

**[See Sample Code](../snippets/vector/max_size.cpp)**
**[Run Code](https://rextester.com/FPVV25502)**

