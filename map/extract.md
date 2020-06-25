# extract

**Description :** map::extract() is a built-in function in C++ STL which is used to unlink the node that contains the element pointed to by position and returns the node handle that owns it. - cplusplus.com

**Example**:

```cpp
//Demonstrates extract()
int main() {
    std::map<int,std::string> users{{0, "kevin"}, {1, "stacy"}, {2, "tyler"}};

    // creates a node handler and extracts a node {key, value} from the map
	auto node_handler = users.extract(2);

	std::cout << "Users\n";
    std::cout << "Key\tValue\n";
    for(auto i = users.begin(); i != users.end(); ++i) {
        std::cout << i->first << "\t" << i->second << "\n";
    }

    // re-insert the moddified node into the map
	users.insert(std::move(node_handler));
    
    std::cout << "Users\n";
    std::cout << "Key\tValue\n";
    for(auto i = users.begin(); i != users.end(); ++i) {
        std::cout << i->first << "\t" << i->second << "\n";
    }
    
    return 0;
}
```

**[Run Code](https://rextester.com/EYIPH39369)**

