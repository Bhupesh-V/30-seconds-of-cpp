# partition_copy

**Description** : Copies the elements from the range (first, last) to two different ranges depending on the value returned by the predicate p. The elements that satisfy the predicate p are copied to the range beginning at d_first_true. The rest of the elements are copied to the range beginning at d_first_false.

**Example**:
```cpp
    int arr [10] = {1,2,3,4,5,6,7,8,9,10};
    int true_arr [5] = {0};
    int false_arr [5] = {0};
 
    std::partition_copy(std::begin(arr), std::end(arr), std::begin(true_arr),std::begin(false_arr),
                        [] (int i) {return i > 5;});
 
    std::cout << "true_arr: ";
    for (int x : true_arr) {
        std::cout << x << ' ';
    }
    std::cout << '\n'; 
 
    std::cout << "false_arr: ";
    for (int x : false_arr) {
        std::cout << x << ' ';
    }
    std::cout << '\n'; 
 
    return 0;
```
**[See Sample code](../snippets/algorithm/partition_copy.cpp)**
**[Run Code](https://rextester.com/EUDW93254)**
