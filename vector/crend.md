# crend

**Description** : The function returns an reverse_iterator pointing to the last element in the container (i.e., its reverse beginning). The iterator points to past-the-end element of the vector. If the container is empty, this function returns the same as vector::cbegin.

**Example**:
```cpp
// Demonstrates cend() 
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector = {10,20,30,40,50};

  std::cout << "myvector contains:";

  for (auto it = myvector.cbegin(); it != myvector.cend(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
```
**[Run Code](https://rextester.com/HOY41620)**

