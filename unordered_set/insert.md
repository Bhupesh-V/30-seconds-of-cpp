# insert

**Description :** Inserts new elements in the unordered_set.

Each element is inserted only if it is not equivalent to any other element already in the container (elements in an unordered_set have unique values).

**Example** :

```cpp
// unordered_set::insert
#include <iostream>
#include <string>
#include <array>
#include <unordered_set>

int main (){
    std::unordered_set<std::string> myset = {"yellow","green","blue"};
    std::array<std::string,2> myarray = {"black","white"};
    std::string mystring = "red";

    myset.insert (mystring);                        // copy insertion
    myset.insert (mystring+"dish");                 // move insertion
    myset.insert (myarray.begin(), myarray.end());  // range insertion
    myset.insert ( {"purple","orange"} );           // initializer list insertion

    std::cout << "myset contains:";
    for (const std::string& x: myset){
        std::cout << " " << x;
    }
    std::cout <<  std::endl;

    return 0;
}
```
[**Run Code**](https://rextester.com/PYOIV53339)
