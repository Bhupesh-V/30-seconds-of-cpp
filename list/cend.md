# cend

**Description** : The list::cend() is a built-in function in C++ STL which returns a constant random access iterator which points to the end of the list. 

**Example**:
```cpp
    // declaration of list 
    list<int> lis = { 100, 200, 300, 400, 500 }; 
  
    // printing list elements 
    cout << "List: " << endl; 
  
    for (auto it = lis.cbegin(); it != lis.cend(); ++it) 
        cout << *it << " "; 

```
