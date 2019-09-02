# upper_bound 

**Description :** Upper Bound is mainly used to return an iterator which points to the element just greater than the element we're searching for(thus providing an UPPER bound on it's value).
The prototype for upper bound is :
```
upper_bound(startaddress, endaddress, searchvalue)  
  ```
if we're using it with vectors or arrays,and :
```
set_name.upper_bound(key)  
  ```
if we use it with sets.  

**Example** :
```cpp
     void show(int a[], int arraysize) { 
        for (int i = 0; i < arraysize; ++i) { 
            cout << a[i] << " "; 
	}
    } 
  
int main() { 
    int a[] = { 5, 6, 7, 7, 6, 5, 5, 6 , 8 }; 
    int asize = sizeof(a) / sizeof(a[0]); 
    cout << "\n The array is : "; 
    show(a, asize); 
   
    cout << "\n So, we first sort the array"; 
    sort(a, a + asize); 
    cout << "\n\n The array after sorting is : "; 
    show(a, asize); 
    cout << "\n\nNow, we find the upper bound on 6: "; 
    cout<<upper_bound(a, a + asize, 6) - a << endl;   
     //As stated previously,function returns an iterator, so we use '- a' to print index
    
    cout << "\n\nNow, we find the upper bound on 5: "; 
    cout<<upper_bound(a, a + asize, 5) - a << endl;
  
    cout << "\n\nNow, say we want to find upper bound for 8: "; 
    cout<<upper_bound(a, a + asize, 8) - a << endl << endl;
    //Since there's no element greater than 8 in our array,the function returns the iterator AFTER the last element of the array
    //If we had used vectors instead of arrays,the function would have returned vector_name.end() iterator
     
    cout<<"Now,for sets: \n\n";
    set<int> s; 
  
    // Function to insert elements 
    // in the set container 
    s.insert(1); 
    s.insert(4); 
    s.insert(2); 
    s.insert(5); 
    s.insert(6); 
  
    cout << "The set elements are: "; 
    for (auto it = s.begin(); it != s.end(); it++) 
        cout << *it << " "; 
  
    // when 2 is present 
    // points to next element after 2 
    auto it = s.upper_bound(2); 
    cout << "\nThe upper bound of key 2 is "; 
    cout << (*it) << endl; 
    //Again,iterators are returned so * to get the value at that iterator
    // when 3 is not present 
    // points to next greater after 3 
    it = s.upper_bound(3); 
    cout << "The upper bound of key 3 is "; 
    cout << (*it) << endl;
    
    return 0; 
} 
```
**[Run Code](https://rextester.com/EWTM20850)**
