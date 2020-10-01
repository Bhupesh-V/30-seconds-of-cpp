# back

**Description** : The C++ function std::multimap::equal_range() returns range of elements that matches specific key.

The range is defined by two iterators, one points to the first element that is not less than key k and another points to the first element greater than key k.

**Example**:
```cpp
    multimap<char, int> m = {
      {'a', 1},
      {'b', 2},
      {'b', 3},
      {'b', 4},
      {'d', 5}
        };

   auto ret = m.equal_range('b');

   cout << "Elements associated with key 'b': ";

   for (auto it = ret.first; it != ret.second; ++it)
      cout << it->second << " ";
   cout << endl;

```
**[Run Code](https://rextester.com/KJHRH39506)**
