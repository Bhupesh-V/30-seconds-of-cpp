# emplace_back

**Description** : emplace_back() function is used to add an element to the end of the list

**Example**:
```cpp
    std::list<int> mylist;

    mylist.emplace_back(1);
    mylist.emplace_back(2);
    mylist.emplace_back(3);

    std::cout << "mylist contains: ";
    for (auto& x: mylist)
        std::cout << x << " ";
 
```
**[Run Code](https://rextester.com/DKWI57315)**
