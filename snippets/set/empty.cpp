/*
    Author : Chirag Chandel
    Date : 15/06/2023
    Time : 10:00
    Description : This method returns true if their is no any element present in the set else returns false.
*/

#include<iostream>
#include<set>

int main() {
	// Create a set object holding integers
	std::set<int> s1{ 14, 12, 15, 11, 10 };
    std::set<int> s2{};

	std::bool check1 = s1.empty();
    std::bool check2 = s2.empty();

	// print message if set is not empty 
    if (check1) {
        std::cout << "Set is Empty" << std::endl;
    }
    else {
        std::cout << "Set is Not Empty" << std::endl;
    } 

    //print message if set is empty
    if (check2) {
        std::cout << "Set is Empty" << std::endl;
    }
    else {
        std::cout << "Set is Not Empty" << std::endl;
    }

	return 0;
}