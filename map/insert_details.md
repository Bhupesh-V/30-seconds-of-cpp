# insert_details

**Description1 :** The function map.insert() is used to insert a particular key-value pair in the map container. But if the key is already present in the container, it will no longer update it. 
Syntax: mymap.insert({"key","value"});

**Desciption2 :** insert function with two parameters iterator1 and iterator2 which specifies the range of elements. All the elements in the range [iterator1, iterator2) are inserted in another map container.
Syntax: map_name.insert(iterator position1, iterator position2)

**Example** :
```cpp

//Demonstration begin()
#include <iostream> 
#include <map> 
using namespace std; 
  
int main() { 
    // declaration of map container and inserting elements
    
    std::map<char, int> mymap; 
    mymap.insert({'a',1});
    mymap.insert({'b',2});
    mymap.insert({'c',3});
    // printing the contents of the map
    for (auto key2Value : mymap) {
        std::cout << key2Value.first << " = " << key2Value.second << '\n';  
    }
    mymap.insert({'a',4});

    // printing the contents of the map after inserting key value 2 again no change in key value 'a'
    
    std::cout<<"Printing after adding ('a',4)"<<endl;
    for (auto key2Value : mymap) {
        std::cout << key2Value.first << " = " << key2Value.second << '\n';  
    }
    
    map<char,int> map2;
    // iterator map_name.insert(iterator position1, iterator position2), insert being used to insert all elements in range(pos1,pos2)
    map2.insert(mymap.begin(),mymap.end());
    
    std::cout<<"Printing elements of map2"<<endl;
    for (auto key2Value : map2) {
        std::cout << key2Value.first << " = " << key2Value.second << '\n';  
    }
    return 0; 
} 

```

**[Run Code](https://rextester.com/YKSW9473)**