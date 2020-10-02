# find_end

**Description :** Searches for the last occurrence of the sequence [s_first, s_last) in range [first, last). If it's possible to find the sequence on the range, it will return a iterator to the beginning of last occurrence, and if there isn't, it wil return *last*.

```c++
    #include <algorithm>
    #include <iostream>
    #include <vector>
 
    int main()
    {
        std::vector<int> v{1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2};
        std::vector<int>::iterator returned;
 
        std::vector<int> sequence{1, 2};
 
        returned = std::find_end(v.begin(), v.end(), sequence.begin(), sequence.end());

        if (returned == v.end())
            std::cout << "given sequence not found in vector :-(" << std::endl;
        else 
            std::cout << "found in: " << std::distance(v.begin(), returned) << std::endl;
    }
```

**[Run Code](https://rextester.com/HAIO25237)**