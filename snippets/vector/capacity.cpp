// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
 Author : Soumya Lahiri
 Date : 01/10/2019
 Time : 01:00 AM
 Description : capacity() function is a built-in function which returns the size of the storage space currently allocated for the vector, expressed in terms of elements.
 */
#include <bits/stdc++.h> 
int main() { 
	std::vector<int> v; 

	// inserts elements 
	for (int i = 0; i < 100; i++) { 
		v.push_back(i * 10); 
	} 

	std::cout << "The size of vector is " << v.size() << std::endl; 
	std::cout << "The maximum capacity is " << v.capacity() << std::endl; 
	return 0; 
} 
