# push
**Description** : push() function is used to insert an element at the top of the stack. The element is added to the stack container and the size of the stack is increased by 1.

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
        }

        return 0;
    }
```