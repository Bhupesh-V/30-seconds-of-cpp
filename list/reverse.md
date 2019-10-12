# reverse
**Description :** The list::reverse() is a built-in function in C++ STL which is used to reverse a list container. It reverses the order of elements in the list container. 
**Example** :
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
  
    // reversing the list 
    demoList.reverse(); 
  
    // List after reversing the order of elements 
    std::cout << "\n\nList after reversing: "; 
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++) 
        std::cout << *itr << " "; 
  
