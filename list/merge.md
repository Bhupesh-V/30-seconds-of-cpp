# merge

**Description :** The list::merge() is an inbuilt function in C++ STL which merges two sorted lists into one. 
 
**Example** :
```cpp
    // declaring the lists 
    // initially sorted 
    std::list<int> list1 = { 10, 20, 30 }; 
    std::list<int> list2 = { 40, 50, 60 }; 
  
    // merge operation 
    list2.merge(list1); 
  
    std::cout << "List:  "; 
  
    for (auto it = list2.begin(); it != list2.end(); ++it) 
        std::cout << *it << " "; 

```
