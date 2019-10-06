# pop_back

**Description** :
pop_back() function is used to pop or remove elements from a list from the back. The value is removed from the list from the end, and the container size is decreased by 1.

**Example**
```cpp
	int main() { 
	// declaration of list container
    list<int> mylist{ 1, 2, 3, 4, 5 }; 
    mylist.pop_back(); 
  
    // list becomes 1, 2, 3, 4 
  
    for (auto it = mylist.begin(); it != mylist.end(); ++it) 
        cout << ' ' << *it; //printing output
} 

```
**[See Sample code](../snippets/list/pop_back.cpp)**
**[Run Code](https://rextester.com/LKXJL67248)**