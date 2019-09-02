# any_of

**Description :** This function operates on whole range of array elements and checks for a given property on every element and returns true when atleast one element in range satisfies specified property, else returns false.

**Example** :

```cpp
int main() {
    
    std::vector<int> v{1, 3, 5, 7, 2};
	
	if (std::any_of(v.begin(), v.end(), [](int i){ return i % 2 == 0; }))	{ 
		std::cout << "A number is even\n"; 
	}
    else{
        std::cout << "No number is even\n";
    }
} 
```
**[Run Code](https://rextester.com/WDB57875)**
