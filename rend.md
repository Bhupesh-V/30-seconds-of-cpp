# rend

**Description :** Returns a reverse iterator pointing to the theoretical element right before the first element in the map container (which is considered its reverse end).

**Example** :

```cpp
// map::rbegin/rend
#include <iostream>
#include <map>

int main ()
{
  std::map<char,int> mymap;

  mymap['x'] = 100;
  mymap['y'] = 200;
  mymap['z'] = 300;

  // show content:
  std::map<char,int>::reverse_iterator rit;
  for (rit=mymap.rbegin(); rit!=mymap.rend(); ++rit)
    std::cout << rit->first << " => " << rit->second << '\n';

  return 0;
}
```
**[Run Code](https://rextester.com/live/EYUQ27876)**