# search_n

**Description :** : It searches whether a given element occurs a given no. of times consecutively within the container elements.

**Example** :
```cpp
    // Sequence to search in
    std::vector<int> v1 = { 1, 2, 3, 4, 5, 3, 3, 6, 7 }; 
  
    // Value to be searched for 
    int v2 = 3;

    // Number of successive elements
    int v3 = 2;

    // Iterator for storing the returning pointer 
    std::vector<int>::iterator i1; 

    i1 = std::search_n(v1.begin(), v1.end(), v3, v2); 
  
    // checking if iterator i1 contains end pointer of v1 or not 
    if (i1 != v1.end()) { 
        std::cout << "v2 is present consecutively 2 times at index "
             << (i1 - v1.begin()); 
    } else { 
        std::cout << "v2 is not present consecutively 2 times in "
             << "vector v1"; 
    }
```
**[Run Code](https://rextester.com/PIK38451)**