# back

**Description** : It return const_reverse_iterator to reverse beginning.

**Example**:
```cpp
    std::set<int> myset = {50,40,30,20,10};

   std::cout << "myset backwards:";
   for (auto rit = myset.crbegin(); rit != myset.crend(); ++rit)
      std::cout << ' ' << *rit;

   std::cout << '\n';
```
**[Run Code](https://rextester.com/TCSE62368)**
