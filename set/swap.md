# swap

**Description :**
    This method is used to swap two sets having same types, irrespective of their size.
    
**Example :**
```cpp
//Run Code To Demonstrate use of set1.swap(set2)
#include <iostream>
#include <set>
using namespace std;

int main()
{
    std::set<int> set1 {1,2,3,4,50};
    std::set<int> set2{10,29,30};
    
    set1.swap(set2); 
  
    // Print the first set 
    cout << "set1 = "; 
    for (std::set<int>::iterator it = set1.begin(); 
         it != set1.end(); ++it) 
        cout << ' ' << *it; 
  
    // Print the second set 
    cout << endl 
         << "set2 = "; 
    for (std::set<int>::iterator it = set2.begin(); 
         it != set2.end(); ++it) 
        cout << ' ' << *it; 
  
    return 0; 

}


