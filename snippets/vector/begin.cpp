/*
    Author : Ankush Kamboj
    Date   : 11/07/2019
    Time   : 20:00 
    Description : Returns an iterator pointing to the first element in the vector.
*/

#include <iostream>
#include <vector>

int main() {
	// create a vector of 5 integers
	std::vector<int> myVector{1, 2, 3, 4, 5};

	// display the vector contents using iterators
	for (auto it = myVector.begin(); it != myVector.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	return 0;
}