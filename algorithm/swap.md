# swap

**Description** :
- Exchange values of two objects

**Pseudocode of swap** :
swap(a,b)
	temp=a
	a=b
	b=temp

**Example**
```cpp
	//Declare two example objects (same type)
	int a = 60, b = 50;

	//a:60 and b:50
	std::cout<<"Before: "<<"a = "<<a<<" and b = "<<b<<"\n";

	std::swap(a,b); 	

	//a:50 and b:60, after swap
	std::cout<<"After: "<<"a = "<<a<<" and b = "<<b;

```
**[See Sample code](../snippets/algorithm/swap.cpp)**
**[Run Code](https://rextester.com/TYQP43703)**
