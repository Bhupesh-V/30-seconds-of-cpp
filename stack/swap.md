# swap

**Description** : swap() function is used to swap the contents of one stack with another stack of same type and size

**Example**:
```cpp
    // stack container declaration 
	std::stack<int> stackOne; 
	std::stack<int> stackTwo; 
	
	// pushing elements into first stack 
	stackOne.push(1); 
	stackOne.push(2); 
	stackOne.push(3); 
	stackOne.push(4); 
	
	// pushing elements into 2nd stack 
	stackTwo.push(3); 
	stackTwo.push(5); 
	stackTwo.push(7); 
	stackTwo.push(9); 

	// using swap() function to swap elements of stacks 
	stackOne.swap(stackTwo); 

	// printing the first stack 
	std::cout << "stackOne = "; 
	while (!stackOne.empty()) { 
		std::cout << stackOne.top() << " "; 
		stackOne.pop(); 
	} 

	// printing the second stack 
	std::cout << std::endl <<"stackTwo = "; 
	while (!stackTwo.empty()) { 
		std::cout << stackTwo.top() << " "; 
		stackTwo.pop(); 
	} 
```
**[See Sample Code](../snippets/stack/swap.cpp)**

**[Run Code](https://rextester.com/VYG27335)**
