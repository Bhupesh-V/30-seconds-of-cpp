# swap

**Description** : This function is used to swap the contents of one list with another list of same type and size.

**Example**:
```cpp
    // list container declaration 
    std::list<int> mylist1{ 1, 2, 3, 4 }; 
    std::list<int> mylist2{ 3, 5, 7, 9 }; 
  
    // using swap() function to  
    //swap elements of lists 
    mylist1.swap(mylist2); 
  
    // printing the first list 
    std::cout << "mylist1 = "; 
    for (auto value : mylist1) {
        std::cout << ' ' << value; 
    }
  
    // printing the second list 
    std::cout << std::endl << "mylist2 = "; 
    for (auto value : mylist2) {
        std::cout << ' ' << value; 
    }

```

**[See Sample Code](../snippets/list/swap.cpp)**
**[Run Code](https://rextester.com/YBG44941)**
