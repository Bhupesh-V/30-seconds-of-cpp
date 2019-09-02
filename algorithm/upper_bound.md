# upper_bound 

**Description :** Upper Bound is mainly used to return an iterator which points to the element just greater than the element we're searching for(thus providing an UPPER bound on it's value).
The prototype for upper bound is :
```
upper_bound(startaddress, endaddress, searchvalue)  
  ```
if we're using it with vectors or arrays,and :
```
set_name.upper_bound(key)  
  ```
if we use it with sets.  

**Example** :
```cpp
#include <iostream>
#include<algorithm>
#include<set>

 void show(int a[], int arraysize) { 
        for (int i = 0; i < arraysize; ++i) { 
            std::cout << a[i] << " "; 
	}
    } 
  
int main() { 
    int a[] = { 5, 6, 7, 7, 6, 5, 5, 6 , 8 }; 
    int asize = sizeof(a) / sizeof(a[0]); 
    std::cout << "\n The array is : "; 
    show(a, asize); 
   
    std::cout << "\n So, we first sort the array"; 
    std::sort(a, a + asize); 
    std::cout << "\n\n The array after sorting is : "; 
    show(a, asize); 
    std::cout << "\n\nNow, we find the upper bound on 6: "; 
    std::cout<< std::upper_bound(a, a + asize, 6) - a << "\n";   
    
    
    std::cout << "\n\nNow, we find the upper bound on 5: "; 
    std::cout<< std::upper_bound(a, a + asize, 5) - a << "\n";
  
    std::cout << "\n\nNow, say we want to find upper bound for 8: "; 
    std::cout<< std::upper_bound(a, a + asize, 8) - a << "\n \n";
    
     
    std::cout<<"Now,for sets: \n\n";
    std::set<int> s; 
  
    s.insert(1); 
    s.insert(4); 
    s.insert(2); 
    s.insert(5); 
    s.insert(6); 
  
    std::cout << "The set elements are: "; 
    for (auto it = s.begin(); it != s.end(); it++) 
        std::cout << *it << " "; 
  
    
    auto it = s.upper_bound(2); 
    std::cout << "\nThe upper bound of key 2 is "; 
    std::cout << (*it) << "\n"; 
    it = s.upper_bound(3); 
    std::cout << "The upper bound of key 3 is "; 
    std::cout << (*it) << "\n";
    
    return 0; 
}  
```
**[Run Code](https://rextester.com/QRBLF43445)**
