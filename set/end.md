# end

**Description :**
    This method is used to return an iterator referring to the past-the-end element in the set container.

**Example :**
```cpp
//Run Code To Demonstrate use of set.end()
// set::end
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

**[Run Code](https://ideone.com/4xC9ZF)**