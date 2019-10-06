# push_back

**Description :** push_back() function is used to push elements into a list from the back. The new value is inserted into the list at the end, after the current last element and the container size is increased by 1.

**Example** :

```cpp
// Demonstrates push_back() 
#include <iostream>
#include <list>

int main(){
    //declares an empty list
    std::list<int>mylist; 
    
    //appending\inserting elements at the end by push_back
    mylist.push_back(1);
    mylist.push_back(4);
    mylist.push_back(3);
  
    //print elements of  list
    std::cout << "List elements are  \n";
    for (auto it = mylist.begin(); it != mylist.end(); ++it){ 
        std::cout << *it << '\n'; 
    }

    return 0;
}

```
**[Run Code](https://rextester.com/WYJSA64919)**
