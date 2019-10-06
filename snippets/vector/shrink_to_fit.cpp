/*
    Author : Y. Sai Sriram
    Date   : 29/09/2019
    Time   : 11:09
    Description : Reduces the capacity of the container to fit its size.
*/

#include <iostream>
#include <vector>

int main(){
	//create a vector of 5 elements
	std::vector<int> myvec{10, 20, 30, 40, 50};

	//adding a sixth element, vector's capacity will increase for future insertions
	myvec.push_back(60);

	//output the inital capacity
	std::cout << "Initial capacity is: " << myvec.capacity();
	std::cout << std::endl;

	//output the shrunk capacity
	myvec.shrink_to_fit();
	
	std::cout << "Shrunk capacity is: " << myvec.capacity();
	std::cout << std::endl;

	return 0;
}
