# partial_sort

**Description :** This function is used to perform sorting of a part instead of whole range. It rearranges the elements in the range [first, last), in such a way that the elements before middle are sorted in ascending order, whereas the elements after middle are left without any specific order.
**Example** :

```cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v = { 1, 3, 1, 10, 3, 3, 7, 7, 8 };
  
  
    // Using std::partial_sort
    std::partial_sort(v.begin(), v.begin() + 3, v.end());
  
    // Displaying the vector after applying
    // std::partial_sort
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
  
    return 0;
}
```
**[Run Code](https://ideone.com/SzM0gK)**
