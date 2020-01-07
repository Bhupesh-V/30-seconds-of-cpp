/*
    Author : Amr Akmal
    Date : 07/01/2020
    Time : 19:35
    Description : clear in an unordered_map.
*/

# clear

**Description :**
    This method is used to remove all the elements from the unordered_map and make its size zero

**Example :**
```cpp
//Run Code To Demonstrate use of unordered_map.clear()
#include<iostream>
#include<unordered_map>

int main(){
    // Create an unordered_map object holding integers
    std::unordered_map<int, int> my_unordered_map;
    my_unordered_map.insert({1, 2});
    my_unordered_map.insert({3, 4});
    my_unordered_map.insert({5, 6});
    // Removing all the elements in the unordered_set, takes O(n) time
    my_unordered_map.clear();
    std::cout << "Size of my_unordered_map is : " << my_unordered_map.size() << std::endl;

    return 0;
}

```
**[Run Code](https://ideone.com/j8Vhja)**

