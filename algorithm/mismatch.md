# mismatch

**Description :** 
1. *mismatch( start_iter1, end_iter1, start_iter2 ) :* This function returns the 1st mismatch pair pointer, first element pointing to position of first mismatch element of 1st container, second element pointing to position of first mismatch element of 2nd container. If no mismatch is found, 1st element points to position after last element of 1st container and 2nd points to corresponding position in 2nd container.
2. *mismatch( start_iter1, end_iter1, start_iter2, comparator) :* This function is almost similar to the working as the above mentioned version, but it offers to find not only equality mismatches, but also other user-defined and desired mismatches via user- defined comparator function that is sent as 4th argument and returns a boolean true or false.

**Example** :

```cpp
#include <iostream>     
#include <algorithm>    
#include <vector>       

bool check(int i,int j){
    return ((i+10)==j);
}

int main () {
    
    std::vector<int> v1{10, 20, 30, 40, 50, 70, 80, 90};
    std::vector<int> v2{10, 20, 30, 40, 50, 60, 70, 80};
    std::vector<int> v3{20, 30, 40, 50, 70, 80, 90};
     
    //PAIR P TO STORE THE PAIR RETURNED BY MISMATCH
    std::pair<std::vector<int>::iterator,std::vector<int>::iterator> p;

    //MISMATCH FUNCTION CALL 1: returns the first element where two arrays differ
    p = std::mismatch (v1.begin(), v1.end(), v2.begin());
    std::cout << "Mismatching elements case 1: " << *p.first << " and " << *p.second << '\n';
    
    //MISMATCH FUNCTION CALL 2: returns the first element where two arrays differ as per predicate 
    p = std::mismatch (v1.begin(), v1.end(), v3.begin(), check);
    std::cout << "Mismatching elements case 2: " << *p.first << " and " << *p.second << '\n';
    
    return 0;
}
```
**[Run Code](https://rextester.com/CZWQY27014)**