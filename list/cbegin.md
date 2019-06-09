# cbegin

**Description** :he list::cbegin() is a built-in function in C++ STL which returns a constant random access iterator which points to the beginning of the list. 

**Example**:
```cpp
    // declaration of list 
    list<int> lis = { 15, 26, 37, 48, 59 }; 
  
    // Prints the first element 
    cout << "The first element is: " << *lis.cbegin(); 
  
    // printing list elements 
    cout << "\nList: "; 
  
    for (auto it = lis.cbegin(); it != lis.end(); ++it) 
        cout << *it << " "; 
 
```
