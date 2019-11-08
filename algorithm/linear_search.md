# linear_search

**Description :** Linear search is used for looking term from left to right of the array and try to find the element if present 
return it's index. But It is rarely used practically because other search algorithms such as the 
[binary search](https://github.com/Bhupesh-V/30-seconds-of-cpp/blob/master/algorithm/binary_search.md)
algorithm and hash tables allow significantly faster searching comparison to Linear search. 

**Example**
```cpp
int linear_search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = linear_search(arr, n, x); 
    if (result == -1){
        std::cout<<"Element is not present in array";
    }
    else{
        std::cout<<"Element is present at index " <<result;
    }
   return 0; 
} 
```
**[Run Code](https://rextester.com/RJXW10522)**
