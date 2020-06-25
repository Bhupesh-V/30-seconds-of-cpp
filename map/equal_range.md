# equal_range

**Description :** map::equal_range() is a built-in function in C++ STL which is used to return a range containing all elements with the given key in the container. - cplusplus.com

**Example**:

```cpp
//Demonstrates equal_range()
#include <iostream>
#include <map>
#include <string>

int main() {
	// create map
	std::map<int, std::string> hot_wheels;
	hot_wheels[0] = "beatnik bandit";
	hot_wheels[1] = "deora";
	hot_wheels[2] = "silhouette";
	hot_wheels[3] = "python";

	// use equal_range, returns pair of iterators to { begin of range, end of range } 
	auto sweet_sixteen = hot_wheels.equal_range(1);

	// print results
	std::cout << "eq_range lb is: {" << sweet_sixteen.first->first << ", " << sweet_sixteen.first->second << "}\n";
	std::cout << "eq_range ub is: {" << sweet_sixteen.second->first << ", " << sweet_sixteen.second->second << "}\n";

	return 0;
}
```

**[Run Code](https://rextester.com/QBPMCN63868)**

