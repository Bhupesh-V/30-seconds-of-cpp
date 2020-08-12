// Program that will check if a given string is a palindrome

// Firstly include neccessary libraries
#include <iostream>

// Start off our main function
int main() {
	// Create a string variable to check
	// Ex. of palindrome is racecar. Spelled backwards is racecar. 
	std::string word = "racecar";

	// Will need this later
	std::string new_word;

	// Loop through word backwards and push each letter to new_word
	for (int i = word.size()-1; i >= 0; i--) {
		new_word.push_back(word[i]);
	}

	// Now that we've pushed back, if both words equal eachother
	// then this is a palindrome!
	if (word == new_word)
		std::cout<<"PALINDROME!";
	else
		std::cout<<"NOT PALINDROME";

}