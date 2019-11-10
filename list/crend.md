# crend

**Description :** The list::crend() is a built-in function in C++ STL that returns a constant reverse iterator which points to the theoretical element preceding the first element in the list i.e. the reverse end of the list. 

**Example** :
```cpp
    // declaration of the list 
    std::list<int> lis = { 27, 46, 65, 84, 30, 22 }; 
  
    std::cout << "List: " << std::endl; 
  
    for (auto it = lis.crbegin(); it != lis.crend(); ++it) 
        std::cout << *it << " "; 

```
**[Run Code](https://rextester.com/MUBAJ40037)**
