# unique

**Description** :
- Remove consecutive items in a range[first, last)

**Example**
```cpp
	// Initializing vector that contain consecutive numbers
	std::vector<int> v = {10, 10 ,30 ,10, 20, 50, 20, 20, 20, 50};

    // Declaring an iterator that receives the returning value from unique function    
    std::vector<int>::iterator iter;

    std::cout << "Original vector:";
    for(auto t =v.begin(); t!=v.end(); ++t){
	    std::cout << *t << " ";
    }
    std::cout << '\n';

    iter = std::unique(v.begin(), v.end()); 
	// Now the actual elements in the vector are {10 30 10 20 50 20 50 ? ? ?} 
    // with ? meaning undefined
  
    // Resizing the vector so as to remove the undefined terms 
    v.resize(std::distance(v.begin(), iter)); 
  
    std::cout << "Unique vector:";    
    // Displaying the vector after applying std::unique 
    for (iter = v.begin(); iter != v.end(); ++iter) { 
        cout << *iter << " "; 
    } 
    std::cout << '\n';

```
**[See Sample code](../snippets/algorithm/unique.cpp)**
**[Run Code](https://rextester.com/DWZQ17784)**