# pop

**Description** : pop() function is used to remove an element from the top of the stack(newest element in the stack). The element is removed to the stack container and the size of the stack is decreased by 1.

**Example**:
```cpp
    // Empty stack 
    stack<int> mystack; 
    //pushing elements using push()
    mystack.push(0); 
    mystack.push(1); 
    mystack.push(2); 
  
    while (!mystack.empty()) { 
        //deleting elements using pop()
        cout << ' ' << mystack.top(); 
        mystack.pop(); 
    } 
```
**[Run Code](https://rextester.com/MIKHGL76695)**
