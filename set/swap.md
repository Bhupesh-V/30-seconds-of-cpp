# swap

**Description** :This function can swap the content of two sets of same type

**Example**:
```cpp
    // Creating rwo sets of same type and of size 3
    std::set<int> A{6,10,21};
    std::set<int> B{11,34,56};

    // I want to swap set A with set B 
    A.swap(B);

    // Print the content in set A
    for(std::set<int>::iterator i=A.begin(); i!=A.end(); ++i){
      std::cout << ' ' << *i;
    }
    std::cout << '\n';
  
    // Print the content in set B
    for(std::set<int>::iterator i=B.begin(); i!=B.end(); ++i){
      std::cout << ' ' << *i;
    }
    std::cout << '\n';
```

**[See Sample code](../snippets/set/swap.cpp)**
**[Run Code](https://rextester.com/WPZJS63867)**