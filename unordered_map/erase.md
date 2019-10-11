# erase

**Description :** This function is used to erase a key and it's associated value of an unordered map.

**Example** :

```cpp
// Demonstrates erase() 
#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    //declares an empty map. O(1)
    unordered_map<char, int> mymap; 
    
    //inserting in to unordered_map with O(1) time on average
    mymap.insert({'A', 1});
    mymap.insert({'b', 2});
    mymap.insert({'c', 3});
  
    //print elements of  unordered_map before erasing
    cout << "Befor erasing \n";
    for (auto it = mymap.begin(); it != mymap.end(); ++it){ 
        cout << it->first << " = "<< it->second << '\n'; 
    }

    //erasing key 'A' with O(1)
    if(mymap.find('A') != mymap.end()){
        mymap.erase('A');
    }
   
    //print elements of  unordered_map after erasing
    cout << "\nAfter erasing \n";
    for (auto it = mymap.begin(); it != mymap.end(); ++it){ 
        cout << it->first << " = "<< it->second << '\n'; 
    }

    return 0;
}

```
**[Run Code](https://rextester.com/ZJYQ91403)**
