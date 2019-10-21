/*
    Author : Abhay Singh Yadav
    Date : Date format 21/10/2019
    Time : Time format 20:30
    Description :Using tansform() in STL to Apply increment to all elements of arr[] and store the modified elements back in arr[].
*/


#include <iostream>
#include<algorithm> 
 
int increment(int x) {  
	return (x+1); } 
  
int main() { 
	int arr[] = {12, 42, 0, 41, 3, 9, 1}; 
	int n =*(&arr + 1) - arr;  
	std::transform(arr, arr+n, arr, increment); 
  
	for (int i=0; i<n; i++){ 
		std::cout << arr[i] << " "; }
  
    return 0; 
} 
