# minimax_element

**Description** :This function returns a pair with an iterator pointing to the element with the smallest value in the range [first,last) as first element, and the largest as second.

**Example**:
```cpp
    // Creating array of size 7
    std::array<int,7> foo {3,7,2,9,5,8,6}; // 3,7,2,9,5,8,6

    //  smallest value in the range [first,last) as first element, and the largest as second
    auto result = std::minmax_element (foo.begin(),foo.end());

    // print result:
    std::cout << "min is " << *result.first;
    std::cout << ", at position " << (result.first-foo.begin()) << '\n';
    std::cout << "max is " << *result.second;
    std::cout << ", at position " << (result.second-foo.begin()) << '\n';
```
**[See Sample code](../snippets/algorithm/minimax_element.cpp)**
**[Run Code](https://rextester.com/ZNGV69767)**