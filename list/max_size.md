# max_size

**Description** : The list::max_size() is a built-in function in C++ STL which returns the maximum number of elements a list container can hold.

**Example** :
```cpp
    // CPP program to illustrate the 
    // list::max_size() function 
    #include <bits/stdc++.h> 
    using namespace std; 
  
    int main(){ 
        // Creating a list 
        std::list<int> demoList; 
  
        // checking the max size of the list 
        std::cout << demoList.max_size(); 
  
        return 0; 
    } 
    
    //Output is 768614336404564650, it is the number of elements a list container can hold.
```
**[See Sample Code](snippets/algorithm/max_size.cpp)**
**[Run Code](https://rextester.com/QRAJ69116)**
