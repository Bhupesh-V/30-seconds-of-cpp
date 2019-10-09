# cend

**Description :** This function returns a constant iterator pointing to the theoretical element that follows last element in the multimap.

**Example** :

```cpp
// C++ program to illustrate the map::find() function 
#include <bits/stdc++.h> 

int main() { 
  
    // initialize container 
    std::map<int, int> mp; 
  
    // insert elements in random order 
    mp.insert({ 2, 30 }); 
    mp.insert({ 1, 40 }); 
    mp.insert({ 3, 60 }); 
    mp.insert({ 4, 20 }); 
    mp.insert({ 5, 50 }); 
  
    //change elem to the element that you want to find
  	int elem = 5;
    //find() function called

    if(mp.find(elem) != mp.end()){
		std::cout << "ELEMENT FOUND IN MAP\n"; 
	}
	else{
		std::cout << "ELEMENT NOT FOUND IN MAP\n"; 
	}
    return 0; 
} 

```
**[Run Code](https://rextester.com/IYGAY78642)**

