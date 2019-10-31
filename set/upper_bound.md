# upper_bound

**Description :**
    This method returns an iterator pointing to the immediate next element which is just greater than k.

**Example :**
```cpp
//Run Code To Demonstrate use of set.upper_bound(k)
#include<iostream>
#include<set>

int main(){
    // Create a set object holding integers
    std::set<int> v{ 10, 60, 30, 40, 50 }; 
  
    std::set<int>::iterator upper1, upper2; 
  
    upper1 = v.upper_bound(30); 
    
    //If the element value exceeds the maximum element in the set, the iterator returned points to next of last element in the set container
    upper2 = v.upper_bound(80); 
  
    std::cout << "upper_bound for element 30 is : " << *(upper1) << std::endl; 
    std::cout << "upper_bound for element 80 is : " << *(upper2) << std::endl; 
  

    return 0;
}

```