# iota

**Description :** This function operates on a range [first, last) of array elements and assigns the elements with successive values of val, as if incremented with ++val after each element is written. Also, the header file <numeric> is required to access the function.

**Example** :

```cpp
int main() {
    int arr[10];
    //Initialising the starting value as 500
    int num = 500;
    //Applying the function iota to each element
    std::iota(arr, arr + 10, num);
    // Printing the final output
    for(int i = 0; i<10; i++)
    	cout<<arr[i]<<" ";
    return 0;
} 
```
**[Run Code](https://rextester.com/WVX1463)**
