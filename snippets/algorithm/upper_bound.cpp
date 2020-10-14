 /*
    Author : Thamara Andrade
    Date : Date format 02/09/2019
    Time : Time format 23:00
    Description : Retrieve smallest element that greater than given value.
*/

#include <iostream>
#include<algorithm>
#include<set>

 void show(int a[], int arraysize) { 
        for (int i = 0; i < arraysize; ++i) { 
            std::cout << a[i] << " "; 
	}
    } 
  
int main(){
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