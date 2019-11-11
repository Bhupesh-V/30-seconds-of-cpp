# emplace_hint

**Description :**
    This method is used to insert new elements in set, if unique, with a hint on the insertion position. If the new element is inserted into the set with this function, an iterator to the new element in the set will be returned

**Example :**
```cpp
//Run Code To Demonstrate use of set.emplace_hint()
#include<iostream>
#include<set>

int main(){
    std::set<std::string> myset;
	auto it = myset.begin();
	it = myset.emplace_hint (it,"red");
	it = myset.emplace_hint (it,"orange");
	it = myset.emplace_hint (it,"yellow");
	  
	std::cout << "myset contains:";
    for (const std::string& mystring: myset)
	  std::cout << ' ' << mystring;
	std::cout << '\n';

    return 0;
}

```

**[Run Code](https://ideone.com/HSukoG)**