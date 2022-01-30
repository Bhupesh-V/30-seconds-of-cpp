# reduce algorithm
**Description** : Is an STL algorithm which converts a large data set into a smaller data set using an operator on each element. A simple reduction example is to compute the sum of the elements in an array.

**Example** :

```cpp
#include <iostream>
#include <vector>
int main() {
int sum = 0;
std::vector<int> v { 7,14,21,46,299,346};

    std::cout << "The current data set: "<< std::endl;
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
        sum+=v[i];
    }
    
    std::cout << '\n' << "The reduced Data set: " << sum << std::endl;

    return 0;
}
```
