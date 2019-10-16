# next_permutation

**Description** : Transforms the range `[first, last)` into the next permutation from the set of all permutations that are lexicographically ordered with respect to `operator<` or `comp`. Returns `true` if such permutation exists, otherwise transforms the range into the first permutation and returns `false`. 

**Example** :

```c++
 	std::string s = "aba";
    std::sort(s.begin(), s.end());
    do {
        std::cout << s << '\n';
    } while(std::next_permutation(s.begin(), s.end()));
```

**[Run Code](https://rextester.com/VXT67580)**
