#Inner_product
**Description**: Program to find the inner products of the pairs formed by the elements of two ranges 

#include <iostream> 		

//Implementing inner product 
int main(){

	// The value which is added after finding inner_product b/w elements 
	int init = 100; 
	int series1[] = { 10, 20, 30 }; 
	int series2[] = { 1, 2, 3 }; 
	int n = sizeof(series1) / sizeof(series1[0]); 

	// Elements in series1 
	std::cout << "First array contains :"; 
	for (int i = 0; i < n; i++){ 
		std::cout << " " << series1[i];
	}	
	std::cout << "\n"; 

	// Elements in series2 
	std::cout << "Second array contains :"; 
	for (int i = 0; i < n; i++){
		std::cout << " " << series2[i];
	}	
	std::cout << "\n\n"; 

	std::cout << "Using default inner_product: "; 
	std::cout << std::inner_product(series1, series1 + n, series2, init); 
	std::cout << '\n'; 

	return 0; 
} 

