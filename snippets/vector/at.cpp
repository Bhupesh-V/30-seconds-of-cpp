/*
    Author : Ankush Kamboj
    Date   : 11/07/2019
    Time   : 20:00 
    Description : Returns a reference to the element at position _n_ in the vector.
*/

#include <iostream>
#include <vector>

int main() {
	// create a vector of 5 integers
	std::vector<int> myVector{1, 2, 3, 4, 5};

	// display the vector contents using std::vector::at
	for (int i = 0 ; i < 5; i++) {
		std::cout << myVector.at(i) << " ";
	}
	std::cout << std::endl;

	return 0;
}