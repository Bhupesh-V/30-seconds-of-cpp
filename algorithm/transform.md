# transform

**Description** :This function can add arrays in single line.

**Example**:
```cpp
    int arr1[] = {1, 2, 3}; // Creating array of size 3
    int arr2[] = {4, 5, 6}; // Creating array of size 3
    int n = sizeof(arr1)/sizeof(arr1[0]); 
    int res[n]; 
  
    /*
    Applies op to each of the elements and stores the value returned by each operation in the range that begins at result.
    */
    transform(arr1, arr1+n, arr2, res, plus<int>()); 
    
    // print result
    for (int i=0; i<n; i++) 
    cout << res[i] << " "; 
```
**[See Sample code](../snippets/algorithm/transform.cpp)**
**[Run Code](https://rextester.com/MSH92007)**