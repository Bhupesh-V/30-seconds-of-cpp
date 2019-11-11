# next_permutation

**Description :** It is used to rearrange the elements in the range [first, last) into the next "lexicographically greater" permutation. If the range could not be rearranged in a way that it produces a new lexicographically greater one it will return false even though there is a possible rearrangement. That is why it is preferable to sort elements. For N elements there would N!(factorial) permutations possible..

**Example** :

```cpp
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort

int main () {
  int integers[] = {1,2,3,4};
  std::sort(integers, integers + 4);
  std::cout<< "Before loop: "<< integers[0] << ' ' << integers[1] << ' ' << integers[2] << ' ' << integers[3] << '\n';
  std::cout << "showing all 4! permutations: \n";
  do {
    std::cout << integers[0] << ' ' << integers[1] << ' ' << integers[2] << ' ' << integers[3] << '\n';
  } while ( std::next_permutation(integers,integers+4) );

  std::cout << "After loop: " << integers[0] << ' ' << integers[1] << ' ' << integers[2] << ' ' << integers[3] << '\n';

  return 0;
} 
```
**[Run Code](https://rextester.com/QNZC30195)**