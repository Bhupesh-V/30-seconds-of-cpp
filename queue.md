# ``<queue>``
  
<details>
<summary>View contents</summary>
<ol>
    <li><a href="#pop"><code>pop</code></a></li>
    <li><a href="#back-queue"><code>back</code></a></li>
    <li><a href="#push"><code>push</code></a></li>
    <li><a href="#size-queue"><code>size</code></a></li>
    <li><a href="#swap-queue"><code>swap</code></a></li>
    <li><a href="#empty-queue"><code>empty</code></a></li>
    <li><a href="#front-queue"><code>front</code></a></li>
    <li><a href="#emplace-queue"><code>emplace</code></a></li>
    <li><a href="#queue"><code>queue</code></a></li>
    <li><a href="#~queue"><code>~queue</code></a>
</ol>
</details>

# pop
**Description** : pop() function is used to remove an element from the front of the queue (ie. the oldest element in the queue). The element is removed from the queue container and the size of the queue is decreased by 1.

**Example**:
```cpp
    // Empty queue
    queue<int> myqueue; 

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
    while (!myqueue.empty()) { 
        cout << ' ' << myqueue.front(); 
        myqueue.pop(); 
    } 
```
**[Run Code](https://rextester.com/OEC31098)**