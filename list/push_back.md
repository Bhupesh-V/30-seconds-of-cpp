# push_back

**Description** : The list::push_back() function in C++ STL appends an element to the end of a list container.

**Example**:

```cpp
// Demonstrates push_back()
#include <iostream>
#include <list>

int main(){
    //declare an empty list
    std::list<int> mylist;

    //append elements to the list
    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(3);

    //print list elements
    std::cout << "List contains:" << std::endl;
    for (auto element : mylist) {
        std::cout << element << " ";
    }

    return 0;
}
```
**[Run Code](https://rextester.com/UJJF73793)**
