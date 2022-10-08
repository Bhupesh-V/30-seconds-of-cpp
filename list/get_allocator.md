**Description**: list::get_allocator() returns a copy of the allocator object associated with the list container.

**Example**:

```cpp
    //Declare new list:
    std::list<int> List1;

    //Declare a new int pointer:
    int * pntr;

    //Allocate an array of 2 elements using our list allocator:
    pntr = List1.get_allocator().allocate(2);

    //Input elements to array:
    for(int i = 0; i < List1.size(); ++i) std::cin >> pntr[i];

    std::cout << "List1 contains: "
    //Print elements of the array:
    for(int i = 0; i < List1.size(); ++i){
        std::cout << ' ' << pntr[i];
    }
    std::cout << std::endl;

    //Deallocate the memory used to the array:
    List1.get_allocator().deallocate(p,2);
```
