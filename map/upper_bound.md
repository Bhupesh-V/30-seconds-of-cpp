# upper_bound

**Description :** The map::upper_bound() is a built-in function in C++ STL which returns an iterator pointing to the immediate next element just greater than k. If the key passed in the parameter exceeds the maximum key in the container, then the iterator returned points to the number of elements in the map container as key and element = 0.

**Example** :

```cpp
int main() 
{ 
	// initialize container 
	std::map<int, int> mp; 

	// insert elements in random order 
	mp.insert({ 12, 30 }); 
	mp.insert({ 11, 10 }); 
	mp.insert({ 15, 50 }); 
	mp.insert({ 14, 40 }); 

	// when 11 is present 
	std::map<int, int>::iterator it = mp.upper_bound(11); 
	std::cout << "The upper bound of key 11 is "; 
	std::cout << (*it).first << " " << (*it).second << endl; 

	// when 13 is not present 
	it = mp.upper_bound(13); 
	std::cout << "The upper bound of key 13 is "; 
	std::cout << (*it).first << " " << (*it).second << endl; 

	// when 17 is exceeds the maximum key, so size of mp is returned as key and value as 0. 
	it = mp.upper_bound(17); 
	std::cout << "The upper bound of key 17 is "; 
	std::cout << (*it).first << " " << (*it).second; 
	return 0; 
} 
```
**[Run Code](https://rextester.com/UBOUL15808)**
