#find

**Description :** This function Searches the container for an element

Parameters: The function accepts one mandatory parameter key which specifies the key to be searched in the map container. 

Return: The function returns an iterator or a constant iterator which refers to the position where the key is present in the map. If the key is not present in the map container, it returns an iterator or a constant iterator which refers to map.end(). 

**Example** :

```cpp
#include <iostream>
#include <map>

int main ()
{
  std::map<char,int> mymap;

  mymap['a']=50;
  mymap['b']=100;
  mymap['c']=150;

  auto it = mymap.find('b');
  if (it != mymap.end())
    mymap.erase (it);

  // print content:
  std::cout << "elements in mymap:" << '\n';
  std::cout << "a => " << mymap.find('a')->second << '\n';
  std::cout << "c => " << mymap.find('c')->second << '\n';
  return 0;
}
```
**[Run Code](https://rextester.com/FCDLG43223)**