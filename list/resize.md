# resize

**Description :** The list::resize() is a built-in function in C++ STL which is used to resize a list container. 

**Example** :
```cpp
    // Creating a list 
    std::list<int> demoList; 
  
    // Adding elements to the list 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
  
    // Initial list: 
    std::cout << "Initial List: "; 
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++) 
        std::cout << *itr << " "; 
  
    // Resize list to contain less elements 
    demoList.resize(2); 
    std::cout << "\n\nList after first resize: "; 
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++) 
        std::cout << *itr << " "; 
  
    // Resize list to contain more elements 
    demoList.resize(4); 
    std::cout << "\n\nList after second resize: "; 
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++) 
        std::cout << *itr << " "; 
  
    // resize list to contain more elements 
    // with a specified value 
    demoList.resize(5, 50); 
    std::cout << "\n\nList after third resize: "; 
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++) 
        std::cout << *itr << " "; 

```
