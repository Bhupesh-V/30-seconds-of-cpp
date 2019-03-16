# pop

**Description** : pop() function is used to remove an element from the top of the stack(newest element in the stack). The element is removed to the stack container and the size of the stack is decreased by 1.

**Example**:
```cpp
    #include<stack> 
    #include<iostream>
    
    int main(){
        stack<int> mystack; 
                        
        mystack.push(0);    //pushing elements using push()
        mystack.push(1); 
        mystack.push(2); 
  
        while (!mystack.empty()) { 
            std::cout << ' ' << mystack.top(); 
            mystack.pop();  //deleting elements using pop()
        }

        return 0;
    }
```