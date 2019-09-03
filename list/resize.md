# resize

**Description :** The list::resize() is a built-in function in C++ STL which is used to resize a list container. 

**Example** :
```cpp
    // Creating a list 
    list<int> demoList; 
  
    // Adding elements to the list 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
  
    // Initial list: 
    cout << "Initial List: "; 
    for (auto value : demoList) {
        std::cout << value << " "; 
    }
  
    // Resize list to contain less elements 
    demoList.resize(2); 
    cout << "\n\nList after first resize: "; 
    for (auto value : demoList) {
        std::cout << value << " "; 
    }
  
    // Resize list to contain more elements 
    demoList.resize(4); 
    cout << "\n\nList after second resize: "; 
    for (auto value : demoList) {
        std::cout << value << " "; 
    }
  
    // resize list to contain more elements 
    // with a specified value 
    demoList.resize(5, 50); 
    cout << "\n\nList after third resize: "; 
    for (auto value : demoList) {
        std::cout << value << " "; 
    }

```
