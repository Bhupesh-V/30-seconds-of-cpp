# fill_n

**Description** : Can put specific number starting from a specif position;

**Example**:
```cpp
    std::vector<int> v(10);

    //Lets print what we have in the vector
    for(int i = 0;i<10;i++){
        std::cout<< v[i] << " ";
    }
    std::cout<< "\n";

    //But i want to put number 3 four times starting in the first position
    std::fill_n(v.begin(), 4, 3);

    //And i want to put number 9 in three final positions
    std::fill_n(v.begin()+7, 3, 9);

    for(int i = 0;i<10;i++){
        std::cout<< v[i] << " ";
    }
    std::cout<< "\n";

```
**[See Sample code](../snippets/algorithm/fill_n.cpp)**
**[Run Code](https://rextester.com/KPJN63893)**