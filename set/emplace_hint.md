# emplace_hint

**Description :**
    This method is used to insert a new element in the set, if unique, with a hint on the insertion position. 

**Example :**
```cpp
//Run Code To Demonstrate use of set.emplace_hint()
// set::emplace_hint
#include <iostream>
#include <set>
#include <string>

int main ()
{
  std::set<std::string> myset;
  auto it = myset.cbegin();

  myset.emplace_hint (it,"alpha");
  it = myset.emplace_hint (myset.cend(),"omega");
  it = myset.emplace_hint (it,"epsilon");
  it = myset.emplace_hint (it,"beta");

  std::cout << "myset contains:";
  for (const std::string& x: myset)
    std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
```

**[Run Code](https://ideone.com/Z4ywJs)**