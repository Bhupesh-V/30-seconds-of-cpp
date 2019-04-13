### binary_search

#### Description

Binary search is a widely used searching algorithm that requires the array to be sorted before search is applied. The main idea behind this algorithm is to keep dividing the array in half (divide and conquer) until the element is found, or all the elements are exhausted.

#### Example

```cpp
    #include<iostream>
	#include<algorithm>

    void show(int a[], int arraysize) {
        for (int i = 0; i < arraysize; ++i)
            std::cout << a[i] << " ";
    }
	int main() {
	    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	    int asize = sizeof(a) / sizeof(a[0]);
	    std::cout << "\n The array is : ";
	    show(a, asize);
	  	/* Make sure to sort the array before applyng binary_search() */
	    std::sort(a, a + asize);

	    std::cout << "\nSearch for element 10 : ";
	    if (binary_search(a, a + 10, 10))
	    	std::cout << "\nElement found in the array";
	    else
	        std::cout << "\nElement not found in the array";

        return 0;
	}
```
