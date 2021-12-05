# key_comp

**Description :** This function returns a copy of the comparison object which is used by map to compare keys. It takes two arguments and returns true if the first argument comes before the second argument.

**Example** :

```cpp
//Demonstrates key_comp
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

	// character for key comparison
	char key = 'd';

	// create a key compare object
	std::map<char, int>::key_compare mycompare = mymap.key_comp(); 

	// set the iterator to the start of the map
	it = mymap.begin();
	
	// print the elements of the map that come before the comparison key
	do {
		std::cout << it->first << " " << it->second << "\n";
	} while (mycompare((*(++it)).first, key));
	
	return 0; 
}
```
**[Run Code](https://rextester.com/LWRK74444)**
