# sort

**Description** : Puts the vector in increasing or decreasing order
**Example**:
```cpp
    //Declare the vector  
    std::vector<int> v {-1,0,4,-5,12,2,10,-11,3,5};

    //Function to sort values in increasing order in the vector

    std::sort(v.begin(), v.end());
    
    //Function to sort values in decreasing order in the vector

    std::sort(v.begin(), v.end(), std::greater<int>()); 

```
**[See Sample code](../snippets/vector/sort.cpp)**
**[Run Code](https://rextester.com/FFTEBY25900)**