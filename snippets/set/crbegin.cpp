// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Cameron Bradley
    Date : 11/10/2020
    Time : 12:32
    Description : Get a const reverse iterator pointing at the last element of the container
*/
#include<iostream>
#include<set>

int main() {
	// Create a set object holding integers
	std::set<int> mySet{ 3, 1, 5, 2, 4 };

	// Get a const_reverse_iterator pointing to the last element
	std::set<int>::reverse_iterator r_it = mySet.crbegin();

	// Iterate through the const_reverse_iterator
	for (; r_it != mySet.crend(); ++r_it) {
		std::cout << *r_it << std::endl;
	}

	return 0;
}