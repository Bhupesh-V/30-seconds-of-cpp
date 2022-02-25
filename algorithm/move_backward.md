# move_backward

**Description** :Moves the elements in the range [first,last] starting from the end into the range terminating at result.
The function begins by moving *(last-1) into *(result-1), and then follows backward by the elements preceding these, until first is reached (and including it).
		
**Example** : 	Input :
		vec1 contains : 3 4 5 7 8
		vec2 contains : 8 9 6 2 4 7
		Output :
		arr2 contains : 8 9 6 5 7 8
		/*3 elements from 3rd position of vector vec1 moved to starting 4th position of vec2*/


  **Code**  :
``` cpp		
					// CPP program to illustrate 
					// std::move and std::move_backward 
					// STL library functions 
				#include<bits/stdc++.h> 

					// Driver code 
				int main() 
				{ 
				std :: vector <int> vec1 {1, 2, 3, 4, 5}; 
				std :: vector <int> vec2 {7, 7, 7, 7, 7}; 

					// Print elements 
				std :: cout << "Vector1 contains :"; 
				for(int i = 0; i < vec1.size(); i++) 
				std :: cout << " " << vec1[i]; 
				std :: cout << "\n"; 
	
					// Print elements 
				std :: cout << "Vector2 contains :"; 
				for(unsigned int i = 0; i < vec2.size(); i++) 
				std :: cout << " " << vec2[i]; 
				std :: cout << "\n\n"; 
	

					// std :: move_backward function 
				std :: move_backward (vec2.begin(), vec2.begin() + 3, vec1.begin() + 3); 

					// Print elements 
				std :: cout << "Vector1 contains after std::move_backward function:"; 
				for(unsigned int i = 0; i < vec1.size(); i++) 
				std :: cout << " " << vec1[i]; 
				std :: cout << "\n"; 

				return 0; 
				} 
```


