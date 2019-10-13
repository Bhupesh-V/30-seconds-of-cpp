//C++ code to demonstrate binary_search

#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::binary_search;
using std::sort;


void show(int a[], int arraysize) { 
    for (int i = 0; i < arraysize; ++i) { 
        cout << a[i] << " ";
    }
} 
  
int main() { 
    int num;
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    
    int asize = sizeof(a) / sizeof(a[0]); 
    
    cout << "\nThe array is : "; 
    
    show(a, asize); 
  
    cout << "\nSo, we first sort the array"; 
    
    sort(a, a + asize); 
    
    cout << "\n\nThe array after sorting is : "; 
    
    show(a, asize); 
    cout<< "\n Enter the element to search\n";
    cin >> num;
    
    cout << "\n\nNow, we do the binary search"; 
    
    if (binary_search(a, a + 10, num))
        cout << "\nElement found in the array"; 
        
    else
        cout << "\nElement not found in the array"; 
        
    
    return 0; 
} 
