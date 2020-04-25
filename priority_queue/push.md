# push

**Description** : inserts a element into the queue and then reorders it to contain the largest among the elements in the queue.

**Example**:
``` cpp

    std::priority_queue<int> my;

    my.push(2);
    my.push(10);
    my.push(4);

    // returns the first value of the queue(largest) i.e 10
    std::cout << my.top();

    // 20 is larger than 10 so inserting it,20 becomes the largest
    my.push(20);

    // prints the largest value i.e 20
    std::cout << my.top();

```

**[Run Code](https://rextester.com/XWWB77826)**


