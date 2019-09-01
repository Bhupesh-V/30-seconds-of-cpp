# clear

**Description** : clear() function is used to remove all the elements of the list container, thus making it size 0.

**Example**:
```cpp

    std::list<int> mylist{ 1, 2, 3, 4, 5 }; 
  
    mylist.clear(); 
    // List becomes empty 
  
    // Printing the list 
    for (auto it = mylist.begin(); it != mylist.end(); ++it) 
        std::cout << ' ' << *it; 
 
```
**[Run Code](https://rextester.com/IKAFZ38505)**
