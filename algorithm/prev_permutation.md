# prev_permutation

**Description** :Transforms the range `[first, last)` into the previous permutation from the set of all permutations that are lexicographically ordered with respect to `operator<` or `comp`. Returns `true` if such permutation exists, otherwise transforms the range into the last permutation and returns `false`. 

**Example**:
```c++
	std::string s="abc";
    std::sort(s.begin(), s.end(), std::greater<char>());
    do {
        std::cout << s << ' ';
    } while(std::prev_permutation(s.begin(), s.end()));
    std::cout << '\n';
```
**[Run Code](https://rextester.com/XKWH81224)**