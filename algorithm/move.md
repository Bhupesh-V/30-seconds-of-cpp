# move

**Description**: Moves a range of elements from a container permanently. The value is copied from the original container into the destination container.

**Note**: This function should not be confused with the move() function from the <utility> module which has a different functionality.

**Example**:
```cpp
    std::vector<int> v1 = {1,2,3,4};             
    std::vector<int> v2 = {5,6,7,8};

    std::move(v2.begin(),v2.end(),std::back_inserter(v1)); //copies v2 to the end of v1

    std::cout << "Printing the vector v1: ";
    for (int& x: v1) {
        std::cout << ' ' << x;  
    }
    std::cout << '\n';

    std::cout << "Printing the vector v2: ";
    for (int& x: v2) {
        std::cout << ' ' << x;  
    }
```
**[Run Code](https://rextester.com/ZQXQTC72342)**
