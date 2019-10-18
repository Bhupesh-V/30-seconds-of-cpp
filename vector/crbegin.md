# cbgin

**Description** : The function returns an const_reverse_iterator pointing to the last element in the container (i.e., its reverse beginning).

Notes:

1. The iterator points to past-the-end element of the vector.
2. Iterator cannot modify the contents of the vector.

**Example**:
```cpp
// Demonstrates cbegin() 
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector = {1,2,3,4,5};

  std::cout << "myvector backwards:";
  for (auto rit = myvector.crbegin(); rit != myvector.crend(); ++rit)
    std::cout << ' ' << *rit;
  std::cout << '\n';

  return 0;
}
```
**[Run Code](https://rextester.com/HOY41620)**

