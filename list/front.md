# front

**Description** :The list::front() is a built-in function in C++ STL which is used to return a reference to the first element in a list container.

**Example**:
```cpp
    // Creating a list 
    std::list<int> demoList; 
  
    // Add elements to the List 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
  
    // get the first element using front() 
    int ele = demoList.front(); 
  
    // Print the first element 
    std::cout << ele; 
 
```
**[Run Code](https://rextester.com/ZLSH1521)**
