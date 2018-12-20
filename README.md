# 30-Seconds-Of-STL
## 30 Seconds Of STL ( Standard Template Library in C++ )

**A collection of  STL features(functions/libraries) of C++  which can be learned in 30 seconds or less.**

![STL](https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/Logo/stl.png)

[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square)](http://makeapullrequest.com)


## Contents

### ``<algorithm>``

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
* [`reverse`](#unary)
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
* [`binary_search`](#unary)
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

### ``<stack>``
<details>
<summary>View contents</summary>

* [`push`](#push)
* [`pop`](#pop)
* [`top`](#top)
* [`swize`](#swize)
* [`swap`](#swap)
* [`empty`](#empty)
* [`emplace`](#emplace)
</details>

### ``<list>``
  
<details>
<summary>View contents</summary>

* [`end`](#end-list)
* [`back`](#back-list)
* [`cend`](#cend-list)
* [`flip`](#flip)
* [`rend`](#rend)
* [`size`](#size-list)
* [`sort`](#sort-list)
* [`swap`](#swap-list)
* [`begin`](#begin-list)
* [`clear`](#clear-list)
* [`crend`](#crend)
* [`empty`](#empty-list)
* [`erase`](#erase-list)
* [`front`](#front-list)
* [`merge`](#merge-list)
* [`assign`](#assign-list)
* [`cbegin`](#cbegin)
* [`insert`](#insert)
* [`~list`](#~list)
* [`rbegin`](#rbegin)
* [`remove`](#remove)
* [`resize`](#resize)
* [`splice`](#splice-list)
* [`unique`](#unique)
* [`crbegin`](#crbegin)
* [`emplace`](#emplace-list)
* [`reverse`](#reverse-list)
* [`max_size`](#max_size-list)
* [`pop_back`](#pop_back-list)
* [`pop_front`](#pop_front-list)
* [`push_back`](#push_back-list)
* [`emplace_back`](#emplace_back)
* [`get_allocator`](#get_allocator)
</details>

### ``<queue>``
  
<details>
<summary>View contents</summary>

* [`pop`](#pop-queue)
* [`back`](#back-queue)
* [`push`](#push-queue)
* [`size`](#size-queue)
* [`swap`](#swap-queue)
* [`empty`](#empty-queue)
* [`front`](#front-queue)
* [`emplace`](#emplace-queue)
* [`queue`](#queue)
* [`~queue`](#~queue)
</details>

### ``<vector>``
  
<details>
<summary>View contents</summary>

* [`at`](#at-vector)
* [`end`](#end-vector)
* [`back`](#back-vector)
* [`cend`](#cend-vector)
* [`data`](#data-vector)
* [`rend`](#rend-vector)
* [`size`](#size-vector)
* [`swap`](#swap-vector)
* [`begin`](#begin-vector)
* [`clear`](#clear-vector)
* [`crend`](#crend-vector)
* [`empty`](#empty-vector)
* [`erase`](#erase-vector)
* [`front`](#front-vector)
* [`assign`](#assign-vector)
* [`cbegin`](#cbegin-vector)
* [`insert`](#insert-vector)
* [`rbegin`](#rbegin-vector)
* [`resize`](#resize-vector)
* [`vector`](#vector)
* [`crbegin`](#crbegin-vector)
* [`emplace`](#emplace-vector)
* [`reserve`](#reserve-vector)
* [`~vector`](#~vector)
* [`capacity`](#capacity-vector)
* [`max_size`](#max_size-vector)
* [`pop_back`](#pop_back-vector)
* [`emplace_back`](#emplace_back-vector)
* [`get_allocator`](#get_allocator-vector)
* [`shrink_to_fit`](#shrink_to_fit-vector)
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

# push
**Description** : push() function is used to insert an element at the top of the stack. The element is added to the stack container and the size of the stack is increased by 1.

**Example**:
```cpp
    // Empty stack 
    stack<int> mystack; 
    //pushing elements using push()
    mystack.push(0); 
    mystack.push(1); 
    mystack.push(2); 
  
    while (!mystack.empty()) { 
        //deleting elements using pop()
        cout << ' ' << mystack.top(); 
        mystack.pop(); 
    } 
```

# pop
**Description** : pop() function is used to remove an element from the top of the stack(newest element in the stack). The element is removed to the stack container and the size of the stack is decreased by 1.

**Example**:
```cpp
    // Empty stack 
    stack<int> mystack; 
    //pushing elements using push()
    mystack.push(0); 
    mystack.push(1); 
    mystack.push(2); 
  
    while (!mystack.empty()) { 
        //deleting elements using pop()
        cout << ' ' << mystack.top(); 
        mystack.pop(); 
    } 
```

# empty
**Description** : empty() function is used to check if the stack container is empty or not.

**Example**:
```cpp
    // Empty stack 
    stack<int> mystack; 
    //pushing elements using push()
    mystack.push(0); 
    mystack.push(1); 
    mystack.push(2); 
  
    while (!mystack.empty()) { 
        //deleting elements using pop()
        cout << ' ' << mystack.top(); 
        mystack.pop(); 
    } 
```

# top
**Description** : top() function is used to reference the top(or the newest) element of the stack.

**Example**:
```cpp
    // Empty stack 
    stack<int> mystack; 
    //pushing elements using push()
    mystack.push(0); 
    mystack.push(1); 
    mystack.push(2); 
  
    while (!mystack.empty()) { 
        //deleting elements using pop()
        cout << ' ' << mystack.top(); 
        mystack.pop(); 
    } 
```

# adjacent_find 
**Description :**  Binary function which returns first adjacent element pairs based on certain condition (as third argument).  Default condition checks equality.
  
**Example** :

```cpp
    **CODE EXAMPLE **
    std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
 
    // Binary function which returns first adjacent element pairs based on certain condition (as third argument) . 
    // Default condition checks equality.
    auto i  = std::adjacent_find (v.begin(), v.end());
    cout <<"First adjacent element that are equal "<<i<<'\n';
 ```

# Sort
**Description :**  This function is implemented as Quick-sort. The complexity of it is O(N*log(N)).
  
**Example** :

```cpp

using namespace std;   
void show(int a[]) 
{ 
    for(int i = 0; i < 10; ++i) 
        cout << a[i] << " "; 
} 
  
int main() 
{ 
    int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
    cout << "\n The array before sorting is : "; 
    show(a); 
  
    sort(a, a+10); 
  
    cout << "\n\n The array after sorting is : "; 
    show(a); 
  
    return 0; 
  
} 
 ```
### License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE) file for details

### Contributing

Please read [CONTRIBUTING.md](CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.
