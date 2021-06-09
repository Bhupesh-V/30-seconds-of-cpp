# max_size

/*
Author : Gregory Pytak
Date : 8/6/2021
Time : 5:07
Description : Updated max_size.md for vector.
*/

**Description** :
- Returns the maximum number of elements that a vector can hold.
- Depends on the limitations of the system on which program is running.

std::vector<int>vector;
	
for (int i=0; i<100; i++) 
vector.push_back(i);
		     
std::cout << "size: " << vector.size() << "\n";
std::cout << "capacity: " << vector.capacity() << "\n";
std::cout << "max_size: " << vector.max_size() << "\n";
