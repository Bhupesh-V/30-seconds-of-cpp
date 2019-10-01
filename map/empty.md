Description: Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have same key values.

Example: 
// Implementation of empty() function 
#include <iostream> 
#include <map> 
using namespace std; 

int main() 
{ 
	map<char, int> mymap; 
	if (mymap.empty()) { 
		cout << "True"; 
	} 
	else { 
		cout << "False"; 
	} 
	return 0; 
} 

