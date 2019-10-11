# size

**Description :** This function is used to return size of an unordered map.

**Example** :

```cpp
// Demonstrates size() 
#include <iostream>
#include <unordered_map>
using namespace
int main(){
    //declares an empty map. O(1)
    unordered_map<char, int> mymap; 

    //print size of mymap before inserting key and value in unordered_map
      cout << "mymap size is = " <<mymap.size()<< '\n';
    
    //inserting in to unordered_map with O(1) time on average
    mymap.insert({'A', 1});
    mymap.insert({'b', 2});
    mymap.insert({'c', 3});
  
    //print size of mymap After inserting key and value in unordered_map
        cout << "mymap size is = " <<mymap.size()<< '\n';

    return 0;
}

```
**[Run Code](https://rextester.com/UPY54368)**
