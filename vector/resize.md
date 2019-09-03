# resize

**Description :** 

Resizes vector to contain n elements.

If the vector is resized to larger size than it was originally then additional elements will be initialized to value specified by the second parameter ( optional ) or defaulted to 0 if the parameter is not provided.

**Example** :

```cpp
    // Initialize empty vector
    vector<int> myVector; 
    
    // Resize the vector to contain 5 elements with default value, 0
    myVector.resize(5);
    
    // Resize the vector to contain 10 elements, sets additional elements value to 1
    myVector.resize(10,1);

    // Outputs the resized vector with size of 10 elements
    for (int it : myVector){
        std::cout << it << " ";
    }
    
    // Resize the vector to contain 5 elements
    myVector.resize(5);
    
    std::cout << std::endl;
    // Outputs the resized vector with size of 5 elements
    for (int it : myVector){
        std::cout << it << " ";
    }
```
**[Run Code](https://rextester.com/PTX81543)**
