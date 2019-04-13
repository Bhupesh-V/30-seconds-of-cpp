### erase

#### Description

The list::erase() is a built-in function in C++ STL which is used to delete elements from a list container. This function can be used to remove a single element or a range of elements from the specified list container.

#### Example

```cpp
    #include<iostream>
    #include<list>

    int main(){
        // Creating a list
        std::list<int> demoList;

        // Add elements to the List
        demoList.push_back(10);
        demoList.push_back(20);
        demoList.push_back(30);

        // Creating iterator to point to first
        // element in the list
        std::list<int>::iterator itr = demoList.begin();
        // Deleting the first element
        demoList.erase(itr);

        // Printing elements of list after deleting first element
        std::cout << "\nList after deleting first element:";
        for (auto itr = demoList.begin(); itr != demoList.end(); itr++) {
            std::cout << *itr << " ";
        }

        return 0;
    }
```
