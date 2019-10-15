# crbegin

**Description :**
    This method is used to returna a const_reverse_iterator pointing to the last element in the container (i.e., its reverse beginning).

**Example :**
```cpp
//Run Code To Demonstrate use of set.crbegin()
// set::crbegin
#include <iostream>
#include <set>

int main ()
{
  std::set<int> myset = {50,20,60,10,25};

  std::cout << "myset backwards:";
  for (auto rit=myset.crbegin(); rit != myset.crend(); ++rit)
    std::cout << ' ' << *rit;
  
  std::cout << '\n';

  return 0;
}
```

**[Run Code](https://ideone.com/lcbhB0)**