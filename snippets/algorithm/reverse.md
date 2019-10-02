/*
    Author : deeksha daga
    Date : 02/10/2019
    Time : 17:30
    Description : to reverse the order of given elements
*/
#include <iostream>
#include <algorithm>

//to reverse the input
int main() { 
	int i;
	std::vector<int> v1{1,2,3,4};  
	std::reverse(v1.begin(),v1.end());
	//this function is used
	std::vector<int>::iterator i1;  
	for (i1 = v1.begin(); i1 != v1.end(); ++i1) { 
		std::cout << *i1 << " "; 
	} 
	return 0; 
} 
