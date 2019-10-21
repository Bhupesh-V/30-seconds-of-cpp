 /*
    Author : Abhay Singh Yadav
    Date : Date format 21/10/2019
    Time : Time format 21:14
    Description : Removing duplicates of those  elements which are present consecutively in a range[first, last).
*/
#include <iostream> 
#include <vector> 
#include <algorithm> 
int main() 
{ 
	std::vector<int> v = { 10, 1, 13, 13, 13, 16, 11, 11, 3, 17, 7, 8, 8 }; 
	std::vector<int>::iterator ptr; 
	
	ptr = std::unique(v.begin(), v.begin() + 13); 
	v.resize(std::distance(v.begin(), ptr)); 
	for (ptr = v.begin(); ptr != v.end(); ++ptr) { 
		std::cout << *ptr << " "; 
	} 
	return 0; 
} 
