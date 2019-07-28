# crbegin

**Description** : The list::crbegin() is a built-in function in c++ STL that returns a constant reverse iterator which points to the last element of the list i.e reversed beginning of container.

**Example**:
```cpp
    // declaration of the list 
    std::list<int> lis = { 109, 207, 305, 403, 501 }; 
  
    // prints the last element 
    std::cout << "The last element is: " << *lis.crbegin(); 
    std::cout << "\nList: "; 
  
    for (auto it = lis.crbegin(); it != lis.crend(); ++it) 
        std::cout << *it << " "; 

```
**[Run Code](https://rextester.com/XVFTEG19372)**