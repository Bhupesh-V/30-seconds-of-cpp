# nth_element

**Description** :Is an STL algorithm which rearranges the list in such a way such that the element at the nth position is the one which should be at that position if we sort the list.

**Example**:
```cpp
    // Creating array of size 8
    int v[] = { 3, 2, 10, 45, 33, 56, 23, 47 }, i; 
  
    // Using std::nth_element with n as 5 
    std::nth_element(v, v + 4, v + 8); 
  
    // Since, n is 5 so 5th element should be sorted 
    for (i = 0; i < 8; ++i) { 
        cout << v[i] << " "; 
    } 
    return 0;
    
```
**[See Sample code](../snippets/algorithm/nth_element.cpp)**
**[Run Code](https://rextester.com/FJMW84431)**