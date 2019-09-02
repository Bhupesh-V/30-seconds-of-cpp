# back

**Description :** 

Returns a reference to the last element in the vector

**Example** :

```cpp
    // Initialize int vector
    vector<int> myVector = {1, 2, 3, 4, 5}; 
    
    // Save reference to the last element
    int& lastEle = myVector.back();
  
    // Last element is 5
    std::cout << myVector.back() << " ";
    
    // Change the last element by changing the reference variable lastEle
    lastEle = 10;
  
    // Last element is 10
    std::cout << myVector.back() << " ";
    
```
**[Run Code](https://rextester.com/RHA74762)**
