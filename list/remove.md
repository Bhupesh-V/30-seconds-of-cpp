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
    for (auto value : demoList) {
        std::cout << value << " "; 
    }
  
    // delete all elements with value 20 
    demoList.remove(20); 

    // List after removing elements 
    std::cout << "\nList after removing elements: "; 
    for (auto value : demoList) {
        std::cout << value << " "; 
    }
 
```
**[Run Code](https://rextester.com/KDDH67495)**