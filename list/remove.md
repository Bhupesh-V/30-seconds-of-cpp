# remove

**Description** :The list::remove() is a built-in function in C++ STL which is used to remove elements from a list container.

**Example**:
```cpp
    // Creating a list 
    std::list<int> demoList; 
  
    // Add elements to the List 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
  
    // List before removing elements 
    std::cout << "List before removing elements: "; 
    for (auto itr = demoList.begin(); 
         itr != demoList.end(); itr++) { 
        std::cout << *itr << " "; 
    } 
  
    // delete all elements with value 20 
    demoList.remove(20); 

    // List after removing elements 
    std::cout << "\nList after removing elements: "; 
    for (auto itr = demoList.begin(); 
        itr != demoList.end(); itr++) { 
        std::cout << *itr << " "; 
    } 
 
```
