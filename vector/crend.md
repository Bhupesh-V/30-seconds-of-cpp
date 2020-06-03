# crbegin

**Description** : The function returns an reverse_iterator pointing to the last element in the container (i.e., its reverse beginning). The iterator points to past-the-end element of the vector.

**Example**:
```cpp
// Demonstrates cbegin() 
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector = {1,2,3,4,5};

  std::cout << "myvector backwards:";
  for (auto a = myvector.crbegin(); a != myvector.crend(); ++a)
    std::cout << *a <<" ";
  std::cout << '\n';

  return 0;
}
```
**[Run Code](https://rextester.com/HOY41620)**

