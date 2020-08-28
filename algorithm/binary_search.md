# binary_search 

**Description :** Binary search is a widely used searching algorithm that requires the array to be sorted before search is applied. The main idea behind this algorithm is to keep dividing the array in half (divide and conquer) until the element is found, or all the elements are exhausted.
The prototype for binary search is :
```
binary_search(startaddress, endaddress, valuetofind)
  ```
**Example** :
```cpp
    void show(int a[], int arraysize) { 
        for (int i = 0; i < arraysize; ++i) { 
            std::cout << a[i] << " "; 
	}
    } 
  
int main() { 
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
    int asize = sizeof(a) / sizeof(a[0]); 
    std::cout << "\n The array is : "; 
    show(a, asize); 
  
    std::cout << "\n\nLet's say we want to search for 2 in the array"; 
    std::cout << "\n So, we first sort the array"; 
    std::sort(a, a + asize); 
    std::cout << "\n\n The array after sorting is : "; 
    show(a, asize); 
    std::cout << "\n\nNow, we do the binary search"; 
    if (std::binary_search(a, a + asize, 2)) 
        std::cout << "\nElement found in the array"; 
    else
        std::cout << "\nElement not found in the array"; 
  
    std::cout << "\n\nNow, say we want to search for 10"; 
    if (std::binary_search(a, a + asize, 10)) 
        std::cout << "\nElement found in the array"; 
    else
        std::cout << "\nElement not found in the array"; 
  
    return 0; 
} 
```
**[Run Code](https://rextester.com/NVMTV62786)**
