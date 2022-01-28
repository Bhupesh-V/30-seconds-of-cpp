/*
	Author : Allen Sun
	Date : 28/01/2022
	Time : 15:58
	Description : stores partial sums of one array in a resulting array
*/

#include <iostream>
#include <numeric>



// multiplies a and b
int someFunct(int a, int b) {
	return a * b;
}

int main() {
	int someArray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int result[10];
	
	// calculates partial sum of each additional element of someArray
	std::partial_sum(someArray, someArray + 10, result);
	std::cout << "Standard functionality: ";
	for (int i = 0; i < 10; ++i) {
		std::cout << result[i] << " ";
	}
	
	// calculates partial multiplication of each additional element of someArray using a custom function
	std::partial_sum(someArray, someArray + 10, result, someFunct);
	std::cout << "\nCustom functionality: ";
	for (int i = 0; i < 10; ++i) {
		std::cout << result[i] << " ";
	}
	
	return 0;
}