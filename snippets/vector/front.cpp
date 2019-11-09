/*
    Author : Jayshree Aishwarya
    Date   : 18/10/2019
    Time   : 00:04
    Description : Used to fetch the first element of a vector
*/

#include <iostream>
#include <vector>

int main() {
	// A vector storing rainfall(in inches) of a week
	std::vector<float> vRainfall{1.1, 2.02, 3.5, 4.9, 5.0, 3.7, 0.9};

	// displaying the first value by front()
    std::cout << "The Rainfall on day 1 -" << std::endl;
	std::cout << vRainfall.front(); 
	std::cout << std::endl;

	return 0;
}
