# push

**Description** : push() function is used to insert an element at the back of the queue. The element is added to the queue container and the size of the queue is increased by 1.

**Example**:
```cpp
    // Empty queue
    queue<int> myqueue; 

    // pushing elements into queue using push()
    myqueue.push(0); 
    myqueue.push(1); 
    myqueue.push(2); 
  
    // print contents of queue
    while (!myqueue.empty()){ 
        cout << ' ' << myqueue.front(); 
        myqueue.pop(); 
    } 
```
**[Run Code](https://rextester.com/OEC31098)**
