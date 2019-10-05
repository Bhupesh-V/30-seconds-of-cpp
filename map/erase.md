# erase

**Description :** map::erase() is a built-in function in C++ STL which is used to erase element from the container. It can be used to erase keys, elements at any specified position or a given range. 

**Example**:

```cpp
//Demonstrates erase()
#include <iostream>
#include <map>

int main(){
  
    // initialize container 
    std::map<char, int> mymap; 
  
    // insert elements in random order 
    mymap.insert({ 'a', 30 }); 
    mymap.insert({ 'b', 40 }); 
    mymap.insert({ 'c', 60 }); 
    mymap.insert({ 'd', 50 }); 
    mymap.insert({ 'e', 70 }); 
    mymap.insert({ 'f', 20 }); 
    
    //The map before using erase()
    std::cout << "The map before using erase() is : \n"; 
    std::cout << "KEY\tELEMENT\n"; 
    for (auto itr = mymap.begin(); itr != mymap.end(); ++itr) { 
        std::cout << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    
    // function to erase given keys 
    mymap.erase('e');
    
    // function to erase given position  
    auto it = mymap.find('d');
    mymap.erase(it);
    
    // function to erase in given range
    auto it1 = mymap.find('a');
    auto it2 = mymap.find('c');
    mymap.erase(it1, it2);
    
    //The map after applying erase()
    std::cout << "\nThe map after applying erase() is : \n"; 
    std::cout << "KEY\tELEMENT\n"; 
    for (auto itr = mymap.begin(); itr != mymap.end(); ++itr) { 
        std::cout << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    
    return 0;
}
```

**[Run Code](https://rextester.com/NZZSKF89749)**
