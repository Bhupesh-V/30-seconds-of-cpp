# count

**Description**: It helps in counting the occurences of an element in a vector.

**Example**:
```cpp 
    std::vector<int> v;
    
    // Initialize vector with the values {2,4,5,6,7,8,9,7,9,7,9,5,4,9,8}
    v = {2,4,5,6,7,8,9,7,9,7,9,5,4,9,8};
    
    // Output: "2 4 5 6 7 8 9 7 9 7 9 5 4 9 8" 
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    // variable to store the count the frequency of 9 
    int f=0;
    // the count function in use 
    f = count(v.begin(),v.end(),9); 


    // Output is  4 
        std::cout << f << " ";
    
    std::cout << std::endl;

    // Time complexity is O(n) 

```
**[Run Code](https://rextester.com/UEGWZP45542)**
**[See Sample Code](snippets\vector\count.cpp)**