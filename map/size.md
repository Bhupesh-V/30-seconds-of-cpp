Description: size() function is used to return the total number of elements present in the map.

Example:

// implementation of size() function 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	// Take any two maps 
	map<int, string> map1, map2; 
	
	// Inserting values 
	map1.insert(make_pair(1, "India")); 
	map1.insert(make_pair(2, "Nepal")); 
	map1.insert(make_pair(3, "Sri Lanka")); 
	map1.insert(make_pair(4, "Myanmar")); 
	
	// Printing the size 
	cout << "map1 size: " << map1.size(); 
	cout << endl; 
	cout << "map2 size: " << map2.size(); 
	return 0; 
} 
