# push_back

**Description** :
push_back() function is used to push elements into a list from the back. The new value is inserted into the list at the end, after the current last element and the container size is increased by 1.

**Example**
```cpp
    int main() { 
    // declaration of list container
    list<int> mylist{ 1, 2, 3, 4, 5 }; 
    mylist.push_back(6); 
  
    // list becomes 1, 2, 3, 4, 5, 6
  
    for (auto it = mylist.begin(); it != mylist.end(); ++it) {

        cout << ' ' << *it;//printing output
    } 
} 

```
**[See Sample code](../snippets/list/push_back.cpp)**
**[Run Code](https://rextester.com/WPKH74445)**
