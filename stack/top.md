# top

**Description** : top() function is used to reference the top(or the newest) element of the stack.

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
**[Run Code](https://rextester.com/OMMI96105)**
