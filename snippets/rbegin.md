### rbegin

#### Description

list::rbegin() is an inbuilt function in C++ STL that returns a reverse iterator which points to the last element of the list.

#### Example

```cpp
	#include<iostream>
	#include<list>

	int main(){

		std::list<int> lis = { 105, 207, 309, 401, 503 };

	    std::cout << "The list in reverse order: ";

	    for (auto it = lis.rbegin(); it != lis.rend(); ++it)
	        std::cout << *it << " ";

	  	return 0;
	}
```
