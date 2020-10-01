/*
	Author : Howard Jiang
	Date   : December 1, 2019
	Time   : 05:22
	Description :  This function merges two sorted lists of the same size using a comparator function.

*/

#include<iostream>
#include<list>

//This comparer function creates a strict weak ordering of the values in the lists, it doesn't sort the list. 
//if your list is unsorted at the start, your final merged list may not be fully sorted. 
bool comparer(int first, int second) {
	return first < second;
}

int main() {
	// list container declaration
	std::list<int> mylist1{ 1, 50, 60 };
	std::list<int> mylist2{ 2, 30, 40 };

	//mylist2 gets merged into mylist1, mylist2 becomes empty after the merge.
	mylist1.merge(mylist2, comparer);

	//print the first list
	std::cout << "list1: ";
	for (auto value : mylist1) {
		std::cout << " " << value;
	}
	std::cout << std::endl;

	//print the second list
	std::cout << "list2: ";
	for (auto value : mylist2) {
		std::cout << " " << value;
	}
	std::cout << std::endl;

	return 0;
}


