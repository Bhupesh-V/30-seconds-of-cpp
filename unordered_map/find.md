# find

**Description :** This function is used to search for a specific key in an unordered map.

**Example** :

```cpp
// Demonstrates find() 
#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    //declares an empty map. O(1)
    unordered_map<char, int> mymap; 
    
    // inserting in to unordered_map with O(1) time on average
    mymap.insert({'A', 1});
    mymap.insert({'b', 2});
    mymap.insert({'c', 3});
  
    //finding element in unordered_map O(1) average case. Rare worst case O(n)
    if(mymap.find('A') != mymap.end()){
        cout << "A found and value is " <<mymap['A']<< '\n'; 
    }
    else{
        cout << "A not found"<< '\n';
    }

     //finding element in unordered_map O(1) average case. Rare worst case O(n)
    if(mymap.find('d') != mymap.end()){
        cout << "d found and value is " <<mymap['A']<< '\n'; 
    }
    else{
        cout << "d not found"<< '\n';
    }

    return 0;
}

```
**[Run Code](https://rextester.com/QEGP95417)**
