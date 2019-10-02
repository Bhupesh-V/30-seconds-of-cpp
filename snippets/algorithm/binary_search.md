/*
    Author : deeksha daga
    Date : 02/10/2019
    Time : 12:47
    Description : to search an element using binary search algorithm
*/

// C++ program to implement recursive Binary Search 

#include <iostream> 

// A iterative binary search function. It returns 
// location of x in given array arr[l..r] if present, 
// otherwise -1 

std::int binarySearch(int arr[], int l, int r, int x) { 
	while (l <= r) { 
		int m = l + (r - l) / 2; 
		// Check if x is present at mid 
		if (arr[m] == x){ 
			return m; 
		}
		// If x greater, ignore left half 
		if (arr[m] < x){ 
			l = m + 1;
		}
		// If x is smaller, ignore right half 
		else{
			r = m - 1;
		} 
	} 
	// if we reach here, then element was 
	// not present 
	return -1; 
}
  
int main() {
	int arr[] = { 2, 3, 4, 10, 40 }; 
	int x = 10; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? std::cout << "Element is not present in array" : std::cout << "Element is present at index " << result; 
	return 0;
} 

