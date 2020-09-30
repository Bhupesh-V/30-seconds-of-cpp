# pop_back

**Description** : The list::pop_back() function in C++ STL removes the last element in the list container.

**Example**:

```cpp
// Demonstrates pop_back()
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
    std::cout << "List elements before pop_back()" << std::endl;
    for (auto element : mylist) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    //pop element from the back
    mylist.pop_back();

    //print list elements
    std::cout << "List elements after pop_back()" << std::endl;
    for (auto element : mylist) {
        std::cout << element << " ";
    }

    return 0;
}
```
**[Run Code](https://rextester.com/IBH29509)**
