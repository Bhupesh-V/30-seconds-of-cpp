# merge

**Description :** Attempts to extract ("splice") each element in source and insert it into *this using the comparison object of *this. If there is an element in *this with key equivalent to the key of an element from source, then that element is not extracted from source. No elements are copied or moved, only the internal pointers of the container nodes are repointed. All pointers and references to the transferred elements remain valid, but now refer into *this, not into source.

**Example** :

```cpp
#include <map>
#include <iostream>
#include <string>
 
int main()
{
    std::map<int, std::string> a {{1, "apple"}, {5, "pear"}, {10, "banana"}};
    std::map<int, std::string> b {{2, "zorro"}, {4, "batman"}, {5, "X"}, {8, "alpaca"}};
    std::map<int, std::string> c;

    c.merge(a);
    std::cout << "a.size(): " << a.size() << '\n';
    c.merge(b);

    std::cout << "b.size(): " << b.size() << '\n';
    std::cout << "b.at(5): " << b.at(5) << '\n';
    
    for(auto const &kv: c){
        std::cout << kv.first << ", " << kv.second << '\n';
    }
}
```


**[Run Code](https://onlinegdb.com/r1v-q6mTL)**
