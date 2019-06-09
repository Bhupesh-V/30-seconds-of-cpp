# count_if

**Description** : Returns the number of elements in the range `[first, last)` satisfying specific criteria(counts the elements that are equal to *value*).

**Example**:
```cpp
    std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
 
    // use a lambda expression to count elements divisible by 3.
    int num_items3 = count_if(v.begin(), v.end(), [](int i){return i % 3 == 0;});
    std::cout << "number divisible by three: " << num_items3 << '\n';
```
**[Run Code](https://rextester.com/XYVYW31080)**