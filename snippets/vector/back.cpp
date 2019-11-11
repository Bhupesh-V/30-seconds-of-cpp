/*
    Author : Jayshree Aishwarya
    Date   : 18/10/2019
    Time   : 00:19
    Description : Used to fetch the last element of a vector
*/

#include <iostream>
#include <vector>

int main() {
	// A vector storing rainfall(in inches) of a week
	std::vector<float> vRainfall{1.1, 2.02, 3.5, 4.9, 5.0, 3.7, 0.9};

	// displaying the last value of a vector by back()
    std::cout << "The Rainfall on day 7 -" << std::endl;
	std::cout << vRainfall.back(); 
	std::cout << std::endl;

	return 0;
}
