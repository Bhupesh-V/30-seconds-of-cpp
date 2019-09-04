# erase

**Description** : Erases the specified elements from the vector.

Two variations:

1. Removes the element at position.
2. Removes the elements in the range [first, last).

**Example**:
```cpp
    std::vector<int> vector1;

    vector1 = {1,2,3,4,5,6,7,8,9};
    // print(vector1);

    // Remove 1st Element
    vector1.erase(vector1.begin());

    // Remove range of elements
    vector1.erase(vector1.begin()+2,vector1.begin()+5);

    // Bonus Example
    // Remove element with value 'valueToRemove' from vector 'vector1'
    // Using 'algorithm' C++ STL library to remove a specific value
    int valueToRemove = 7;
    std::vector<int> vector2 = { 5,6,1,7,12,3,7,9,7,2};
    vector2.erase( std::remove(vector2.begin(),vector2.end(),valueToRemove),vector2.end());

```
**[See Sample code](../snippets/vector/erase.cpp)**
**[Run Code](https://rextester.com/XWYI46957)**
