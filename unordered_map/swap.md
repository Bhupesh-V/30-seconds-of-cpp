# swap

**Description :** This function swaps the elements of a container to an other container. After the call of this function elements of the caller unordered_map will be elements of called unordered_map while elements of called unordered_map will be elements of caller unordered_map.
Internally swapping of elements is not done only reference type of both unordered_map is changed.

```
/*
   Output:
   ======
    Elements of maps before swap 
    Elements of first map are : 
    5 : 8
    4 : 6
    3 : 4
    2 : 2
    Elements of second map are : 
    14 : 15
    26 : 17
    12 : 13
    10 : 11

    Elements of maps after swap 
    Elements of first map are : 
    14 : 15
    26 : 17
    12 : 13
    10 : 11
    Elements of second map are : 
    5 : 8
    4 : 6
    3 : 4
    2 : 2
*/

#include<iostream>   
#include<unordered_map>  
  
int main() 
{ 
    std::unordered_map<int, int> sample1, sample2; 
  
    // Map initialization 
    sample1 = { { 2, 2 }, { 3, 4 }, { 4, 6 }, { 5, 8 } }; 
    sample2 = { { 10, 11 }, { 12, 13 }, { 14, 15 }, { 26, 17 } }; 
  
    // printing details before calling swap 
  
    std::cout << "Elements of maps before swap \n"; 
    std::cout << "Elements of first map are : \n"; 
    for (auto& x : sample1) 
        std::cout << x.first << " : " << x.second << std::endl; 
  
    std::cout << "Elements of second map are : \n"; 
    for (auto& x : sample2) 
        std::cout << x.first << " : " << x.second << std::endl; 
  
    // swapping 
    sample1.swap(sample2); 
    std::cout<<std::endl;
    std::cout << "Elements of maps after swap \n"; 
    std::cout << "Elements of first map are : \n"; 
    for (auto& x : sample1) 
        std::cout << x.first << " : " << x.second << std::endl; 
  
    std::cout << "Elements of second map are : \n"; 
    for (auto& x : sample2) 
        std::cout << x.first << " : " << x.second << std::endl; 
    return 0; 
}
```
**[Run Code](https://rextester.com/https://rextester.com/LXARJ59042)**
