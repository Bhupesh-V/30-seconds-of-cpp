# max_size

**Description :**
    This method is used to find out the maximum number of elements that can be stored in a set. It returns a numerical value of that max potnetial size. It is still possible for failure to insert elements to occur sometime before reaching this max_size however.

**Example :**
```cpp
//Run Code To Demonstrate use of set.max_size()
#include <iostream>
#include <set>

int main ()
{
  int i;
  std::set<int> myset;

  if (myset.max_size() > 5)
  {
    myset.insert(1);
    myset.insert(2);
    myset.insert(3);
    myset.insert(4);
    myset.insert(5);
    std::cout << "The set can hold " << myset.max_size() << " elements.\n";
    std::cout << "The set currently holds 5 elements.\n";
  }

  return 0;
}

```

**[Run Code](https://ideone.com/1jSnv4)**