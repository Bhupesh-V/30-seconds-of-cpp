# key_comp

**Description :** map::key_comp() is a built-in function in C++ STL which is used to obtain a copy of the comparison object used by the container to compare keys. This can be used to sort the container. - cplusplus.com

**Example**:

```cpp
//Demonstrates key_comp()
#include <iostream>
#include <map>
#include <string>

int main() {
	// create map
	std::map<std::string, std::string> galaxy;
	galaxy["thief"] = "starlord";
	galaxy["tree"] = "groot";
	galaxy["warrior"] = "gamora";

	// create a map key_compare fn pointer using the key_comp() method
	std::map<std::string, std::string>::key_compare guardianFinder = galaxy.key_comp();

	std::cout << "who is a warrior?\n";

	std::map<std::string, std::string>::iterator it = galaxy.begin();
	while (it != galaxy.end()) {
		// use the key_comp as function call to check if the index is before the target key, 
		// else if key, print and break
		// else key is not in map
		if (guardianFinder(it->first, "warrior")) {
			std::cout << "The warrior is after " << it->second << '\n';
		}
		else if (it->first == "warrior") {
			std::cout << "The warrior is " << it->second << '\n';
			break;
		}
		else {
			std::cout << "There is no warrior in the map\n";
			break;
		}
		++it;
	}
	return 0;
}
```

**[Run Code](https://rextester.com/TLFWY36259)**

