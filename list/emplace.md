# emplace

**Description** :
The list::emplace() is a built-in function in C++ STL which extends list by inserting new element at a given position.

**Example**
```cpp
	int main() { 
    // declaration of list 
    list<int> lis = { 5, 6, 7, 8, 9, 10 }; 
  
    auto it = lis.emplace(lis.begin(), 2); 
  
    // inserts at the beginning of the list 
    lis.emplace(it, 1); 
  
    cout << "List: "; 
    for (auto it = lis.begin(); it != lis.end(); ++it) {
        cout << *it << " "; 
    }
    return 0; 
}
```
**[See Sample code](../snippets/list/emplace.cpp)**
**[Run Code](https://rextester.com/AYYF68072)**