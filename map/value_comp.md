# value_comp

**Description :** This function is used to compare two keys and returns true if the key of the first argument is considered to go before that of the second.

**Example** :

```cpp
//Demonstrates value_comp
#include <iostream>
#include <map>

int main() 
{ 
	// initialize map and iterator
	std::map<char, int> mymap;
	std::map<char, int>::iterator it; 

	// add elements to the map 
	mymap['a'] = 10; 
	mymap['b'] = 20;
	mymap['c'] = 30;
	mymap['d'] = 40; 

	// create a key pair for comparison
	std::pair<char, int> comparator ('c', 10);

	// create a value compare object
	std::map<char, int>::value_compare mycompare = mymap.value_comp(); 

	// set the iterator to the start of the map
	it = mymap.begin();
	
	// print the elements of the map with a key that comes before the comparator
	do {
		 std::cout << it->first << " " << it->second << "\n";
	} while (mycompare(*(++it), comparator));
	
	return 0; 
} 
```
**[Run Code](https://rextester.com/GJPY91166)**
