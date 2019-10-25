# get_allocator()

```cpp

**description:**
In STL, containers can change size dynamically. Allocator is an object that is responsible for dynamic memory allocation/deallocation.
get_allocator() is used to allocate memory chunks of memory. It returns a copy of the allocator object associated with the container. 
It is defined in vector, map, list, set libraries.

#include <iostream> 
#include <vector> 
  
using namespace std; 
  
// Function for allocating 
char* Allocate(vector<char> arr, int size) 
{ 
  // allocate space for size(s) elements 
  return arr.get_allocator().allocate(size);  
} 
  
void Construct(vector<char> arr, 
                      char* point, int size) 
{ 
    for (int iter = 0; iter < size; ++iter) 
      
      // construct values in-place on the array: 
      arr.get_allocator().construct(&point[iter], 
                                      iter + 97);  
} 
  
// Function for Deallocating 
void deAllocate(vector<char> arr, 
                       char* point, int size) 
{ 
    for (int iter = 0; iter < size; ++iter) 
        arr.get_allocator().destroy(&point[iter]); 
      
    // free allocated memory     
    arr.get_allocator().deallocate(point, size);  
} 
  
// Driver code 
int main() 
{ 
    vector<char> array; 
    char* pointer; 
    int size = 8; 
      
    pointer = Allocate(array, size); 
    Construct(array, pointer, size); 
  
    cout << "Array elements:  "; 
    for (int iter = 0; iter < size; ++iter) 
        cout << pointer[iter] << " "; 
  
    deAllocate(array, pointer, size); 
  
    return 0; 
} 






```

```
**output

Array elements:  a b c d e f g h


```
