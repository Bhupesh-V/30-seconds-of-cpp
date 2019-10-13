# crend()

**description**
Returns a const_reverse_iterator pointing to the theoretical element preceding the first element in the container 
(which is considered its reverse end).

**example**

```
// map::crbegin/crend
#include <iostream>
#include <map>

int main ()
{
  std::map<char,int> mymap;

  mymap['b'] = 100;
  mymap['a'] = 200;
  mymap['c'] = 300;

  std::cout << "mymap backwards:";
  for (auto rit = mymap.crbegin(); rit != mymap.crend(); ++rit)
    std::cout << " [" << rit->first << ':' << rit->second << ']';
  std::cout << '\n';

  return 0;
}
```
**output**
```
mymap backwards: [c:300] [b:100] [a:200]

```
