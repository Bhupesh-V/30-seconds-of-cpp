/*
	Author: Vineet Rao
	Date: 04/10/2020
	Time: 15:00
	Description: Code for partial_sum
*/
#include<iostream>
#include<vector>
#include<numeric>

int mul(int a, int b) { return a * b; }

int main() {
	std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
	std::vector<int> result(4); // Store the result
	auto res = partial_sum(vec.begin(), vec.begin() + 4, result.begin()); // res is the end iterator of the actual result (not necessrily result.end())
	
	// Print the result
	std::cout << "First result\n";
	for(auto it = result.begin();it < res; ++it) {
		std::cout << *it << std::endl;
	}
	
	res = partial_sum(vec.begin(), vec.begin() + 3, result.begin(), mul); // Similar to above res, but different operations
	
	// Print the result
	std::cout << "Second result\n";
	for(auto it = result.begin(); it < res; ++it) {
		std::cout << *it << std::endl;
	}
}
