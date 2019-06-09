# clear

**Description**: Remove all current elements of the vector, reducing its size to 0.

**Example**:
```cpp
    std::vector<int> myVector;
    
    // Initialize vector with the values {1,2,3,4,5}
    myVector = {1,2,3,4,5};
    
    // Output: "1 2 3 4 5"
    for (int i : myVector) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    // Size of vector is 5
    std::cout << "Vector size: " << myVector.size() << std::endl;
    
    // Clear the vector of all values, myVector now contains no values
    myVector.clear(); 
    
    // Output is blank
    for (int i : myVector) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Size of vector is 0
    std::cout << "Vector size: " << myVector.size() << std::endl;
```
