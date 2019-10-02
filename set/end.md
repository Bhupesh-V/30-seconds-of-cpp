# end

**Description :**
This method is used to return an iterator to the element just after the last element of the set. The return type is a bidirectional iterator. 

**Example :**
```cpp
//Run Code To Demonstrate use of set.end()
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
**[Run Code](https://rextester.com/LVZ34285)**