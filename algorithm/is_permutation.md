# is_permutation

**Description :** is_permutation() compares the elements in both the containers and returns a `true` value if all the elements in both the containers are found to be matching even if in different order else returns `false`. The first range is from `[first1, last1)` and the second starts from `first2`. 

**Example** :
```cpp
    std::vector<int> a{ 1, 2, 3, 4 };
    std::vector<int> b{ 3, 4, 1, 2 };
   
    if(is_permutation(a.begin(),a.end(),b.begin())) {
	    std::cout<<"a and b have same elements";
    }
    else std::cout<<"a and b don't have the same elements";
```
**[Run Code](https://rextester.com/CTOTV33649)**
