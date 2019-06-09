# all_of

**Description :** This function operates on whole range of array elements and checks for a given property on every element and returns true when each element in range satisfies specified property, else returns false.

**Example** :

```cpp
int main() { 

	std::vector<int> v{10, 2, 4, 6}; 
	
	if (std::all_of(v.begin(), v.end(), [](int i){ return i % 2 == 0; })) { 
		std::cout << "All numbers are even\n"; 
	} 
    else{
        std::cout << "All numbers are not even\n"; 
    }
}
```
**[Run Code](https://rextester.com/NBPE75660)**
