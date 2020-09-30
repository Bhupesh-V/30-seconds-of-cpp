# Vector

**Description :** Vectors are sequence containers representing arrays that can change in size, they are a generic templete and will use whatever generic type you assign to it. Vectors are similar to arrays in that 
they hold data in cells, these cells are dynamically allocated and deallocated automatically. Below are 4 constructor examples of how to create vector objects.

**Example** :

```cpp
#include <iostream>
#include <vector>

int main(void)
{
ios_base sync_with_stdio(false) 
;cin.tie(null) ;
cout.tie(null) ;
//Above three lines optimise the code 
//A vector is also called as array list or Dynamic array
//While using vectors we don't have to specify size like when we use arrays.
	std::vector<int> emptyConstructor;														// Creates an empty vector
	std::vector<int> fillConstructor(5, 10);												// Fills the vector with 5 values of 10
	std::vector<int> iteratedConstructor(fillConstructor.begin(), fillConstructor.end()-2);   // Fills the vector with the iterated object values from beginning to end
	std::vector<int> copiedConstructor(iteratedConstructor);		
int position=1,val=10;						// Creates a duplicate of the 
std::vector<int > name;
name.insert (position, val);
	// emptyConstructor {}
	// fillConstructor {10, 10, 10, 10, 10}
	// iteratedConstructor {10, 10, 10}
	// copiedConstructor {10, 10, 10}

	system("pause");
	return 0;
}
```
**[Run Code](https://rextester.com/ATPSZ75822)**
