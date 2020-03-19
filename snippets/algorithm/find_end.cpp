/*
    Author : Derek Hornacek
    Date : 16/03/2020
    Time : 05:24pm
    Description : This is a code snippet demonstrating the find_end algorithm from the C++ STL.
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	std::vector<int> sequence{ 13, 5, 2, };
	std::vector<int> target{ 18, 11, 7, 13, 5, 2, 12, 5, 13, 5, 2 };
	
	// find the first element of the last occurrence of the given sequence
	std::vector<int>::iterator result = std::find_end(target.begin(), target.end(), sequence.begin(), sequence.end());

	if(result != target.end()){
		// list wasn't empty and sequence occurred
		std::cout << "The result is: " << std::distance(target.begin(), result) << "." << std::endl;
	} else{
		std::cout << "No such pattern found or lists are empty." << std::endl;
	}
	return 0;
}