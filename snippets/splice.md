### splice

#### Description

The list::splice() is a built-in function in C++ STL which is used to transfer elements from one list to another

#### Example

```cpp
    #include<iostream>
    #include<list>

    int main(){

        // initializing lists
        std::list<int> l1 = { 1, 2, 3 };
        std::list<int> l2 = { 4, 5 };
        std::list<int> l3 = { 6, 7, 8 };

        // transfer all the elements of l2
        l1.splice(l1.begin(), l2);

        // at the beginning of l1
        std::cout << "list l1 after splice operation" << endl;
        for (auto x : l1)
            std::cout << x << " ";

        // transfer all the elements of l1
        l3.splice(l3.begin(), l1);

        // at the end of l3
        std::cout << "\nlist l3 after splice operation" << endl;
        for (auto x : l3)
            std::cout << x << " ";

        return 0;
    }
```
