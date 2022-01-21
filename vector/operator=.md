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
  
int main(){ 

    // storing values in myVector1
    std::vector<int> myVector1{ 10, 20, 30 };  

    // storing values in myVector2
    std::vector<int> myVector2{ 30, 20, 10, 40 };                           


    // replacing values of myVector1 with myVector2 by direct assignment using operator=
    myVector1 = myVector2; 
                                            
    std::cout << "myVector1 = "; 


    // traversing myVector1
    for (auto it : myVector1){
 
       // printing values stored in myVector1
       std::cout << ' ' << it;
    }                                      

    return 0; 
} 
```

**[Run Code](https://rextester.com/GAMG89777)**
