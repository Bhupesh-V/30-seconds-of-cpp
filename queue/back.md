# back

**Description** : back() function is used to reference the last element (i.e the newest element) of the queue. This function can be used to fetch the last element of a queue.

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
    
    // Print the last/newest element in the queue
    std::cout << myqueue.back();
```
**[Run Code](https://rextester.com/MJAK44967)**
