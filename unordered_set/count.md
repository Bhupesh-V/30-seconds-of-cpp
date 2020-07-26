# count

**Description :** Searches the container for elements with a value and returns 1 if an element with that value exists in the container, and zero otherwise.

**Example** :

```cpp
// unordered_set::count
#include <iostream>
#include <string>
#include <unordered_set>

int main ()
{
  std::unordered_set<std::string> myset = { "hat", "umbrella", "suit" };

  for (auto& x: {"hat","sunglasses","suit","t-shirt"}) {
    if (myset.count(x)>0)
      std::cout << "myset has " << x << std::endl;
    else
      std::cout << "myset has no " << x << std::endl;
  }

  return 0;
}
```
[**Run Code**](https://rextester.com/HYDKZ71873)
