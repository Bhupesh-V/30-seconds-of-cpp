# swap_ranges

**Description :**  Swaps elements of a container within a specified range with the beginning elements of a second container.

**Example** :

```cpp   
	std::vector<int> v1 (5, 1);
	std::vector<int> v2 (5, 2);
	
	std::swap_ranges(v1.begin() + 1, v1.end() - 1, v2.begin());
	
	std::cout << "v1 after swap_ranges:";
	for (std::vector<int>::iterator iter = v1.begin(); iter != v1.end(); ++iter) {
		std::cout << ' ' << *iter;
	}
	std::cout << '\n';

	std::cout << "v2 after swap_ranges:";
	for (std::vector<int>::iterator iter = v2.begin(); iter != v2.end(); ++iter) {
		std::cout << ' ' << *iter;
	}
	std::cout << '\n';
} 
```

**[Run Code](https://rextester.com/DUDMB57037)**