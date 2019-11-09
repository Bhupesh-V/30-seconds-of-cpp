// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide

/*
    Author : Nicole Spoto
    Date : 10/10/2019
    Time : 01:30 PM
    Description : pop_back() function is used to remove the last element in the list container and the size of the list is decreased by 1.
*/

#include <iostream>
#include <list>

int main(){
    // list container declaration
	std::list<int> mylist{5, 4, 3, 2, 1};

    //printing the list
	std::cout << "list after initializing: ";
	for(auto value : mylist){
		std::cout << " " << value;
	}
	std::cout << std::endl;

    // pop items from list
    mylist.pop_back();
  
    // print the list after removing last element
    std::cout << "list after popping: ";
	for(auto value : mylist){
		std::cout << " " << value;
	}
	std::cout << std::endl;
}