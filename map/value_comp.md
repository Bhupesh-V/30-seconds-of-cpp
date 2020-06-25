# value_comp

**Description :** map::value_comp() is a built-in function in C++ STL which is used to obtain a comparison object that can be used to compare two elements to get whether the key of the first one goes before the second. - cplusplus.com

**Example**:

```cpp
//Demonstrates value_comp()
#include <iostream>
#include <map>
#include <string>

int main() {
	// create and fill map
	std::map<int, std::string> galaxy;
	galaxy[0] = "starlord";
	galaxy[1] = "groot";
	galaxy[2] = "gamora";

	std::cout << "where is groot?\n";

	// create the pair to search for
	std::pair<int, std::string> groot = { 1, "groot" };
	std::map<int, std::string>::iterator it = galaxy.begin();
	while (it != galaxy.end()) {
		// use value_comp to check if target's index is after, at, or before iterator index
		if (galaxy.value_comp()(*it, groot)) {
			std::cout << "groot is after index: " << it->first << '\n';
		}
		else if (it->first == groot.first) {
			std::cout << "groot is at index " << it->first << '\n';
			break;
		}
		else {
			std::cout << "groot is before index " << it->first << '\n';
			break;
		}
		++it;
	}
	return 0;
}
```

**[Run Code](https://rextester.com/KESE42255)**

