# pop

**Description** : removes the first(largest) value in the priority_queue and reorders it accordingly to contain the second largest as the first value

**Example**:
``` cpp

    std::priority_queue<int> my;
    my.push(2);
    my.push(10);
    my.push(4);

    // returns the first value of the queue(largest)
    std::cout << my.top() << "\n";
    
    // inserts 20 as it is now the largest it comes to the first position
    my.push(20);
    
    std::cout << my.top() << "\n";
    
    // removes the largest value i.e 20
    my.pop();
    
    // largest is 10 now as 20 is removed
    std::cout<<my.top()<<"\n";
    
    // removes largest values i.e 10
    my.pop();

    // largest is 4 now
    std::cout<<my.top();

```

**[Run Code](https://rextester.com/XWWB77826)**


