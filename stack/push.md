# push

**Description** :In computer science, a stack is an abstract data type that serves as a collection of elements, with two principal operations: push, which adds an element to the collection, and. pop, which removes the most recently added element that was not yet removed.
**Example**:
```cpp
    // Empty stack 
    std::stack<int> mystack; 
    //pushing elements using push()
    mystack.push(0); 
    mystack.push(1); 
    mystack.push(2); 
  
    while (!mystack.empty()) { 
        //deleting elements using pop()
        std::cout << ' ' << mystack.top(); 
        mystack.pop(); 
    } 
```
**[Run Code](https://rextester.com/JRY48091)**

