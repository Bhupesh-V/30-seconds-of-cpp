# push

**Description** : push() function is used to insert an element at the top of the stack. The element is added to the stack container and the size of the stack is increased by 1.

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

