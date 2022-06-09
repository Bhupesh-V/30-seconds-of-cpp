# contains

**Description :**  Check whether there is an element with a specified key in the container. Returns true if present, otherwise false. 

Requires C++20.
  
**Example** :

```cpp

/*
   Output:
   ======
   Key 'a' found!
   Key 'z' not found..
*/

#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<char, int> unordmapAscii = {{'a', 97}, {'b', 98}};
 
    // Test 1 - Key present
    // ====================
    if (unordmapAscii.contains('a'))
    {
        std::cout << "Key 'a' found!\n";
    } 
    else 
    {
        std::cout << "Key 'a' not found..\n";
    }

    // Test 2 - Key absent
    // ====================
    if (unordmapAscii.contains('z')) 
    {
        std::cout << "Key 'z' found!\n";
    } 
    else 
    {
        std::cout << "Key 'z' not found..\n";
    }
    return 0;
}

```

**[Run Code](https://wandbox.org/permlink/w0cRMQtd4bAGRqpc)**
