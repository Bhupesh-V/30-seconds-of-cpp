/*
    Author : Y. Sai Sriram
    Date   : 28/09/2019
    Time   : 10:17
    Description : Returns the space currently allocated to the vector
*/

#include <iostream>
#include <vector>

int main()
{
	// create a vector of 10 integers
	std::vector<int> myvector{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

	// display the capacity of vector, because no value has been pushed, it returns the size of vector
	std::cout << "The capacity of the vector is:  " << myvector.capacity();
	myvector.push_back(110);
	std::cout << std::endl;
	// notice how capacity returns a value greater than 11... it stores extra memory for further allocation
	std::cout << "The capacity of the vector is:  " << myvector.capacity();
	std::cout << std::endl;

	return 0;
}
