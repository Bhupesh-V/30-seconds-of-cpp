# swap

**Description** : swap() function is used to exchange the contents of two queues but the queues must be of **same type**, although sizes may differ.

**Example**:
```cpp
    // Take any two queues
    std::queue<int> queue1, queue2;
    
    // Fill queue1 with { 1, 2, 3, 4 }
    for (int i=1; i<5; i++) {
        queue1.push(i);
    }
    
    // Fill queue2 with { 10, 9, 8, 7, 6, 5 }
    for (int i=10; i>4; i--) {
        queue2.push(i);
    }
    
    // Swap elements of queues
    queue1.swap(queue2);
    
    // Print the first queue
    std::cout << "queue1 = ";
    while (!queue1.empty()) {
        std::cout << queue1.front() << " ";
        queue1.pop();
    }
    
    // Print the second queue
    std::cout <<"\nqueue2 = ";
    while (!queue2.empty()) {
        std::cout << queue2.front() << " ";
        queue2.pop();
    }
```
**[Run Code](https://rextester.com/ESVFF46211)**
