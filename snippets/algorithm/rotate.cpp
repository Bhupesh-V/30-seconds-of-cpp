/*
    Author : Akash Goyal
    Date :  09/10/2019
    Time :  09:23
    Description : Rotate the elements of vector in clockwise or anti-clockwise direction.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	std::vector<int> vec1{1, 2, 3, 4, 5};

	// Printing initial elements of vector: 1 2 3 4 5
	std::cout << "Old vector :";
	for (int i = 0; i < vec1.size(); ++i)
		std::cout << " " << vec1[i];
	std::cout << "\n";

	// Rotate vector left 3 times.
	int left = 3;

	// Function call to rotate elements of vector in left direction
	std::rotate(vec1.begin(), vec1.begin() + left, vec1.end());

	// Print elements of vector after rotation: 4 5 1 2 3
	std::cout << "New vector after left rotation :";
	for (int i = 0; i < vec1.size(); i++)
		std::cout << " " << vec1[i];
	std::cout << "\n";

	std::vector<int> vec2{1, 2, 3, 4, 5};

	// Print old vector 1 2 3 4 5
	std::cout << "Old vector :";
	for (int i = 0; i < vec2.size(); i++)
		std::cout << " " << vec2[i];
	std::cout << "\n";

	// Rotate vector right 4 times.
	int right = 4;

	// Function call to rotate elements of vector in right direction
	std::rotate(vec2.begin(), vec2.begin() + vec2.size() - right, vec2.end());

	// Printing elements of vector after rotation: 2 3 4 5 1
	std::cout << "New vector after right rotation :";
	for (int i = 0; i < vec2.size(); i++)
		std::cout << " " << vec2[i];
	std::cout << "\n";

	return 0;
}
