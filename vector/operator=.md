vector::operator=
=================

**Description**:
-This operator is used to assign new contents to the container by replacing the existing contents.
-It also modifies the size according to the new contents.

**Example**:

``` cpp
// vector::operator=
#include <iostream> 
#include <vector> 
using namespace std; 
  
int main(){ 

    // storing values in myvector1
    std::vector<int> myvector1{ 1, 2, 3 };  

    // storing values in myvector2
    std::vector<int> myvector2{ 3, 2, 1, 4 };                           


    // replacing values of myvector1 with myvector2 by direct assignment using operator=
    myvector1 = myvector2; 
                                            
    std::cout << "myvector1 = "; 


    // traversing myvector1
    for (auto it = myvector1.begin(); it != myvector1.end(); ++it){
 
       // printing values stored in myvector1
       std::cout << ' ' << *it;
    }                                      

    return 0; 
} 
```

**[Run Code](https://rextester.com/RZZZ51216)**
