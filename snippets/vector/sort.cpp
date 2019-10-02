/*
    Author : Italo Vinicius
    Date   : 01/10/2019
    Time   : 21:00 
    Description : Returns a ordered vector in increasing or decreasing order.
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	// create a vector of 10 integers
	std::vector<int> v {-1,0,4,-5,12,2,10,-11,3,5};

	// display the vector in incresing order with sort;
	
    std::sort(v.begin(), v.end());

    for (int i = 0 ; i < 10; i++) {
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;

    // display the vector in decresing order with sort;
	
    sort(v.begin(), v.end(), std::greater<int>());

    for (int i = 0 ; i < 10; i++) {
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}