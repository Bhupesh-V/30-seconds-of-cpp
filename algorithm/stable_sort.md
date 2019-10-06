# swap

**Description** :
Like std::sort(), stable_sort also sorts an array. Stable_sort() function usually uses mergesort. For stable_sort() it is O(n*log^2(n)) if additional memory linearly proportional to length is not available. If its available then O(n*log(n)).

**Example**
```cpp
    int main() { 
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; // defining an array
    int n = sizeof(arr) / sizeof(arr[0]);  // n would contain the length of the array
  
    std::stable_sort(arr, arr + n); // calling stable_sort function
  
    std:: cout << "\nArray after sorting using "
            "default sort is : \n"; 
    for (int i = 0; i < n; ++i){

    	std::cout << arr[i] << " "; //printing output
    } 
         
  
    return 0; 
} 

```
**[See Sample code](../snippets/algorithm/stable_sort.cpp)**
**[Run Code](https://rextester.com/BJA44350)**