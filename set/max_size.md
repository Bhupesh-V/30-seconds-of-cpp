# max_size

**Description :**
    This method is used to find the maximum number of elements the set container can hold.

**Example :**
```cpp
//Run Code To Demonstrate use of set.max_size()
#include <iostream>
#include <set>
using namespace std;

int main()
{
    
    set<int> set1{100,200};
    set<int> set2; 
  
    // If set already contains elements 
    cout << set1.max_size() << endl; 
  
    // If set does not have elements 
    cout << set2.max_size(); 
  
    return 0; 

}

