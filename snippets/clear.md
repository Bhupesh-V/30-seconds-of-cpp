### clear

#### Description

clear() function is used to remove all the elements of the list container, thus making it size 0.

#### Example

```cpp
	#include<iostream>
	#include<list>

	int main(){

		std::list<int> mylist{ 1, 2, 3, 4, 5 };
	    // List becomes empty
	    mylist.clear();
	    // Printing the list
	    for (auto it = mylist.begin(); it != mylist.end(); ++it)
	        std::cout << ' ' << *it;

		return 0;
	}
```
