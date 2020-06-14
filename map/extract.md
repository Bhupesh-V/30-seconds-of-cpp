# extract

**Description :** If the container has an element with key equivalent to the parameter provided, unlinks the node that contains that element from the container and returns a node handle that owns it. Otherwise, returns an empty node handle. (Can also be provided with the iterator to the map element directly, the behaviour is identical) 

No elements are copied or moved, only the internal pointers of the container nodes are repointed (rebalancing may occur, as with erase())

Extracting a node invalidates the iterators to the extracted element. Pointers and references to the extracted element remain valid, but cannot be used while element is owned by a node handle: they become usable if the element is inserted into a container.

Extract is the only way to change a key of a map element without reallocation.

**Example** :

```cpp
#include <map>
#include <iostream>
#include <string>

int main()
{
    std::map<int, std::string> m{{2, "papaya"}, {1, "mango"}, {3, "guava"}};
    auto nh = m.extract(2);
    nh.key() = 4;
    m.insert(move(nh));
    for(auto const &kv: m){
        std::cout << kv.first << ", " << kv.second << '\n';
    }
}
```


**[Run Code](https://onlinegdb.com/HJrIylEpI)**
