/*
Author : Shaochen Ren
Date : 9/06/2021
Time : 8:39:13
Description : Updated max_size.md for vector.
*/
# generate
**Description** : Used to generate numbers based upon a generator function, and then, it assigns those values to the elements in the container in the range [first, last).
The generator function has to be defined by the user, and it is called successively for assigning the numbers.

**Example**:
```cpp

// C++ program to demonstrate the use of std::generate
#include <iostream>
#include <vector>
#include <algorithm>
  
// Defining the generator function
int gen()
{
    static int i = 0;
    return ++i;
}
  
using namespace std;
int main()
{
    int i;
    // Declaring a vector of size 10
    vector<int> v1(10);
  
    // using std::generate
    std::generate(v1.begin(), v1.end(), gen);
  
    vector<int>::iterator i1;
    for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
        cout << *i1 << " ";
    }
    return 0;
}
```
**[Run Code](https://rextester.com/UVF27948)**
