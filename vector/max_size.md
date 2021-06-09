# max_size

**Description** :
- Returns the maximum number of elements that a vector can hold.
- Depends on the limitations of the system on which program is running.

std::vector<int>vector3;
	
for (int i=0; i<100; i++) 
vector3.push_back(i);
		     
std::cout << "size: " << vector3.size() << "\n";
std::cout << "capacity: " << vector3.capacity() << "\n";
std::cout << "max_size: " << vector3.max_size() << "\n";
