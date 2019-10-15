# max_size

**Description :**
    This method is used to return the maximum number of elements that the set container can hold.

**Example :**
```cpp
//Run Code To Demonstrate use of set.max_size()
// set::max_size
#include <iostream>
#include <set>

int main ()
{
  int myints[] = {75,23,65,42,13};
  std::set<int> myset (myints,myints+5);

  std::cout << "myset contains:";
  for (std::set<int>::iterator it=myset.begin(); it!=myset.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << '\n';

  return 0;
}
```

**[Run Code](https://ideone.com/uHlsPC)**