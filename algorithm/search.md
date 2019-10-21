/*
    Author : Abhay Singh Yadav
    Date : Date format 21/10/2019
    Time : Time format 19:52
    Description : It searches the sequence [first1, last1) for the first occurrence of the subsequence defined by [first2, last2), and returns an iterator to its first element of the occurrence, or last1 if no occurrences are found.
*/

#include <iostream> 
#include <vector> 
#include <algorithm> 

int main() { 
	
	std::vector<int> v1 = { 17, 222, 13, 4, 35, 64, 57 }; 
	std::vector<int> v2 = { 35, 64, 57 }; 	
	std::vector<int>::iterator i1; 

	i1 = std::search(v1.begin(), v1.end(), v2.begin(), v2.end()); 

	if (i1 != v1.end()) { 
		std::cout << "vector2 is present at index :" << (i1 - v1.begin())<<"\n"; 
	} else { 
		std::cout << "vector2 is not present in vector1\n"; 
	} 

	return 0; 
} 
