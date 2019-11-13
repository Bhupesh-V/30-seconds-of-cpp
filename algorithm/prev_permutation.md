# prev_permutation

**Description :** It is used to rearrange the elements in the range [first, last) into the previous "lexicographically smaller" permutation. It returns ‘true’ if the function could rearrange the object as a lexicographically smaller permutation. Otherwise, it returns ‘false’.

**Example** :

```cpp
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort, std::reverse

int main () {
  int myints[] = {1,2,3};

  std::sort (myints,myints+3);
  std::reverse (myints,myints+3);

  std::cout << "The 3! possible permutations with 3 elements:\n";
  do {
    std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
  } while ( std::prev_permutation(myints,myints+3) );

  std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';

  return 0;
}
```
**[Run Code](https://rextester.com/GBOOB76400)**
