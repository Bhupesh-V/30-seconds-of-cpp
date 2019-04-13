### resize

#### Description

The list::resize() is a built-in function in C++ STL which is used to resize a list container.

#### Example

```cpp
    #include<iostream>
    #include<list>

    int main(){

        // Creating a list
        std::list<int> demoList;

        // Adding elements to the list
        demoList.push_back(23);
        demoList.push_back(29);
        demoList.push_back(36);

        // Initial list:
        std::cout << "Initial List: ";
        for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
            std::cout << *itr << " ";

        // Resize list to contain less elements
        demoList.resize(2);
        std::cout << "\n\nList after first resize: ";
        for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
            std::cout << *itr << " ";

        // Resize list to contain more elements
        demoList.resize(4);
        std::cout << "\n\nList after second resize: ";
        for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
            std::cout << *itr << " ";

        return 0;
    }

```
