# destroy

**Description** : Destroys the elements of a vector in a given range.

**Example** :
```cpp
struct Object{
    int value;
    ~Object(){ 
		std::cout << value << " destructed\n"; 
	}
};

std::vector<Object> myVector (8);

//manually giving values to the objects

for(int i = 0; i < 8; i++){
		myVector[i].value = i;
	}

//assigning the pointer to a variable for readibility

auto ptr = &myVector;

std::destroy(ptr, ptr + 8);
```

