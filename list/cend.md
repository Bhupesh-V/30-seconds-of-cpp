# cend

**Description** : The list::cend() is a built-in function in C++ STL which returns a constant random access iterator which points to the end of the list. 

**Example**:
```cpp
    // declaration of list 
    std::list<int> lis = { 100, 200, 300, 400, 500 }; 
  
    // printing list elements 
    std::cout << "List: " << std::endl; 
  
    for (auto it = lis.cbegin(); it != lis.cend(); ++it) 
        std::cout << *it << " "; 

```
**[Run Code](https://rextester.com/QTRH25197)**