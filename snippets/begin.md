### begin

#### Description

begin() function is used to return an iterator pointing to the first element of the list container.

#### Example

```cpp
	#include<iostream>
	#include<list>

	int main(){
		// declaration of list container
	    std::list<int> mylist{ 1, 2, 3, 4, 5 };

	    // using begin() to print list
	    for (auto it = mylist.begin(); it != mylist.end(); ++it)
	        std::cout << " " << *it;

		return 0;
	}
```
