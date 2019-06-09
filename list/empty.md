# empty

**Description :** The list::empty() is a built-in function in C++ STL is used to check whether a particular list container is empty or not. 

**Example** :
```cpp
    // Creating a list 
    list<int> demoList; 
  
    // check if list is empty 
    if (demoList.empty()) 
        cout << "Empty List\n"; 
    else
        cout << "Not Empty\n"; 
  
    // Add elements to the List 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
  
    // check again if list is empty 
    if (demoList.empty()) 
        cout << "Empty List\n"; 
    else
        cout << "Not Empty\n"; 
         
```
