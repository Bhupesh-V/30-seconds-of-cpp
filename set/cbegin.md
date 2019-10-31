# cbegin

**Description :**
  This function returns a constant iterator that points to the first element in the containter. The difference between cbegin()
and begin() is cbegin will always return a constant iterator while begin() may return a constant iterator or an iterator depending
on the object it is called on.

**Example :**
```cpp
//Run code to demonstrate the use of set.cbegin()
#include <iostream>
#include <set>

int main(){
	std::set<int> myset = {10,20,40,27,60};
	std::cout << " myset contains : ";
	for(auto i = myset.cbegin(); i != myset.cend(); i++){
  		std::cout<< ' ' << *i;
	}
	std::cout<<std::endl;
return 0;
}
```
**[Run Code](https://ideone.com/KL14p4)**
