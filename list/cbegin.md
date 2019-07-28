# cbegin

**Description** :he list::cbegin() is a built-in function in C++ STL which returns a constant random access iterator which points to the beginning of the list. 

**Example**:
```cpp
    // declaration of list 
    std::list<int> lis = { 15, 26, 37, 48, 59 }; 
  
    // Prints the first element 
    std::cout << "The first element is: " << *lis.cbegin(); 
  
    // printing list elements 
    std::cout << "\nList: "; 
  
    for (auto it = lis.cbegin(); it != lis.end(); ++it) 
        std::cout << *it << " "; 
 
```
**[Run Code](https://rextester.com/NEDW55378)**