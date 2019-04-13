### assign

#### Description

The list::assign() is a built-in function in C++ STL which is used to assign values to a list.

#### Example

```cpp
    #include<iostream>
	#include<list>

	int main(){
		// Initialization of list
	    std::list<int> demo_list;

	    // Assigning the value 100, 5 times
	    // to the list, list_demo.
	    demo_list.assign(5, 100);

	    // Displaying the list
	    for (int itr : demo_list) {
	        std::cout << itr << " ";
	    }

	    return 0;
	}

```
