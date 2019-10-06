# pop_back

**Description :** pop_back() function is used to pop or remove elements from a list from the back. The value is removed from the list from the end, and the container size is decreased by 1.

**Example** :

```cpp
// Demonstrates pop_back() 
#include <iostream>
#include <list>

int main(){
    //declares an empty list
    std::list<int>mylist; 
    
    //appending\inserting elements at the front by push_back
    mylist.push_back(1);
    mylist.push_back(4);
    mylist.push_back(3);
  
    //print elements of  list
    std::cout << "List elements are before pop from back \n";
    for (auto it = mylist.begin(); it != mylist.end(); ++it){ 
        std::cout << *it << '\n'; 
    }

    //pop element from the end/back
    mylist.pop_back();

    //print elements of  list
    std::cout << "List elements are after pop from back \n";
    for (auto it = mylist.begin(); it != mylist.end(); ++it){ 
        std::cout << *it << '\n'; 
    }

    return 0;
}

```
**[Run Code](https://rextester.com/LUFPD94467)**
