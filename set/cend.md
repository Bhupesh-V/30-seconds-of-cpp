# cend

**Description :**
    This method is used to return a const_iterator to the element just past the last element of the set.

**Example :**
```cpp
//Run Code To Demonstrate use of set.cend()
#include <iostream>
#include <set>

int main ()
{
std::set<int> myset = {50,20,60,10,25};

std::cout << "myset contains:";
for (auto it=myset.cbegin(); it != myset.cend(); ++it)
    std::cout << ' ' << *it;

std::cout << '\n';

return 0;
}

```

**[Run Code](https://rextester.com/BZL21829)**