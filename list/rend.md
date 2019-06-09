# rend

**Description :** list::rend() is an inbuilt function in C++ STL that returns a reverse iterator which points to the position before the beginning of the list.

**Example** :
```cpp

    list<int> lis = { 109, 206, 303, 401, 506 }; 
  
    cout << "The list in reverse order: "; 
  
    for (auto it = lis.rbegin(); it != lis.rend(); ++it) 
        cout << *it << " "; 
  
```
