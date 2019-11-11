# reverse

**Description** : The list::reverse() is used to reverse the order of the list. 

**Example**:
```cpp
#include<iostream>
#include<list> 
using namespace std; 
  
int main() 
{ 
    // Creating a list 
    list<int> List1; 
  
    // Adding elements to the list 
    List1.push_back(1); 
    List1.push_back(2); 
    List1.push_back(3);  
  
    // Initial list: 
    cout << "List Initial: "; 
    for (auto itr = List1.begin(); itr != List1.end(); itr++) 
        cout << *itr << " "; 
  
    // reversing the list 
    List1.reverse(); 
  
    // List after reversing the order of elements 
    cout << "\n\nList after reversing: "; 
    for (auto itr = List1.begin(); itr != List1.end(); itr++) 
        cout << *itr << " "; 
  
    return 0; 
} 
    
```
**[See Sample Code](../snippets/list/reverse.cpp)**
**[Run Code](https://ideone.com/9DWs38)**

