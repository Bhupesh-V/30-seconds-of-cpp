# insert

**Description** : The list::insert() is used to insert the elements at any position of list. 

**Example**:
```cpp
    // declaring list 
    std::list<int> list1; 
  
    // using assign() to insert multiple numbers 
    // creates 3 occurrences of "2" 
    list1.assign(3, 2); 
  
    // initializing list iterator to beginning 
    std::list<int>::iterator it = list1.begin(); 
  
    // iterator to point to 3rd position 
    advance(it, 2); 
  
    // using insert to insert 1 element at the 3rd position 
    // inserts 5 at 3rd position 
    list1.insert(it, 5); 
  
    // Printing the new list 
    std::cout << "The list after inserting" << " 1 element using insert() is : "; 
    for (auto value : list1) {
        std::cout << value << " "; 
    }
  
    std::cout << std::endl; 
    
```
**[Run Code](https://rextester.com/CCMFL13509)**
