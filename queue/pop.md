# pop

**Description** : pop() function is used to remove an element from the front of the queue (ie. the oldest element in the queue). The element is removed from the queue container and the size of the queue is decreased by 1.

**Example**:
```cpp
    // Empty queue
    std::queue<int> myqueue; 

    // pushing elements into queue using push()
    myqueue.push(0); 
    myqueue.push(1); 
    myqueue.push(2); 

    // pop items from queue
    myqueue.pop(); // pops 0 from queue
    myqueue.pop(); // pops 1 from queue
  
    // print contents of queue
    while (!myqueue.empty()) { 
        cout << ' ' << myqueue.front(); 
        myqueue.pop(); 
    } 
```
**[Run Code](https://rextester.com/XACN77371)**
