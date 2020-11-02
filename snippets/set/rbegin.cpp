// Follow the Style Guide while submitting code PR.
// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
    Author : Cameron Bradley
    Date : 11/10/2020
    Time : 13:30
    Description : Return an iterator pointing to the last element in the set.
*/
#include<iostream>
#include<set>

int main() {
	// Create a set object holding integers
	std::set<int> s{ 14, 12, 15, 11, 10 };

	std::set<int>::reverse_iterator rit = s.rbegin();

	// prints all elements in reverse order
	for (; rit != s.rend(); ++rit) {
		std::cout << *rit << std::endl;
	}

	return 0;
}