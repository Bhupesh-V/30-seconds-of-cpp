# Accumulate

**Description :** 
- This function returns the sum of all the values lying in a range between [first, last) with the variable sum. 
- Usually the sum of elements in a particular range or a complete array is found using a linear operation which requires adding all the elements in the range one by one and storing it into some variable after each iteration.

**Example** :

```cpp
#include <bits/stdc++.h>
#include <vector>
#include<numeric>

int main() {
    std::vector<int> v = {3, 13, 27};
    int sum = 7;
    std::cout << "Result using accumulate: ";
    std::cout << accumulate(v.begin(), v.end(), sum);
 
	return 0;
}
```
**[See Sample code](https://github.com/deepanshumidha5140/30-seconds-of-cpp/blob/master/snippets/vector/accumulate.cpp)**
**[Run Code](https://rextester.com/BFYS36316)**
