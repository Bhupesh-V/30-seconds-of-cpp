# clear

**Description :** This function prints the elements from the last from the map container. Returns a const_reverse_iterator pointing to the theoretical element preceding the first element in the container (which is considered its reverse end).

**Example** :

```cpp
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
**[Run Code](https://rextester.com/live/UNQ96122)**
