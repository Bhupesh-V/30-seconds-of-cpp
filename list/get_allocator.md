# get_allocator

**Description** : get_allocator() function returns an allocator object for the list container

**Example** : 
```cpp
    std::list<double> my_list;

    double * list_ptr;

    list_ptr = my_list.get_allocator().allocate(3);

    for (int i = 0; i < 3; ++i) {
        list_ptr[i] = i;
    }

    std::cout << "The list now contains:";

    for (int i = 0; i < 3; ++i) {
        std::cout << ' ' << list_ptr[i];
    }

    std::cout << std::endl;

    my_list.get_allocator().deallocate(list_ptr, 3);

    return 0;
```

**[Run Code](https://rextester.com/GVG34980)**
