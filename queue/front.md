# front

**Description** : front() function is used to reference the first element (ie. the oldest element) of the queue. This function can be used to fetch the first element of a queue.

**Example**:
```cpp
    // Empty queue
    std::queue<int> myqueue;
    
    // Add elements to queue using push()
    myqueue.push(2);
    myqueue.push(5);
    myqueue.push(4);
    myqueue.push(1);
    
    // Queue becomes 2, 5, 4, 1
    
    // Print the first/oldest element in the queue
    std::cout << myqueue.front();
```
**[Run Code](https://rextester.com/NHSYM95891)**
