# equal

**Description** : Compares the elements of a vector in a given range to the elements of another vector in the previously defined range. 

**Example** :
```cpp
    std::vector<int> v1 {3, 5, 3, 1, 2, 3};
    std::vector<int> v2 {1, 2 ,3, 4, 5, 6};
    std::vector<int> v3 {3, 5, 3, 1, 2, 3};

    // Compare two equal vectors
    if(std::equal(v1.begin(),v1.end(),v3)){
        std::cout << "Vectors are equa!";
    }
    else {
        std::cout << "Vectors are not equal";
    }

    // Compare two unequal vectors
        if(std::equal(v1.begin(),v1.end(),v2)){
        std::cout << "Vectors are equa!";
    }
    else {
        std::cout << "Vectors are not equal";
    }
```
**[See Sample Code](snippets/algorithm/equal.cpp)**
  **[Run Code](https://rextester.com/RXRNU59365)**
