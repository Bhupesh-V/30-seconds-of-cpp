# ~vector

**Description:** This calls allocator_traits::destroy on each of the contained elements and de-allocates all the storage capacity allocated by the vector using its allocator. 
If the destructor is called the object, it will be gone and will have to construct a new one. We should never call the destructor explicitly. The destructor is called when a stack-allocated object goes out of scope or at the end of a block or when explicitly deletes the object.

**Example:** 

```cpp
#include <bits/stdc++.h>

int main()
{
    // Creates a vector as myVector
    std::vector<int> myVector = { 1, 2, 3, 4, 5 };

    // Calls the destructor
    myVector.~vector();

	// Uncomment this the Code runs perfectly fine. Need to construct again as the object is destroyed.
	// myVector = { 1, 2, 3, 4, 5 };

    // Prints the value in myVector
    for (int x : myVector)
        std::cout << x << std::endl; 

} // The destructor is called again by the vector Container [throws an error]
```

**[See Sample Code](../snippets/vector/v.~vector.cpp)**

**[Run Code](https://ideone.com/8kS6hH)**

