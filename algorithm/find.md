# find

**Description** : Returns the first element in the range [first, last) that satisfies specific criteria(searches for an element equal to *value*).

**Example**:
```cpp
    vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
    //Inserted elements from which we have to search key
    int searchme = 4;//This is the key
    if(find(begin(v), end(v), searchme) != end(v)){
        cout <<"\n v contains 3";//If it is present in the Vector array.
    }
    else
        cout<<"No match !!"<<endl;//If element is not present.
```
**[Run Code](https://rextester.com/FIVI88863)**
