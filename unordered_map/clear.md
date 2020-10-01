# clear

**Description :** This function is used to remove all elements from the container. When this function is applied to unordered_map its size becomes zero.


```
/*
   Output:
   ======
    Unordered_map size before calling clear function: 
    ump1 size = 4
    ump2 size = 0
    
    Unordered_map size after calling clear function: 
    ump1 size = 0
    ump2 size = 0
*/

#include<iostream>   
#include<unordered_map>  
  
int main() 
{ 
    // Take any two unordered_map 
    std::unordered_map<int, int> ump1, ump2; 
  
    // Inserting values 
    ump1[1] = 2; 
    ump1[3] = 4; 
    ump1[5] = 6; 
    ump1[7] = 8; 
  
    // Print the size of container 
    std::cout << "Unordered_map size before calling clear function: \n"; 
    std::cout << "ump1 size = " << ump1.size() << std::endl; 
    std::cout << "ump2 size = " << ump2.size() << std::endl; 
  
    // Deleting the  elements 
    ump1.clear(); 
    ump2.clear(); 
      
    std::cout<<std::endl;
    // Print the size of container 
    std::cout << "Unordered_map size after calling clear function: \n"; 
    std::cout << "ump1 size = " << ump1.size() << std::endl; 
    std::cout << "ump2 size = " << ump2.size() << std::endl; 
  
    return 0; 
}
```
**[Run Code](https://rextester.com/NSQ16665)**
