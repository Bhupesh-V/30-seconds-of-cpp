# insert_or_assign

**Description :** This function is used to insert elements with a particular key in the `unordered_map` container, similar to the `insert` method. However, it allows you to assign as well, if they key that you pass already exists.

**Example** :

```cpp
// Demonstrates insert_or_assign()
#include <iostream>
#include <unordered_map>

int main(){
    //declares an empty map. O(1)
    std::unordered_map<char, int> mymap;

    // inserting in to unordered_map with O(1) time on average
    // NOTE: Unlike insert(), this is not an overloaded function,
    // so it takes in two arguments rather than one
    mymap.insert_or_assign('A', 1);
    mymap.insert_or_assign('b', 2);
    mymap.insert_or_assign('c', 3);
    mymap.insert_or_assign('A', 4);

    //print unordered_map elements
    for (auto it = mymap.begin(); it != mymap.end(); ++it){
        std::cout << it->first << " = "<< it->second << '\n';
    }
    return 0;
}

```
