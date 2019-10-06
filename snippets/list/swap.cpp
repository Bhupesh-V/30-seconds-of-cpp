/*
    Author : Y. Sai Sriram
    Date   : 29/09/2019
    Time   : 11:26
    Description :  This function is used to swap the contents of one list with another list of same type and size.

*/

#include<iostream>
#include<list>

int main(){
	// list container declaration
	std::list<int> mylist1{1, 2, 3, 4};
	std::list<int> mylist2{3, 5, 7, 9};

	//using swap() function to swap elements of lists
	mylist1.swap(mylist2);
	
	//printing the first list
	std::cout << "list1 after swapping: ";
	for(auto value : mylist1){
		std::cout << " " << value;
	}
	std::cout << std::endl;

	//printing the second list
	std::cout << "list2 after swapping: ";
	for(auto value : mylist2){
		std::cout << " " << value;
	}
	std::cout << std::endl;

	return 0;
}


