# push_back

**Description** : Appends the given element value to the end of the list

**Example**:
```cpp
#include <iostream>
#include <list>

int main() {
    //declare the list  
    std::list<int> myList;

    //append values to the list
    myList.push_back(1);
    myList.push_back(2);

    //print elements of the list
    std::cout << "List elements:\n";
    for (auto it = myList.begin(); it != myList.end(); ++it) { 
        std::cout << *it << '\n'; 
    }
}
```
**[Run Code](https://rextester.com/ANYP39390)**
