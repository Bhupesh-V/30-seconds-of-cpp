# next_permutation

**Defination**:- Given N number like 1 2 3 4...., next_permutation() will produce the next lexicographically greater permutation.For example my arrray
int a[]={1,2,3,4}
next_permutaion() function would produce 1,2,4,3
For N elements there would N!(factorial) permutations possible.
Syntax:- next_permutaion(first,last);

**Example Code:-**

```cpp
    int a[] = { 1, 2, 3 };

    std::sort(a, a+3);
    std::cout << "The 3! possible permutations with 3 elements:\n";
    
    do {
        std::cout << a[0] << " " << a[1] << " " << a[2] << "\n";
    } while(std::next_permutation(a, a+ 3)); 

    std::cout << "After loop: " << a[0] << ' ' << a[1] << ' ' << a[2] << '\n'; 
```
**[Run Code](https://rextester.com/HNRWWQ25345)**
