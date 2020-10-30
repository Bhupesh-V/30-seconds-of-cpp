# stable\_partition

**Description :** This function is used to order elements such that leftmost elements evaluate the predicate as true and remaining elements are placed at the right hand side of the collection.

**Example** :

We can partition a vector to have pair integers at the left and odd ones at the right.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> array{ 1, 3, 2, 4, 5, 8, 9, 2 };

    // Partition the array in an even and odd pair
    stable_partition(array.begin(), array.end(), [](int val) {
            return val % 2 == 0;
        });

    for (auto val : array) {
        std::cout << val << " ";
    }

    std::cout << '\n';

    return 0;
}
```


**[Run Code](https://ideone.com/JFOxNU)**
