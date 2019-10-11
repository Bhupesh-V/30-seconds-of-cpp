# `<unordered_map>`
 # what is unordered_map?
In most simple words unordered_map is a dictionary like data structure.It is available under the c++ STL library.Being a map, it is a sequence of key-value pairs, each single value is mapped to an unique key.You can access any value through its subscript operator[], providing the key inside the operator.This gives fast access to its elements.
 The unordered_maps are implemented using [hash tables](http://https://en.wikipedia.org/wiki/Hash_table).
 **insert, delete and search operations in an unordered_map takes only o(1) time.**
 this makes this container one of the most useful data structures to use, specially when we want least time complexity in our code.The secret behind the fast access quality of unordered_maps is because it does not sort its element in any particular order with respect to either their key or mapped values, instead sets them  into buckets depending on their hash values.So generally unordered_maps perform better than maps.
#  some functions you need to know.
1. begin(): Returns an iterator pointing to the first element in the container in               the unordered_map container
2. end():   Returns an iterator pointing to the position past the last element in               the container in the unordered_map container
3. at():    This function in C++ unordered_map returns the reference to the value               with the element as key k.
 you can see many more [functions ](http://https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/)of maps (i would surely advise to).
#  initializing an unordered_map?
An unordered_map can be initialized in different ways:

**simple initialization using assignment operator and subscript operator **

```
#include <iostream> 
#include <unordered_map> 
using namespace std; 

int main() 
{ 
//this map contains keys as strings and values as integers
unordered_map<string, int> demo; 


demo["abc"] = 1; 
demo["pqr"] = 2; 
demo["xyz"] = 3; 

//We can iterate over all elements of unordered_map using Iterator
unordered_map<string, int>:: iterator iter; 
for (iter = umap.begin(); iter != umap.end(); itr++) 
    { 
        // iter is like a pointer to demo<string, int>, itr->first stores the key
        //iter->second stores the value part
        cout << iter->first << "  " << iter->second << endl; 
     } 
return 0;
} 
```

**output**
```
abc 1
pqr 2
xyz 3
```





this is a list of some important functions an unordered map uses.

:heavy_check_mark: [erase](erase.md)  
:heavy_check_mark: [find](find.md)  
:heavy_check_mark: [insert](insert.md)  
:heavy_check_mark: [size](size.md)  
