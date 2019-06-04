// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
 Author : Kevin Harvell
 Date : 01/06/2019
 Time : 11:30 AM
 Description : size() function is used to return the size of the stack or the number of elements in the stack.
 */
#include <iostream>
#include <stack>

int main() {
	std::stack<int> mystack;
	mystack.push(4);
	mystack.push(5);
	mystack.push(9);
	mystack.push(1);
	mystack.push(3);

	// Stack from top to bottom becomes 3, 1, 9, 5, 4

	// Print the size of mystack (5)
	std::cout << mystack.size();
}