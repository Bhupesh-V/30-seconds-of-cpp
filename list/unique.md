# unique

**Description** : Unique function removes the consecutive duplicate elements in a list from the range [first,last).
Also supports a callback function to be passed as a parameter. Removes the second element of the two consecutive elements that are being compared when the callback returns true.
The time complexity is linear.

**Example**:
```cpp
    std::list<int> duplicates {0,1,1,2,3,4,4,5,5,5,5,7,8,8,9};
    // Unique function removes the consecutive duplicate elements in a list
    duplicates.unique();

    // Printing the unique elements
    std::cout << "Unique Elements are : " ;
    for(auto element: duplicates) {
        std::cout << element << " ";
    }

    // Computing and Printing the elements which differ by 2 or more
    std::cout << "\n";
    std::cout << "Printing elements which differ by 2 or more : ";
    duplicates.unique(differenceOfTwo);
    
    for(auto element: duplicates) {
        std::cout << element << " ";
    }
```
**[See Sample code](../snippets/list/unique.cpp)**
**[Run Code](https://rextester.com/OPEHHN93270)**