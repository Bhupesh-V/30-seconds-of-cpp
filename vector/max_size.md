# max_size

/*
Author : Gregory Pytak
Date : 8/6/2021
Time : 5:13
Description : Updated max_size.md for vector.
*/

// Creating the vector
std::vector<int>vector;
	
// Creating for-loop
for (int i=0; i<100; ++i) 
vector.push_back(i);

// Outputting the vectors size, capacity, and max size
std::cout << "size: " << vector.size() << "\n";
std::cout << "capacity: " << vector.capacity() << "\n";
std::cout << "max_size: " << vector.max_size() << "\n";
