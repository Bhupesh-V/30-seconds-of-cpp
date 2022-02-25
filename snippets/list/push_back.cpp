/*
    Author : Jonathan Nguyen
    Date : 12/09/2020
    Time : 6:50 PM
    Description : push_back(val) adds a value to the end of the list and increments the size by 1.
*/

#include <iostream>
#include <list>

int main(){
	// list declaration
	std::list<int> mylist{1, 2, 3};
	
	// printing the initial list
	std::cout << "List before calling push_back: ";
	for (auto value : mylist){
	    std::cout << " " << value;
	}
	std::cout << std::endl;

    // push_back adds values to the end of the list
    mylist.push_back(4);
    mylist.push_back(5);

    // printing the list after adding 2 elements with push_back
    // Now {1, 2, 3, 4, 5}
    std::cout << "List after calling push_back twice: ";
    for (auto value : mylist){
        std::cout << " " << value;
    }
    std::cout << std::endl;
}