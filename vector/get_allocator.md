# get_allocator

**Description**: Returns a copy of the allocator object associated with the vector.

**Example**:

```cpp
// vector::get_allocator
#include <iostream>
#include <vector>

int main (){

        std::vector<int> myvector;
        int * p;
        
        // allocate an array with space for 5 elements using vector's allocator:
        p = myvector.get_allocator().allocate(5);
        
        // construct values in-place on the array:
        for(int i = 0; i < 5; ++i){
            myvector.get_allocator().construct(&p[i],i);
        }
        
        std::cout << "The allocated array contains:";
        for(int i = 0; i<5; ++i){
            std::cout << ' ' << p[i];    
        }
        std::cout << '\n';
        
        // destroy and deallocate:
        for(int i = 0; i < 5; ++i){
            myvector.get_allocator().destroy(&p[i]);
        }
        myvector.get_allocator().deallocate(p,5);
        
        return 0;
}
```
**[See Sample code](../snippets/vector/get_allocator.cpp)**
**[Run Code](https://rextester.com/QNCW99134)**
