# minmax_element

**Description** : Returns a pair with an iterator pointing to the element with the smallest
value in the range as first element, and the largest as second.

**Example**:
```cpp
    std::array<int,5> myarray {3,2,1,5,4}; // define myarray for manipulation

    auto result = std::minmax_element (myarray.begin(),myarray.end());

    std::cout << "min is " << *result.first; // returns the min element from the pair
    std::cout << ", at position " << (result.first-myarray.begin()) << '\n'; // returns the position of the min element
    std::cout << "max is " << *result.second; // returns the max element from the pair
    std::cout << ", at position " << (result.second-myarray.begin()) << '\n'; // returns the position of the max element
  
```
**[See Sample code](../snippets/algorithm/minmax_element.cpp)**
**[Run Code](https://rextester.com/WZHNI30832)**