# get_allocator

**Description** : get_allocator() function is used to return a copy of the allocator object associated with a list container

**Example**:
```cpp
// Demonstrates get_allocator()
#include <iostream>
#include <list>

int main(){
    //Create list
    std::list<int> mylist;
    int* p;
    
     //Allocate array of 5 elements
    p=mylist.get_allocator().allocate(5);

    //Assign values
    for(int i=0; i<5; i++){
      p[i]=i+1;
    }

    //Print list elements
     std::cout << "The allocated array contains:";
     for (int i=0; i<5; ++i) std::cout << ' ' << p[i];
     std::cout << '\n';

    return 0;
}
```
**[Run Code](https://rextester.com/DUHEBO3230)**
