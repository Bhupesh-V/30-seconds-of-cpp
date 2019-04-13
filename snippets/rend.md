### rend

#### Description

list::rend() is an inbuilt function in C++ STL that returns a reverse iterator which points to the position before the beginning of the list.

#### Example

```cpp
	#include<iostream>
	#include<list>

	int main(){

		std::list<int> lis = { 109, 206, 303, 401, 506 };

	    std::cout << "The list in reverse order: ";

	    for (auto it = lis.rbegin(); it != lis.rend(); ++it)
	        std::cout << *it << " ";

	  	return 0;
	}
```
