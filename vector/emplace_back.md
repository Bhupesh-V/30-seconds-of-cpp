# emplace_back

**Description** : This function is used to insert a new element to the end of the vector.

**Syntax :** vectorname.emplace_back(value)

**Example**:
```cpp
// Demonstrates emplace_back() function
#include <iostream>
#include <vector>
using namespace std;

int main(){
    //declares an empty vector
    vector <int> v;
    
    //inserting elements in vector
    v.emplace_back(1);
	v.emplace_back(2);
	v.emplace_back(3);
    // vector becomes 1, 2, 3
  
    //Displaying elements of vector
    for (auto it = v.begin(); it != v.end(); it++) 
        cout << *it<<" ";
    return 0;
}

```
**[Run Code](https://rextester.com/DGSUPH80388)**

