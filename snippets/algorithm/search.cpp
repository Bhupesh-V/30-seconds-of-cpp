/*
    Author : Luca Palumbo
    Date : Date format 07/10/2019
    Time : Time format 23:00
    Description : Search the position of a subarray in a vector.
*/
#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	// defining two vector
	std::vector<int> haystack { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	int needle1[] = { 40, 50, 60, 70 };

	std::vector<int>::iterator it;
	//Will find needle1 in haystack
	it = std::search (haystack.begin(), haystack.end(), needle1, needle1+4);
	//Print if needle1 was found or not
	if (it != haystack.end()){
		std::cout << "needle1 found at position " << (it - haystack.begin() ) << '\n';
	}
	else{
		std::cout << "needle1 not found\n";
	}

}
