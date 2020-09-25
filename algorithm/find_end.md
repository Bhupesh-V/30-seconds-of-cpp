# find_end

**Description :**  used to find the last occurrence of a sub-sequence inside a container. It searches the range [first1,last1) for the last occurrence of the sequence defined by [first2,last2), and returns an iterator to its first element, or last1 if no occurrences are found.
  
**Example** :

```cpp
    
    // first container
    std::vector<int> v{ 5, 3, 8, 5, 2, 9, 3, 8, 5 };
    // second container
    std::vector<int> u{ 3, 8, 5 }

    // find last occurence of vector u in vector v.
    vector<int>::iterator it = std::find_end( v.begin(), v.end(), u.begin(), u.end() );

    // displaying index of last occurence.
    std::cout << "INDEX: " << ( it - v.begin() ) << '\n';
```
**[See Sample code](snippets/algorithm/find_end.cpp)**<br>
**[Run Code](https://rextester.com/ABC)**
