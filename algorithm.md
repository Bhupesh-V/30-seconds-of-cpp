# ``<algorithm>``

<details>  
<summary>View contents</summary>

* [`allof`](#allof)
* [`anyof`](#anyof)
* [`noneof`](#noneof)
* [`for_each`](#for_each)
* [`for_each_n`](#for_each_n)
* [`count`](#count)
* [`count_if`](#count_if)
* [`mismatch`](#mismatch)
* [`equal`](#equal)
* [`find`](#find)
* [`find_if`](#find_if)
* [`find_if_not`](#find_if_not)
* [`find_end`](#find_end)
* [`find_first_of`](#find_first_of)
* [`adjacent_find`](#adjacent_find)
* [`search`](#search)
* [`search_n`](#search_n)
* [`copy`](#copy)
* [`copy_if`](#copy_if)
* [`copy_n`](#copy_n)
* [`copy_backward`](#copy_backward)
* [`move`](#move)
* [`move_backward`](#move_backward)
* [`fill`](#fill)
* [`fill_n`](#fill_n)
* [`transform`](#transform)
* [`generate`](#generate)
* [`generate_n`](#generate_n)
* [`remove`](#remove)
* [`remove_if`](#remove_if)
* [`remove_copy`](#remove_copy)
* [`remove_copy_if`](#remove_copy_if)
* [`replace`](#replace)
* [`replace_if`](#replace_if)
* [`replace_copy`](#replace_copy)
* [`replace_copy_if`](#replace_copy_if)
* [`swap`](#swap)
* [`swap_ranges`](#swap_ranges)
* [`iter_swap`](#iter_swap)
* [`reverse`](#reverse)
* [`reverse_copy`](#unary)
* [`rotate`](#unary)
* [`rotate_copy`](#unary)
* [`random_shuffle`](#unary)
* [`shuffle`](#unary)
* [`unique`](#unary)
* [`unique_copy`](#unary)
* [`is_partitioned`](#unary)
* [`partition`](#unary)
* [`partition_copy`](#unary)
* [`stable_partition`](#unary)
* [`partition_point`](#unary)
* [`is_sorted`](#unary)
* [`is_sorted_until`](#unary)
* [`sort`](#sort)
* [`partial_sort`](#unary)
* [`partial_sort_copy`](#unary)
* [`stable_sort`](#unary)
* [`nth_element`](#unary)
* [`lower_bound`](#unary)
* [`upper_bound`](#unary)
* [`binary_search`](#binary_search)
* [`equal_range`](#unary)
* [`merge`](#unary)
* [`inplace_merge`](#unary)
* [`includes`](#unary)
* [`set_difference`](#unary)
* [`set_intersection`](#unary)
* [`set_symmetric_difference`](#unary)
* [`set_union`](#unary)
* [`is_heap`](#unary)
* [`is_heap_until`](#unary)
* [`make_heap`](#unary)
* [`push_heap`](#unary)
* [`pop_heap`](#unary)
* [`sort_heap`](#unary)
* [`clamp`](#unary)
* [`max`](#unary)
* [`max_element`](#unary)
* [`min`](#unary)
* [`min_element`](#unary)
* [`minimax`](#unary)
* [`minimax_element`](#unary)
* [`lexicographical_compare`](#unary)
* [`is_permutation`](#unary)
* [`next_permutation`](#unary)
* [`prev_permutation`](#unary)
</details>


# count
**Description :** : Returns the number of elements in the range `[first, last)` satisfying specific criteria(counts the elements that are equal to *value*).

**Example** : 
```cpp
    std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
 
    // determine how many integers in a std::vector match a target value.
    int target1 = 3;
    int num_items1 = count(v.begin(), v.end(), target1);
    cout << "number: " << target1 << " count: " << num_items1 << '\n';
 ```

# count_if
**Description** : Returns the number of elements in the range `[first, last)` satisfying specific criteria(counts the elements that are equal to *value*).

**Example**:
```cpp
    vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
 
    // use a lambda expression to count elements divisible by 3.
    int num_items3 = count_if(v.begin(), v.end(), [](int i){return i % 3 == 0;});
    cout << "number divisible by three: " << num_items3 << '\n';
```

# find
**Description** : Returns the first element in the range [first, last) that satisfies specific criteria(searches for an element equal to *value*).

**Example**:
```cpp
    vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };

    int searchme = 4;
    if(find(std::begin(v), std::end(v), searchme) != end(v)){
        cout <<"\n v conatins 3";
    }
    else
        cout<<"No match !!";
```

# find_if
**Description** : Returns the first element in the range [first, last) that satisfies specific criteria(searches for an element for which predicate/condition p returns *true*).

**Example**:
```cpp
    bool IsOdd (int i) {
    return ((i%2)==1);
    }

    int main(){
        vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
        if(find_if(std::begin(v), std::end(v),IsOdd) != end(v)){
            cout <<"\n Odd Value Found";
        }
        else
            cout<<"No match !!";
        return 0;
    }
```

# find_if_not
**Description** : Returns the first element in the range [first, last) that satisfies specific criteria(searches for an element for which predicate q returns *false*).

**Example**:
```cpp
    bool IsOdd (int i) {
        return ((i%2)==1);
    }

    int main(){
        vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
        if(find_if_not(std::begin(v), std::end(v),IsOdd) != end(v)){
            cout <<"\n First Even Value";
        }
        else
            cout<<"No match !!";
        return 0;
    }
```

# find_first_of
**Description** : Return iterator to the first element in the range [first, last) that is equal to an element from the range [s_first; s_last). If no such element is found, last is returned.(Searches the range [first, last) for any of the elements in the range [s_first, s_last) ).

**Example**:
```cpp
    std::vector<int> v{0, 2, 3, 25, 5};
    std::vector<int> t{3, 19, 10, 2};
 
    auto result = std::find_first_of(v.begin(), v.end(), t.begin(), t.end());
 
    if (result == v.end()) {
        std::cout << "no elements of v were equal to 3, 19, 10 or 2\n";
    } else {
        std::cout << "found a match at "
                  << std::distance(v.begin(), result) << "\n";
    }
```

# generate
**Description** : Used to generate numbers based upon a generator function, and then, it assigns those values to the elements in the container in the range [first, last).
The generator function has to be defined by the user, and it is called successively for assigning the numbers.

**Example**:
```cpp
    int gen() { 
        static int i = 0; 
        return ++i; 
    } 
  
    using namespace std; 
    int main() { 
        int i; 
        vector<int> v1(10); 
  
        std::generate(v1.begin(), v1.end(), gen); 
  
        vector<int>::iterator i1; 
        for (i1 = v1.begin(); i1 != v1.end(); ++i1) { 
            cout << *i1 << " "; 
        } 
        return 0; 
    } 
```

# adjacent_find 
**Description :**  Binary function which returns first adjacent element pairs based on certain condition (as third argument).  Default condition checks equality.
  
**Example** :

```cpp
    std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
 
    // Binary function which returns first adjacent element pairs based on certain condition (as third argument) . 
    // Default condition checks equality.
    auto i  = std::adjacent_find (v.begin(), v.end());
    cout <<"First adjacent element that are equal "<<i<<'\n';
```

# binary_search 
**Description :** Binary search is a widely used searching algorithm that requires the array to be sorted before search is applied. The main idea behind this algorithm is to keep dividing the array in half (divide and conquer) until the element is found, or all the elements are exhausted.
The prototype for binary search is :
```
binary_search(startaddress, endaddress, valuetofind)
  ```
**Example** :
```cpp
    void show(int a[], int arraysize) { 
        for (int i = 0; i < arraysize; ++i) 
            cout << a[i] << " "; 
    } 
  
int main() { 
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
    int asize = sizeof(a) / sizeof(a[0]); 
    cout << "\n The array is : "; 
    show(a, asize); 
  
    cout << "\n\nLet's say we want to search for 2 in the array"; 
    cout << "\n So, we first sort the array"; 
    sort(a, a + asize); 
    cout << "\n\n The array after sorting is : "; 
    show(a, asize); 
    cout << "\n\nNow, we do the binary search"; 
    if (binary_search(a, a + 10, 2)) 
        cout << "\nElement found in the array"; 
    else
        cout << "\nElement not found in the array"; 
  
    cout << "\n\nNow, say we want to search for 10"; 
    if (binary_search(a, a + 10, 10)) 
    cout << "\nElement found in the array"; 
    else
        cout << "\nElement not found in the array"; 
  
    return 0; 
} 
```

# reverse
**Description :**  It reverses the order of the elements in the range [first, last) of any container. 

**Example** :
```cppEverything up-to-date
 int main() { 
          int i; 
          vector<int> v1; 

          v1.push_back(1);
          v1.push_back(2);
          v1.push_back(3);
          v1.push_back(4);

          reverse(v1.begin(),v1.end());

          vector<int>::iterator i1; 
          for (i1 = v1.begin(); i1 != v1.end(); ++i1) { 
              cout << *i1 << " "; 
          } 
          return 0; 
      } 
```

# sort
**Description :**  This function is implemented as Quick-sort. The complexity of it is O(N*log(N)).
  
**Example** :

```cpp   
    void show(int a[]) { 
        for(int i = 0; i < 10; ++i) 
            cout << a[i] << " "; 
    } 
  
    int main() {

        int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
        cout << "\n The array before sorting is : "; 
        show(a); 
  
        sort(a, a+10); 
  
        cout << "\n\n The array after sorting is : "; 
        show(a); 
  
        return 0; 
} 
```