# ``<list>``
  
<details>
<summary>View contents</summary>

<ol>
    <li><a href="#end-list"><code>end</code></a></li>
    <li><a href="#back-list"><code>back</code></a></li>
    <li><a href="#cend-list"><code>cend</code></a></li>
    <li><a href="#flip"><code>flip</code></a></li>
    <li><a href="#rend"><code>rend</code></a></li>
    <li><a href="#size-list"><code>size</code></a></li>
    <li><a href="#sort-list"><code>sort</code></a></li>
    <li><a href="#swap-list"><code>swap</code></a></li>
    <li><a href="#begin-list"><code>begin</code></a></li>
    <li><a href="#clear-list"><code>clear</code></a></li>
    <li><a href="#crend"><code>crend</code></a></li>
    <li><a href="#empty-list"><code>empty</code></a></li>
    <li><a href="#erase-list"><code>erase</code></a></li>
    <li><a href="#front-list"><code>front</code></a></li>
    <li><a href="#merge-list"><code>merge</code></a></li>
    <li><a href="#assign-list"><code>assign</code></a></li>
    <li><a href="#cbegin"><code>cbegin</code></a></li>
    <li><a href="#insert"><code>insert</code></a></li>
    <li><a href="#~list"><code>~list</code></a></li>
    <li><a href="#rbegin"><code>rbegin</code></a></li>
    <li><a href="#remove"><code>remove</code></a></li>
    <li><a href="#resize"><code>resize</code></a></li>
    <li><a href="#splice-list"><code>splice</code></a></li>
    <li><a href="#unique"><code>unique</code></a></li>
    <li><a href="#crbegin"><code>crbegin</code></a></li>
    <li><a href="#emplace-list"><code>emplace</code></a></li>
    <li><a href="#reverse-list"><code>reverse</code></a></li>
    <li><a href="#max_size-list"><code>max_size</code></a></li>
    <li><a href="#pop_back-list"><code>pop_back</code></a></li>
    <li><a href="#pop_front-list"><code>pop_front</code></a></li>
    <li><a href="#push_back-list"><code>push_back</code></a></li>
    <li><a href="#emplace_back"><code>emplace_back</code></a></li>
    <li><a href="#get_allocator"><code>get_allocator</code></a>
</ol>
</details>


# insert
**Description** : The list::insert() is used to insert the elements at any position of list. 

**Example**:
```cpp
    // declaring list 
    list<int> list1; 
  
    // using assign() to insert multiple numbers 
    // creates 3 occurrences of "2" 
    list1.assign(3, 2); 
  
    // initializing list iterator to beginning 
    list<int>::iterator it = list1.begin(); 
  
    // iterator to point to 3rd position 
    advance(it, 2); 
  
    // using insert to insert 1 element at the 3rd position 
    // inserts 5 at 3rd position 
    list1.insert(it, 5); 
  
    // Printing the new list 
    cout << "The list after inserting"
         << " 1 element using insert() is : "; 
    for (list<int>::iterator i = list1.begin(); 
         i != list1.end(); 
         i++) 
        cout << *i << " "; 
  
    cout << endl; 
  
```

# begin-list
**Description** : begin() function is used to return an iterator pointing to the first element of the list container.

**Example**:
```cpp
    // declaration of list container 
    list<int> mylist{ 1, 2, 3, 4, 5 }; 
  
    // using begin() to print list 
    for (auto it = mylist.begin(); it != mylist.end(); ++it) 
        cout << ' ' << *it; 

```
# cend-list
**Description** : The list::cend() is a built-in function in C++ STL which returns a constant random access iterator which points to the end of the list. 

**Example**:
```cpp
    // declaration of list 
    list<int> lis = { 100, 200, 300, 400, 500 }; 
  
    // printing list elements 
    cout << "List: " << endl; 
  
    for (auto it = lis.cbegin(); it != lis.cend(); ++it) 
        cout << *it << " "; 

```

# end-list
**Description** : The list::end() is a built-in function in C++ STL which is used to get an iterator to past the last element.

**Example**:
```cpp
    // Creating a list 
    list<int> demoList; 
  
    // Add elements to the List 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
  
    // using end() to get iterator  
    // to past the last element 
    list<int>::iterator it = demoList.end(); 
  
    // This will not print the last element 
    cout << "Returned iterator points to : " << *it << endl; 
  
    // Using end() with begin() as a range to 
    // print all of the list elements 
    for (auto itr = demoList.begin(); 
         itr != demoList.end(); itr++) { 
        cout << *itr << " "; 
    } 

```

# clear-list
**Description** : clear() function is used to remove all the elements of the list container, thus making it size 0.

**Example**:
```cpp

    list<int> mylist{ 1, 2, 3, 4, 5 }; 
  
    mylist.clear(); 
    // List becomes empty 
  
    // Printing the list 
    for (auto it = mylist.begin(); it != mylist.end(); ++it) 
        cout << ' ' << *it; 
 
```

# cbegin
**Description** :he list::cbegin() is a built-in function in C++ STL which returns a constant random access iterator which points to the beginning of the list. 

**Example**:
```cpp
    // declaration of list 
    list<int> lis = { 15, 26, 37, 48, 59 }; 
  
    // Prints the first element 
    cout << "The first element is: " << *lis.cbegin(); 
  
    // printing list elements 
    cout << "\nList: "; 
  
    for (auto it = lis.cbegin(); it != lis.end(); ++it) 
        cout << *it << " "; 
 
```

# front-list
**Description** :The list::front() is a built-in function in C++ STL which is used to return a reference to the first element in a list container.

**Example**:
```cpp
    // Creating a list 
    list<int> demoList; 
  
    // Add elements to the List 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
  
    // get the first element using front() 
    int ele = demoList.front(); 
  
    // Print the first element 
    cout << ele; 
 
```

# back-list
**Description** : The list::back() function in C++ STL returns a direct reference to the last element in the list container.

**Example**:
```cpp
    // Initialization of list 
    list<int> demo_list; 
  
    // Adding elements to the list 
    demo_list.push_back(10); 
    demo_list.push_back(20); 
    demo_list.push_back(30); 
  
    // prints the last element of demo_list 
    cout << demo_list.back(); 

```
# crbegin
**Description** : The list::crbegin() is a built-in function in c++ STL that returns a constant reverse iterator which points to the last element of the list i.e reversed beginning of container.

**Example**:
```cpp
    // declaration of the list 
    list<int> lis = { 109, 207, 305, 403, 501 }; 
  
    // prints the last element 
    cout << "The last element is: " << *lis.crbegin(); 
    cout << "\nList: "; 
  
    for (auto it = lis.crbegin(); it != lis.crend(); ++it) 
        cout << *it << " "; 

```
# remove
**Description** :The list::remove() is a built-in function in C++ STL which is used to remove elements from a list container.

**Example**:
```cpp
    // Creating a list 
    list<int> demoList; 
  
    // Add elements to the List 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
  
    // List before removing elements 
    cout << "List before removing elements: "; 
    for (auto itr = demoList.begin(); 
         itr != demoList.end(); itr++) { 
        cout << *itr << " "; 
    } 
  
    // delete all elements with value 20 
    demoList.remove(20); 

    // List after removing elements 
    cout << "\nList after removing elements: "; 
    for (auto itr = demoList.begin(); 
        itr != demoList.end(); itr++) { 
        cout << *itr << " "; 
    } 
 
```

# swap-list
**Description** : This function is used to swap the contents of one list with another list of same type and size.

**Example**:
```cpp
    // list container declaration 
    list<int> mylist1{ 1, 2, 3, 4 }; 
    list<int> mylist2{ 3, 5, 7, 9 }; 
  
    // using swap() function to  
    //swap elements of lists 
    mylist1.swap(mylist2); 
  
    // printing the first list 
    cout << "mylist1 = "; 
    for (auto it = mylist1.begin(); 
              it != mylist1.end(); ++it) 
        cout << ' ' << *it; 
  
    // printing the second list 
    cout << endl 
        << "mylist2 = "; 
    for (auto it = mylist2.begin(); 
              it != mylist2.end(); ++it) 
        cout << ' ' << *it; 

```

# assign-list
**Description** :The list::assign() is a built-in function in C++ STL which is used to assign values to a list.

**Example**:
```cpp
    // Initialization of list 
    list<int> demo_list; 
  
    // Assigning the value 100, 5 times 
    // to the list, list_demo. 
    demo_list.assign(5, 100); 
  
    // Displaying the list 
    for (int itr : demo_list) { 
        cout << itr << " "; 
    } 

```

# crend
**Description :** The list::crend() is a built-in function in C++ STL that returns a constant reverse iterator which points to the theoretical element preceding the first element in the list i.e. the reverse end of the list. 

**Example** :
```cpp
    // declaration of the list 
    list<int> lis = { 27, 46, 65, 84, 30, 22 }; 
  
    cout << "List: " << endl; 
  
    for (auto it = lis.crbegin(); it != lis.crend(); ++it) 
        cout << *it << " "; 

```

# sort-list
**Description :** sort() function is used to sort the elements of the container by changing their positions.
 
**Example** :

```cpp
    // list declaration of integer type 
    list<int> mylist{ 1, 5, 3, 2, 4 }; 
  
    // sort function 
    mylist.sort(); 
  
    // printing the list after sort 
    for (auto it = mylist.begin(); it != mylist.end(); ++it) 
        cout << ' ' << *it; 

```

 # empty-list
**Description :** The list::empty() is a built-in function in C++ STL is used to check whether a particular list container is empty or not. 

**Example** :
```cpp
    // Creating a list 
    list<int> demoList; 
  
    // check if list is empty 
    if (demoList.empty()) 
        cout << "Empty List\n"; 
    else
        cout << "Not Empty\n"; 
  
    // Add elements to the List 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
  
    // check again if list is empty 
    if (demoList.empty()) 
        cout << "Empty List\n"; 
    else
        cout << "Not Empty\n"; 
} 
```

# merge-list
 **Description :** The list::merge() is an inbuilt function in C++ STL which merges two sorted lists into one. 
 
  **Example** :
```cpp
    // declaring the lists 
    // initially sorted 
    list<int> list1 = { 10, 20, 30 }; 
    list<int> list2 = { 40, 50, 60 }; 
  
    // merge operation 
    list2.merge(list1); 
  
    cout << "List:  "; 
  
    for (auto it = list2.begin(); it != list2.end(); ++it) 
        cout << *it << " "; 

```

# erase-list
 **Description :** The list::erase() is a built-in function in C++ STL which is used to delete elements from a list container. This function can be used to remove a single element or a range of elements from the specified list container.
 
 **Example** :
```cpp
    // Creating a list 
    list<int> demoList; 
  
    // Add elements to the List 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
    demoList.push_back(50); 
  
    // Printing elements of list before deleting 
    // first element 
    cout << "List before deleting first element: "; 
    for (auto itr = demoList.begin(); 
         itr != demoList.end(); itr++) { 
        cout << *itr << " "; 
    } 
  
    // Creating iterator to point to first 
    // element in the list 
    list<int>::iterator itr = demoList.begin(); 
  
    // deleting the first element 
    demoList.erase(itr); 
  
    // Printing elements of list after deleting 
    // first element 
    cout << "\nList after deleting first element:"; 
    for (auto itr = demoList.begin(); 
        itr != demoList.end(); itr++) { 
        cout << *itr << " "; 
    } 

```

# rbegin
**Description :** list::rbegin() is an inbuilt function in C++ STL that returns a reverse iterator which points to the last element of the list.
    
**Example** :
```cpp

    list<int> lis = { 105, 207, 309, 401, 503 }; 
  
    cout << "The list in reverse order: "; 
  
    for (auto it = lis.rbegin(); it != lis.rend(); ++it) 
        cout << *it << " "; 

```

# size-list
**Description :** The list::size() is a built-in function in C++ STL which is used to find the number of elements present in a list container.
    
**Example** :
```cpp
    // Creating a list 
    list<int> demoList; 
  
    // Add elements to the List 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
  
    // getting size of the list 
    int size = demoList.size(); 
  
    cout << "The list contains " << size << " elements"; 

```

# resize
**Description :** The list::resize() is a built-in function in C++ STL which is used to resize a list container. 

**Example** :
```cpp
    // Creating a list 
    list<int> demoList; 
  
    // Adding elements to the list 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
  
    // Initial list: 
    cout << "Initial List: "; 
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++) 
        cout << *itr << " "; 
  
    // Resize list to contain less elements 
    demoList.resize(2); 
    cout << "\n\nList after first resize: "; 
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++) 
        cout << *itr << " "; 
  
    // Resize list to contain more elements 
    demoList.resize(4); 
    cout << "\n\nList after second resize: "; 
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++) 
        cout << *itr << " "; 
  
    // resize list to contain more elements 
    // with a specified value 
    demoList.resize(5, 50); 
    cout << "\n\nList after third resize: "; 
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++) 
        cout << *itr << " "; 

```

# rend
**Description :** list::rend() is an inbuilt function in C++ STL that returns a reverse iterator which points to the position before the beginning of the list.

**Example** :
```cpp

    list<int> lis = { 109, 206, 303, 401, 506 }; 
  
    cout << "The list in reverse order: "; 
  
    for (auto it = lis.rbegin(); it != lis.rend(); ++it) 
        cout << *it << " "; 
  
```

# splice-list
**Description :** The list::splice() is a built-in function in C++ STL which is used to transfer elements from one list to another

**Example** :
```cpp
    // initializing lists 
    list<int> l1 = { 1, 2, 3 }; 
    list<int> l2 = { 4, 5 }; 
    list<int> l3 = { 6, 7, 8 }; 
  
    // transfer all the elements of l2 
    l1.splice(l1.begin(), l2); 
  
    // at the beginning of l1 
    cout << "list l1 after splice operation" << endl; 
    for (auto x : l1) 
        cout << x << " "; 
  
    // transfer all the elements of l1 
    l3.splice(l3.begin(), l1); 
  
    // at the end of l3 
    cout << "\nlist l3 after splice operation" << endl; 
    for (auto x : l3) 
        cout << x << " "; 

```