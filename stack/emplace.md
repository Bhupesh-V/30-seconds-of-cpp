# emplace

**Description** : The emplace() member inserts an element at the top
of the stack and constructs the element in place from the arguments
provided. This can be more efficient than push in certain situations
and avoid temporaries. emplace() effectively forwards its arguments to
a constructor that is placed at the top of the stack.

**Example**:
```cpp
    std::stack<std::string> st;
    // Add some strings to the stack
    st.emplace("C++ world");
    st.emplace("Hello");
    std::cout << st.top();
    st.pop();
    std::cout << ", " << st.top() << std::endl;
```
**[Run Code](https://rextester.com/TJAOH56215)**
