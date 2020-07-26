# erase

**Description :**  Removes from the unordered_set container either a single element or a range of elements ([first,last)).<br />

**Example** :

```cpp
// unordered_set::erase
#include <iostream>
#include <string>
#include <unordered_set>

int main ()
{
  std::unordered_set<std::string> myset =
  {"USA","Canada","France","UK","Japan","Germany","Italy"};

  myset.erase ( myset.begin() );                    // erasing by iterator
  myset.erase ( "France" );                         // erasing by key
  myset.erase ( myset.find("Japan"), myset.end() ); // erasing by range

  std::cout << "myset contains:";
  for ( const std::string& x: myset ) std::cout << " " << x;
  std::cout << std::endl;

  return 0;
}
```
*Output* :
```cpp
myset contains: Canada USA Italy
```
**Complexity:**<br />
Average case: Linear in the number of elements removed .<br />
Worst case: Linear in the container size.
