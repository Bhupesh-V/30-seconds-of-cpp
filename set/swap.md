# swap

**Description :**
    This method is used to exchange the content of the container by the content of x, which is another set of the same type.

**Example :**
```cpp
//Run Code To Demonstrate use of set.swap()
// set::swap
#include <iostream>
#include <set>

main ()
{
  int myints[]={12,75,10,32,20,25};
  std::set<int> first (myints,myints+3);     // 10,12,75
  std::set<int> second (myints+3,myints+6);  // 20,25,32

  first.swap(second);

  std::cout << "first contains:";
  for (std::set<int>::iterator it=first.begin(); it!=first.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  std::cout << "second contains:";
  for (std::set<int>::iterator it=second.begin(); it!=second.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
```

**[Run Code](https://ideone.com/AANjG8)**