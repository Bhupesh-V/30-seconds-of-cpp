 // Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
 
 /*
    Author : GOSHROW
    Date : 12/10/2019
    Time : 23:30
    Description : Performs operations (difference by default) on adjacent pairs in an iterator.
*/

#include <iostream>     // std::cout
#include <functional>   // std::multiplies
#include <numeric>      // std::adjacent_difference

int myop (int x, int y) {return x+y;}

int main () {
	int val[] = {1,2,3,4,5,9,11,12};										//the array from which range of operation is taken
	int result[7];															//the pointer to store the iterator for the result of adjacent_difference functions
	
	std::adjacent_difference (val, val+7, result);							//difference operation is default for adjacent_difference
	std::cout << "using default adjacent_difference: ";
	for (int i = 0; i < 7; ++i){
		std::cout << result[i] << ' ';
	}
	std::cout << '\n';
	
	std::adjacent_difference (val, val+7, result, std::multiplies<int>());	//multiplies() provides a multiplication opearation for a pair 
	std::cout << "using functional operation multiplies: ";
	for (int i = 0; i < 7; ++i){
		std::cout << result[i] << ' ';
	}
	std::cout << '\n';
	
	std::adjacent_difference (val, val+7, result, myop);					//myop is a customized function defined for addition
	std::cout << "using custom function: ";
	for (int i = 0; i < 7; ++i){
		std::cout << result[i] << ' ';
	}
	std::cout << '\n';
	
  	return 0;
}
