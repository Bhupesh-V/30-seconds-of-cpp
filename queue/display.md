# display

**Description** : display() function is used to display the queue.

**Example**:
```cpp
    // Empty queue
    std::queue<int> myqueue; 

    // pushing elements into queue using push()
    myqueue.push(0); 
    myqueue.push(1); 
    myqueue.push(2); 
    
    // print contents of queue
    while (!myqueue.empty()) { 
        std::cout << ' ' << myqueue.front(); 
        myqueue.pop(); 
    } 
```
