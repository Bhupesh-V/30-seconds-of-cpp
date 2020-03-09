# clear

**Description :** This function is used to remove all elements from the container.

**Example** :

```cpp
// Demonstrates clear() 
#include <iostream>
#include <unordered_map>

int main(){
    //declares an empty map. O(1)
    std::unordered_map<char, int> my_map; 
    
    // inserting in to unordered_map with O(1) time on average
    my_map.insert({'A', 1});
    my_map.insert({'B', 2});
    my_map.insert({'C', 3});
  
    //Print the size of the container
    std::cout << "Size of unordered_map before calling clear function: " << my_map.size() << std::endl;
    
    //Deleting all elements by calling clear function
    my_map.clear();

    //Print the size of the container
    std::cout << "Size of unordered_map after calling clear function: " << my_map.size() << std::endl;    

    return 0;
}

```
**[Run Code](https://rextester.com/BQLV19570)**