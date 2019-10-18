# sort

**Description :**  This function is used delete the maximum element of the heap.

**Example** :

```cpp   
    //sample vector
    std::vector<int> v1 = {2,5,8,7,4,5};
    
    //converting vector into heap
    make_heap(v1.begin(),v1.end());
    //printing first element
    std::cout << "first element of the heap: " << v1.front() << std::endl;
    //outputs 8
    
    pop_heap(v1.begin(),v1.end());
    //pops the maximum element in the heap
    //printing frist element
    std::cout << "first element of the heap after using pop_heap: " << v1.front() << std::endl;
```
**[Run Code](https://rextester.com/MWK38216)**
