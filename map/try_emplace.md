# try_emplace

**Description :** map::try_emplace() is a built-in function in C++ STL which is used to insert an element in the container, but does nothing if a matching key is found. - docs.w3cub.com

**Example**:

```cpp
//Demonstrates try_emplace()
#include <iostream>
#include <string>
#include <map>

int main() {
	// create map
	std::map<std::string, std::string> bash_arena;

	// use try_emplace to attempt to insert some kv pairs
	bash_arena.try_emplace("fastest", "vulture");
	bash_arena.try_emplace("middle", "sooo fast");
	bash_arena.try_emplace("slowest", "mega duty");
	bash_arena.try_emplace("fastest", "INSERT WILL FAIL HERE");

	std::cout << "map bash_arena contains:\n";

	// print the contents of the map
	std::map<std::string, std::string>::iterator it;
	for (it = bash_arena.begin(); it != bash_arena.end(); it++) {
		std::cout << "{" << it->first << ", " << it->second << "}\n";
	}
}
```

**[Run Code](https://rextester.com/SSYS93331)**


