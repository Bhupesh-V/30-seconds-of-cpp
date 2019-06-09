# swap

**Description** : This function is used to swap the contents of one list with another list of same type and size.

**Example**:
```cpp
    // list container declaration 
    list<int> mylist1{ 1, 2, 3, 4 }; 
    list<int> mylist2{ 3, 5, 7, 9 }; 
  
    // using swap() function to  
    //swap elements of lists 
    mylist1.swap(mylist2); 
  
    // printing the first list 
    cout << "mylist1 = "; 
    for (auto it = mylist1.begin(); 
              it != mylist1.end(); ++it) 
        cout << ' ' << *it; 
  
    // printing the second list 
    cout << endl 
        << "mylist2 = "; 
    for (auto it = mylist2.begin(); 
              it != mylist2.end(); ++it) 
        cout << ' ' << *it; 

```
