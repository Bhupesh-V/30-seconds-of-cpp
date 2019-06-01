# ``<stack>``
<details>
<summary>View contents</summary>

<ol>
    <li><a href="#push"><code>push</code></a></li>
    <li><a href="#pop"><code>pop</code></a></li>
    <li><a href="#top"><code>top</code></a></li>
    <li><a href="#size"><code>size</code></a></li>
    <li><a href="#swap"><code>swap</code></a></li>
    <li><a href="#empty"><code>empty</code></a></li>
    <li><a href="#emplace"><code>emplace</code></a>
</ol>
</details>

# push
**Description** : push() function is used to insert an element at the top of the stack. The element is added to the stack container and the size of the stack is increased by 1.

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

# empty
**Description** : empty() function is used to check if the stack container is empty or not.

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

# top
**Description** : top() function is used to reference the top(or the newest) element of the stack.

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


# size
**Description** : size() function is used to return the size of the satck or the number of elements in the stack.

**Example**:
```cpp
    // Empty stack 
    std::stack<int> mystack;
	mystack.push(4);
	mystack.push(5);
	mystack.push(9);
	mystack.push(1);
	mystack.push(3);

	// Stack from top to bottom becomes 3, 1, 9, 5, 4

	// Print the size of mystack (5)
	std::cout << mystack.size();
```

**[Run Code](https://rextester.com/OEZV66856)**