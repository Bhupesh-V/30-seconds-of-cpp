# inclusive_scan

**Description :**  Inclusive Scan computes a binary associative operation (`std::plus<>()` by default) on the elements from `first` (included) to `last` (excluded) and writes the results in the range starting from `d_first`; if provided an initial value will be used. Available in C++17 and above.
  
**Example** :

```cpp
    // Compute prefix index sum of all the values in v    
    std::cout << "\n\nPrefix index sum of v: ";
    std::inclusive_scan(v.begin(),
                        v.end(),
                        std::ostream_iterator<int>(std::cout, " "));

    // Compute prefix index sum of all the values in v with an initial value of 5    
    std::cout << "\n\nPrefix index sum of v (with initial value 5): ";
    std::inclusive_scan(v.begin(),
                        v.end(),
                        std::ostream_iterator<int>(std::cout, " "),
                        std::plus<>{},
                        5);

    // Compute prefix index sum of the first 3 values in v    
    std::cout << "\n\nPrefix index sum for first 3 elements of v: ";
    std::inclusive_scan(v.begin(),
                        v.begin() + 3,
                        std::ostream_iterator<int>(std::cout, " "));

    // Compute prefix index product of all the values in v    
    std::cout << "\n\nPrefix index product of v: ";
    std::inclusive_scan(v.begin(),
                        v.end(),
                        std::ostream_iterator<int>(std::cout, " "),
                        std::multiplies<>{},
                        1);
```
**[See Sample code](snippets/algorithm/inclusive_scan.cpp)**<br>
**[Run Code](https://rextester.com/UVR33146)**


