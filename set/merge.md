# merge

**Description :** std::merge combines the elements of two sorted sequences according to the specified comparator or operator<. it takes input iterators to the initial and final positions of input sequences and output iterator to the initial and final position of the distination sequence.
**Example** :

```cpp
#include <iostream>
#include <set>
#include <algorithm>
 
int main(){

    std::set<int> odd = { 1, 3, 5 };  // first sorted set
    std::set<int> even = { 2, 4, 6 }; // second sorted set
 
    std::set<int> s; //destination set
    
    std::merge(odd.begin(), odd.end(), even.begin(), even.end(),std::inserter(s, s.begin())); //merge function
 
 
    // printing the destination set after merging
    
    for (auto const &e: s) {
        std::cout << e << ' ';
    }
 
    return 0;
}



```
**[Run Code](https://ideone.com/ZQK9uI)**
