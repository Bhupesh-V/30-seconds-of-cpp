### size

#### Description

The list::size() is a built-in function in C++ STL which is used to find the number of elements present in a list container.

#### Example

```cpp
    #include<iostream>
    #include<list>

    int main(){

        // Creating a list
        std::list<int> demoList;

        // Add elements to the List
        demoList.push_back(52);
        demoList.push_back(23);
        demoList.push_back(90);

        // getting size of the list
        int size = demoList.size();

        std::cout << "The list contains " << size << " elements";

        return 0;
    }

```
