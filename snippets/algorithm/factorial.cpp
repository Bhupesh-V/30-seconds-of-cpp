/*
    Author: Christian Escolano
    Date: 10/07/2020
    Time: 15:20
    Description: Factorial Calculating with Recurrent Function
*/

// Includes
#include<iostream>    

int factorialRecurrent(unsigned long InputValue)
{
	//Check if exeption 0 is given as input
	if (InputValue == 0) {

		// Value is 1 for 0
		return(1);
	}

	else {

		// Recurrent calculating Factorial
		return(InputValue * factorialRecurrent(InputValue - 1));
	}
}

int main()
{
	// Variables
	unsigned int InputValue;
	unsigned long result;

	// Get User Input for the Calculation of the Factorialvalue
	std::cout << "Enter the Number to Calculate the Factorialvalue: ";
	std::cin >> InputValue;

	// Call function 
	result = factorialRecurrent(InputValue);

	// Sending the Value
	std::cout << std::endl << "The Factorial number of " << InputValue  << "! is " << result << std::endl;

	// Return 0 is success
	return 0;
}