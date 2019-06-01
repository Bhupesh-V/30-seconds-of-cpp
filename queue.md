# ``<queue>``
  
<details>
<summary>View contents</summary>
<ol>
    <li><a href="#pop"><code>pop</code></a></li>
    <li><a href="#back"><code>back</code></a></li>
    <li><a href="#push"><code>push</code></a></li>
    <li><a href="#size"><code>size</code></a></li>
    <li><a href="#swap"><code>swap</code></a></li>
    <li><a href="#empty"><code>empty</code></a></li>
    <li><a href="#front"><code>front</code></a></li>
    <li><a href="#emplace"><code>emplace</code></a></li>
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
    while (!myqueue.empty()){ 
        cout << ' ' << myqueue.front(); 
        myqueue.pop(); 
    } 
```
**[Run Code](https://rextester.com/XACN77371)**

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

# size
**Description** : size() function is used to return the size of the queue or the number of elements in the queue.

**Example**:
```cpp
    std::queue<int> myqueue;
    myqueue.push(4);
    myqueue.push(5);
    myqueue.push(9);
    myqueue.push(1);
    myqueue.push(3);
    
    // Queue becomes 4, 5, 9, 1, 3
    
    // Print the size of myqueue
    std::cout << myqueue.size();
```
**[Run Code](https://rextester.com/ANYAP12901)**

# swap
**Description** : swap() function is used to exchange the contents of two queues but the queues must be of **same type**, although sizes may differ.

**Example**:
```cpp
    // Take any two queues
    std::queue<int> queue1, queue2;
    
    // Fill queue1 with { 1, 2, 3, 4 }
    for(int i=1; i<5; i++){
        queue1.push(i);
    }
    
    // Fill queue2 with { 10, 9, 8, 7, 6, 5 }
    for(int i=10; i>4; i--){
        queue2.push(i);
    }
    
    // Swap elements of queues
    queue1.swap(queue2);
    
    // Print the first queue
    std::cout << "queue1 = ";
    while (!queue1.empty()){
        std::cout << queue1.front() << " ";
        queue1.pop();
    }
    
    // Print the second queue
    std::cout <<"\nqueue2 = ";
    while (!queue2.empty()){
        std::cout << queue2.front() << " ";
        queue2.pop();
    }
```
**[Run Code](https://rextester.com/ESVFF46211)**

# empty
**Description** : empty() function is used to check if the queue container is empty or not. This function returns true, if the queue is empty or false, otherwise.

**Example**:
```cpp
    // Empty queue
    std::queue<int> myqueue;
    
    if(myqueue.empty()){
        std::cout << "My queue is empty";
    }
    else{
        std::cout << "My queue is not empty";
    }
```
**[Run Code](https://rextester.com/LONM40957)**

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

# emplace
**Description** : emplace() function is used to add a new element at the end of the queue, after its current last element. The element is added to the queue container and the size of the queue is increased by 1.

**Example**:
```cpp
    // Empty queue
    std::queue<int> myqueue;
    
    // adding elements into queue using emplace()
    myqueue.emplace(0);
    myqueue.emplace(1);
    myqueue.emplace(2);
    
    // print contents of queue
    while (!myqueue.empty()){
        std::cout << ' ' << myqueue.front();
        myqueue.pop();
    }
```
**[Run Code](https://rextester.com/RZID79506)**
