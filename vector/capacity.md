# capacity

**Description** :
- Returns the storage space currently allocated to vector

-The size returned is greater than or equal to vector size, the extra space is to accommodate expansion without the need to relocate vector each time

**Example**
```cpp
   //Declare the vector
   std::vector<int> myvector{1,2,3,4,5};

   //when capacity is exhausted, vector automatically expands
   std::cout<<"The maximum capacity of the vector is: "<< myvector.capacity();

```
**[See Sample code](../snippets/vector/capacity.cpp)**
**[Run Code](https://rextester.com/ZVN24902)**

	


