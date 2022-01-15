# insert_or_assign

**Description :** This function either inserts a new key-value pair or it modifies the value of an existing key. The function also returns a pair<iterator, bool> where bool is true when insertion took place and false if assignment occurred.

**Example** :

```cpp
//Demonstrates insert_or_assign
#include <iostream>
#include <map>

int main() 
{ 
	// initialize map
	std::map<char, int> mymap; 

	// add elements to the map using operator[] 
	mymap['a'] = 10; 
	mymap['b'] = 20;

	// add new element using insert_or_assign
	std::pair<std::map<char,int>::iterator,bool> result = mymap.insert_or_assign('c',30);

	// confirm that the element was inserted
	if (result.second == true) {
		std::cout << "element was inserted \n";
	}

	// assign new value to element with key 'a'
	result = mymap.insert_or_assign('a', 50);
	
	// confirm that the element was assigned
	if (result.second == false) {
		std::cout << "element was assigned \n";
	}
	
	// print the elements of the map
	std::map<char, int>::iterator it;
	std::cout << "The map contains: \n";
	for (it = mymap.begin(); it != mymap.end(); ++it) {
		std::cout << it->first << " " << it->second << "\n";
	}
	
	return 0; 
}
```
**[Run Code](https://replit.com/@DarciMartin/insertorassign30-Seconds-of-C#main.cpp)**
