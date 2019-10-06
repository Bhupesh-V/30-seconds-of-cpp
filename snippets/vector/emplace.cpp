/*
    Author : Y. Sai Sriram
    Date   : 29/09/2019
    Time   : 10:53
    Description : Places an element in the vector at the specified position
*/

#include <iostream>
#include <vector>

void print(const std::vector<int> &vec){
	for(auto num : vec){
		std::cout << num << " ";
	}
}

int main(){
	//creating a vector of 5 elements
	std::vector<int> vector1{10, 20, 30, 40, 50};

	std::cout << "Initial vector: ";
	print(vector1);
	std::cout << std::endl;

	//add an element at the beginning
	vector1.emplace(vector1.begin(), -10);

	//add an element at the end
	vector1.emplace(vector1.end(), 60);

	//add an element after 2 elements
	vector1.emplace(vector1.begin() + 2, 15);

	std::cout << "Modified vector: ";
	print(vector1);
	std::cout << std::endl;

	return 0;
}
