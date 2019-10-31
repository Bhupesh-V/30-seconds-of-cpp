**DESCRIPTION**: finds difference between all ajdacent elements in an array and stores in another array

**EXAMPLE**:
```cpp
int main()
{
	int arr[] = { 1, 2, 3, 5, 9, 11, 12 }; 
	int new_arr[SIZE]; 
 
    // initial array:
    std::cout << "array initially:"; 
    for (int i = 0; i < SIZE; i++) 
        std::cout << arr[i] << ' '; 
    std::cout << std::endl; 
    
    // adjacent_difference on arr
    std::adjacent_difference(arr, arr + SIZE, new_arr); 
    
    //new array:
    std::cout << "array after using adjacent difference:"; 
    for (int i = 0; i < SIZE; i++) 
    	std::cout << new_arr[i] << ' '; 
	std::cout << std::endl; 
	  
	return 0; 
}
```
**[RUN CODE]:"https://ideone.com/e.js/xoxAud"**
