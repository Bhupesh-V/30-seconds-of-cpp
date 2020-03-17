# find_end

**Description :**  Return an iterator which points to the first element of the last occurrence of the sequence [s_first, s_last) in the range target [first, last). If list is empty or sequence isn't found, returns last.
  
**Example** :

```cpp
    std::vector<int> sequence{ 13, 5, 2, };
	std::vector<int> target{ 18, 11, 7, 13, 5, 2, 12, 5, 13, 5, 2};

	// find the first element of the last occurrence of the given sequence
	std::vector<int>::iterator result = std::find_end(target.begin(), target.end(), sequence.begin(), sequence.end());

	if(result != target.end()){
		// list wasn't empty and sequence occurred
		std::cout << "The result is: " << std::distance(target.begin(), result) << "." << std::endl;
	} else{
		std::cout << "No such pattern found or lists are empty." << std::endl;
	}
```
**[See Sample code](snippets/vector/find_end.cpp)**<br>
**[Run Code](https://rextester.com/UYNGGS38128)**

