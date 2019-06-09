# rbegin

**Description :** list::rbegin() is an inbuilt function in C++ STL that returns a reverse iterator which points to the last element of the list.
    
**Example** :
```cpp

    list<int> lis = { 105, 207, 309, 401, 503 }; 
  
    cout << "The list in reverse order: "; 
  
    for (auto it = lis.rbegin(); it != lis.rend(); ++it) 
        cout << *it << " "; 

```
