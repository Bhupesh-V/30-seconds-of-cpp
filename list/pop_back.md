# pop_back

**Description :** The pop_back() function removes an element from the back of a list container. When used, it decreases the size of the container by 1.

**Example** :
```cpp
#include <iostream>
#include <list>

int main(){
    //declare an empty list
    std::list<int> mylist; 
    
    //add elements at the back using push_back
    mylist.push_back(2);
    mylist.push_back(3);
    mylist.push_back(5);
    mylist.push_back(8);
  
    //print elements of list
    std::cout << '\n'; //cosmetic
    std::cout << "  List elements; BEFORE pop from back \n";
    
    //pre-increment counter per style guide
    for (auto it : mylist) // using for range per teammate recommendation
        std::cout << "  " << it << '\n';

    //pop element from back 
    mylist.pop_back();

    //print elements of  list
    std::cout << '\n'; //cosmetic
    std::cout << "  List elements; AFTER pop from back \n";
    for (auto it : mylist) // using for range per teammate recommendation
        std::cout << "  " << it << '\n';

    return 0;
}
```

**[Run Code](https://rextester.com/FFW41893)**