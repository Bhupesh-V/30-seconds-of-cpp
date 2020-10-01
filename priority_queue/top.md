# top

**Description** : top() function is used to reference the first element (ie. the largest element) of the queue.
Note that the next element may not be the second largest so inorder to get the second largest remove the top element and then find the new top element.

**Example**:
``` cpp

    std::priority_queue<int> my;

    my.push(2);
    my.push(10);
    my.push(4);

    // returns the first value of the queue(largest) i.e 10
    std::cout << my.top();

    
```

**[Run Code](https://rextester.com/VUXYQ63057)**


