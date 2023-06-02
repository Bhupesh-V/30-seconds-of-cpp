# crend

**Description** :
-  used to return a constant reverse iterator pointing to the theoretical element preceding the first element in the container. This element is considered the reverse end of the container. 
-  The crend() function does not take any parameters.



**Example**
```cpp
   //Declare the vector
   vector<int> v = {1, 2, 3, 4, 5};

  // Get a reverse iterator pointing to the reverse end of the vector.
  vector<int>::const_reverse_iterator rend = v.crend();

  // Print the value of the element pointed to by rend.
  cout << *rend << endl;

```

This code will print the following output:
5
