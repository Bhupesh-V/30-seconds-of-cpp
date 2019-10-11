# crbegin()

**description**
Returns a const_reverse_iterator pointing to the last element in the container (i.e., its reverse beginning).

**example**

```
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

