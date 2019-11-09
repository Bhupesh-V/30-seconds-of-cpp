# equal_range

**Description :**
    This method is used to know if value exits an set. If a value is element of set the method return 1, and otherwise return 0.

**Example :**
```cpp
//Run Code To Demonstrate use of set.equal_range()
#include <iostream>
#include <set>

int main ()
{
  std::set<int> myset = {1, 2, 3, 4};   // myset: 1 2 3 4

  std::pair<std::set<int>::const_iterator,std::set<int>::const_iterator> range = myset.equal_range(2);

  std::cout << "The range is from " << *range.first << " to " << *range.second << std::endl;

  return 0;
}
```

**[Run Code](https://ideone.com/gof6oy)**