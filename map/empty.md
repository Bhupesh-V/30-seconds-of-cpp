```cpp

#include <iostream>
#include <map>

int main ()
{
  std::map<char,int> mymap;

  mymap['a']=1;
  mymap['b']=2;
  mymap['c']=3;

  while (!mymap.empty())
  {
    std::cout << mymap.begin()->first << " => " << mymap.begin()->second << '\n';
    mymap.erase(mymap.begin());
  }

  return 0;
}
```
**[Run Code](https://rextester.com/ESNCC45437)**

