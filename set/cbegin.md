# cbegin

**Description :**
    This method is used to return a const_iterator pointing to the first element in the container.

**Example :**
```cpp
//Run Code To Demonstrate use of set.cbegin()
// set::cbegin
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

**[Run Code](https://ideone.com/O0nNei)**