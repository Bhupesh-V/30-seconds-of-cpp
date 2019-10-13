# find

**Description :** Searches the container for an element with a key equivalent to k and returns an iterator to it if found, otherwise it returns an iterator to map::end.

**Example** :

```cpp
// Demonstrates find() 
#include <iostream> 
#include <map> 
  
int main() { 
    // declaration of map container 
    std::map<char, int> mymap; 
    
    mymap['a'] = 1; 
    mymap['b'] = 2; 
    mymap['c'] = 3; 
  
    // using find() to check whether key 'a' is present in map or not
    
    // example 1 - when key is present
    auto itr1 = mymap.find('a');			
    
    if(itr1!=mymap.end())
	std::cout<<"Key is present"<<std::endl;
    else
	std::cout<<"Key not present"<<std::endl;


    // example 2 - when key is not present
    auto itr2 = mymap.find('z');			
    
    if(itr2!=mymap.end())
	std::cout<<"Key is present"<<std::endl;
    else
	std::cout<<"Key not present"<<std::endl;

    return 0; 
} 
```
**[Run Code]( https://rextester.com/XOL28331)**