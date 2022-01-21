# erase

**Description :** Removes from the unordered_set container either a single element or a range of elements ([first,last)).

**Example** :

```cpp
// unordered_set::erase
#include <iostream>
#include <string>
#include <unordered_set>

int main (){
    std::unordered_set<std::string> myset = {"USA","Canada","France","UK","Japan","Germany","Italy"};

    myset.erase ( myset.begin() );                    // erasing by iterator
    myset.erase ( "France" );                         // erasing by key
    myset.erase ( myset.find("Japan"), myset.end() ); // erasing by range

    std::cout << "myset contains:";
    
    for ( const std::string& x: myset ){
        std::cout << " " << x;
    }
    
    std::cout << std::endl;

    return 0;
}
```
[**Run Code**](https://rextester.com/HQQGSD91688)
