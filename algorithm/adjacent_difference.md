# adjacent_difference

**Description** : Finds the difference of an iterator with the one preceding it in the range from first to the second parameter. The values are stored in third parameter, which is returned. The first pointer of the returned iterator simply stores the value pointed by first parameter. A fourth parameter may contain the function which defines any custom operation on the pair.

**Example**:
```cpp
    std::vector v {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	std::vector<size_t> r;
    std::adjacent_difference(v.begin(), v.end(), r.begin());
 
    for (auto n : r)
        std::cout << n << ' ';
 
    std::cout << '\n';

```
**Time Complexity :**  Linear in the distance between first and last, minus one. i.e. O(last-first-1)


**[See Sample code](../snippets/algorithm/adjacent_difference.cpp)	[Run Code](https://rextester.com/MUMXYS97563)**
