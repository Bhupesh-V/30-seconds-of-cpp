# iterate

**Description** : simply iterates over the priority_queue.

**Example**:
``` cpp

    std::priority_queue<int> my;

    my.push(2);
    my.push(10);
    my.push(4);


    //iterating over priority queue
    while(!my.empty()){
      std::cout<<my.top()<<" "; 
      my.pop();
    }

    //result will be 10 4 2

```

**[Run Code](https://rextester.com/KYIU16297)**


