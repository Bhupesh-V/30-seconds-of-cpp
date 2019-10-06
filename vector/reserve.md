# reserve

**Description** :
- Helps specify the minimum size of a vector
- Useful to know how many elements the vector will ultimately hold

**Example**:
```cpp
	//create an empty vector
        std::vector<int> myvector;

        //reserve a size of 'atleast' 5 elements
        myvector.reserve(5);

        //inserting 5 elements
        for(int i=0; i<5; i++)
        {
                myvector.push_back(i);
        }
```

**[See sample code](..snippets/vector/reserve.cpp)**
**[Run Code](https://rextester.com/AMLWGW9232)**

