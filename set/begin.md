# begin

**Description :**
    This method is used to return an iterator to the first element of the set. The return type is a bidirectional iterator to the first element of the set. 

**Example :**
```cpp
//Run Code To Demonstrate use of set.begin()
#include<iostream>
#include<set>

int main ()
{
int myints[] = {75,23,65,42,13};
std::set<int> myset (myints,myints+5);

std::cout << "myset contains:";
for (std::set<int>::iterator it=myset.begin(); it!=myset.end(); ++it)
    std::cout << ' ' << *it;

std::cout << '\n';

return 0;
}

```
**[Run Code](https://rextester.com/ECB91272)**