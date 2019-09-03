# count

**Description :** : Returns the number of elements in the range `[first, last)` satisfying specific criteria(counts the elements that are equal to *value*).

**Example** :
```cpp
    std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };

    // determine how many integers in a std::vector match a target value.
    int target1 = 3;
    int num_items1 = std::count(v.begin(), v.end(), target1);
    std::cout << "number: " << target1 << " count: " << num_items1 << '\n';
```
**[Run Code](https://rextester.com/PSP35316)**