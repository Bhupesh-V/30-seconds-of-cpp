# find

**Description :**
    This method is used to check whether a particular element exists in the set or not. If found, it returns an iterator to that element, otherwise it returns an iterator to end.

**Example :**
```cpp
//Run Code To Demonstrate use of set.find()
#include <iostream>
#include <set>

int main ()
{
std::set<int> myset;
std::set<int>::iterator it;

// set some initial values:
for (int i=1; i<=5; i++) myset.insert(i*10);    // set: 10 20 30 40 50

it=myset.find(20);
myset.erase (it);
myset.erase (myset.find(40));

std::cout << "myset contains:";
for (it=myset.begin(); it!=myset.end(); ++it)
    std::cout << ' ' << *it;
std::cout << '\n';

return 0;
}
```
**[Run Code](https://rextester.com/FOP65524)**