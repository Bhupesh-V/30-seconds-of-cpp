# crend

**Description :**
    This method is used to return a const_reverse_iterator pointing to the element that would theoretically precede the first element in the container (which is considered its reverse end).

**Example :**
```cpp
//Run Code To Demonstrate use of set.crend()
// set::crend
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

