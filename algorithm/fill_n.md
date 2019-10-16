# fill_n

**Description** : Assigns the given `value` to the first `count` elements in the range beginning at `first` if `count > 0`. Does nothing otherwise.

**Example**:

```c++
	std::vector<int> v1{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
 
    std::fill_n(v1.begin(), 5, -1); // here 5 is count
 
    for (auto elem : v1) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
```

**[Run Code](https://rextester.com/SVV31854)**

