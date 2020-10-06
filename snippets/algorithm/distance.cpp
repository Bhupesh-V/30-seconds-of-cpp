/*
    Author : Apurva Dubey
    Date : Date format 06/10/2020
    Time : Time format 17:17
    Description : returns the distance of desired position from the first iterator.
*/
// demonstrate working of distance() 
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	// Initializing vector with array values 
	int arr[] = {5, 10, 15, 20, 20, 23, 42, 45}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	vector<int> vect(arr, arr+n); 

	// Return distance of first to maximum element 
	cout << "Distance between first to max element: "; 
	cout << distance(vect.begin(), max_element(vect.begin(), vect.end())); 
	return 0; 
} 
