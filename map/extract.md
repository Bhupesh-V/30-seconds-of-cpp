# extract

**Description :** It unlinks the node that contains the element pointed to by position and returns a node handle that owns it. 

**Example**:

```cpp
#include <algorithm>
#include <iostream>
#include <map>
 
int main()
{
    std::map<int, char> cont{{1, 'a'}, {2, 'b'}, {3, 'c'}};
 
    auto print = [](std::pair<const int, char>& n) { 
        std::cout << " " << n.first << '(' << n.second << ')'; 
    };
 
    std::cout << "Start:";
    std::for_each(cont.begin(), cont.end(), print);
    std::cout << '\n';
 
    // Extract node handle and change key
    auto nh = cont.extract(1);
    nh.key() = 4; 
 
    std::cout << "After extract and before insert:";
    std::for_each(cont.begin(), cont.end(), print);
    std::cout << '\n';
 
    // Insert node handle back
    cont.insert(move(nh));
 
    std::cout << "End:";
    std::for_each(cont.begin(), cont.end(), print);
    std::cout << '\n';

    return 0;
}
```

**[Run Code](https://rextester.com/VXVTBW84004)**
