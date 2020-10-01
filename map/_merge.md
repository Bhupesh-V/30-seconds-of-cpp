# back

**Description** : The C++ function std::list::merge() merges two sorted lists into one by using move semantics.

**Example**:
```cpp
    list<int> l1 = {31, 11, 5, 1};
   list<int> l2 = {30, 20, 10};

   l2.merge(move(l1), cmp_fun);

   cout << "List contains following elements after merge operation" << endl;

   for (auto it = l2.begin(); it != l2.end(); ++it)
      cout << *it << endl;
```
**[Run Code](https://rextester.com/YBXY32315)**
