# swap

**Description :** swap() function is used to swap the contents of one stack with another stack of same type and size. Note that contents of the stack are reversed due to push & pop property of stack.

**Example :**

```cpp
int main(){

    std::stack<int> stack1;
    //pushing elements in stack1 using push()
    stack1.push(0);
    stack1.push(1);
    stack1.push(2);
    
    std::stack<int> stack2;
    //pushing elements in stack2 using push()
    stack2.push(7);
    stack2.push(8);
    stack2.push(9);
    
    stack1.swap(stack2);
    
    std::cout << "\nElements of stack1: ";
    while(!stack1.empty()) {
        std::cout << stack1.top() << " ";
        stack1.pop();
    }
    std::cout << std::endl;
    
    std::cout << "\nElements of stack2: ";
    while(!stack2.empty()) {
        std::cout << stack2.top() << " ";
        stack2.pop();
    }
    std::cout << std::endl;
    
    return 0;
}
```

**[Run Code](https://rextester.com/PVYD45391)**
