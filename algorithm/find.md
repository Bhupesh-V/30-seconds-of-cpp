# find

**Description** : Returns the first element in the range [first, last) that satisfies specific criteria(searches for an element equal to *value*).

**Example**:
```cpp
    std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };

    int searchme = 4;
    if(find(std::begin(v), std::end(v), searchme) != end(v)){
        std::cout <<"\n v contains 3";
    }
    else
        std::cout<<"No match !!";
```
**[Run Code](https://rextester.com/FIVI88863)**